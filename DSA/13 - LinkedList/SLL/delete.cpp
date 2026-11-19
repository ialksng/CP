#include<bits/stdc++.h>
using namespace std;

struct Node {
    int data;
    Node* next;

    Node(int val) {
        data = val;
        next = NULL;
    }
};

Node* convertArr2LL(vector<int> &arr) {
    if (arr.empty()) return NULL;
    Node* head = new Node(arr[0]);
    Node* current = head;
    for (int i = 1; i < arr.size(); i++) {
        current->next = new Node(arr[i]);
        current = current->next;
    }
    return head;
}

void printList(Node* head) {
    Node* temp = head;
    while (temp != NULL) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

Node* deleteHead(Node *head) {
    if (head == NULL) return head;
    Node* temp = head;
    head = head->next;
    delete temp;
    return head;
}

Node* deleteTail(Node *head) {
    if (head == NULL || head->next == NULL) {
        return NULL;
    }
    Node* temp = head;
    while (temp->next->next != NULL) {
        temp = temp->next;
    }
    delete temp->next;
    temp->next = nullptr;
    return head;
}

Node* deleteKthNode(Node *head, int k) {
    if (head == NULL) return head;
    if (k == 1) {
        // return deleteHead(head);
        Node *temp = head;
        head = head->next;
        delete temp; // free(temp);
        return head;
    }

    int count = 0;
    Node *temp = head;
    Node *prev = NULL;
    while (temp != NULL) {
        count++;
        if (count == k) {
            prev->next = prev->next->next;
            delete temp;
            break;
        }
        prev = temp;
        temp = temp->next;
    }
    return head;
}

Node* deleteValNode(Node *head, int val) {
    if (head == NULL) return head;
    if (head->data == val) {
        Node *temp = head;
        head = head->next;
        delete temp;
        return head;
    }

    Node *temp = head;
    Node *prev = NULL;
    while (temp != NULL) {
        if (temp->data == val) {
            prev->next = temp->next;
            delete temp;
            return head;
        }
        prev = temp;
        temp = temp->next;
    }
    return head;
}

int main() {
    vector<int> arr = {12, 5, 8, 7};
    Node* head = convertArr2LL(arr);

    head = deleteHead(head);
    printList(head);

    head = deleteTail(head);
    printList(head);

    head = deleteKthNode(head, 3);
    printList(head);

    head = deleteValNode(head, 8);
    printList(head);

    return 0;
}