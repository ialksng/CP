#include<bits/stdc++.h>
using namespace std;

struct Node {
    int data;
    Node* next;

    Node(int val) {
        data = val;
        next = NULL;
    }

    Node(int val, Node* nextNode) {
        data = val;
        next = nextNode;
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

Node* insertHead(Node *head, int val) { // O(1)
    return new Node(val, head);
}

Node* insertTail(Node *head, int val) { // O(n)
    if (head == NULL) return new Node(val);

    Node* temp = head;
    while (temp->next != NULL) {
        temp = temp->next;
    }
    temp->next = new Node(val);
    return head;
}

Node* insertAtKthNode(Node *head, int k, int val) { // O(n)
    if (head == NULL)
        if (k == 1) 
            return new Node(val);
    else return head;

    if (k == 1) 
        return new Node(val, head);

    int count = 0;
    Node *temp = head;
    while (temp != NULL) {
        count++;
        if (count == k-1) {
            Node *newNode = new Node(val, temp->next);
            temp->next = newNode;
            break;
        }
        temp = temp->next;
    }

    // Node *current = head;
    // for (int i = 1; i <= k-2 && current != NULL; i++) {
    //     current = current->next;
    // }
    // if (current != NULL) return head;
    // temp -> next = current->next;
    // current->next = temp;

    return head;
}

Node* insertBeforeValue(Node *head, int valNode, int val) { // O(n)
    if (head == NULL) return NULL;

    if (head->data == valNode) 
        return new Node(val, head);

    Node *temp = head;
    bool found = 0;
    while (temp->next != NULL) {
        if (temp->next->data == valNode) {
            Node *newNode = new Node(val, temp->next);
            temp->next = newNode;
            found = 1;
            break;
        }
        temp = temp->next;
    }
    if (!found) {
        cout << "Value " << valNode << " not found in the list." << endl;
    }
    return head;
}

int main() {
    vector<int> arr = {12, 5, 8, 7};
    Node* head = convertArr2LL(arr);

    head = insertHead(head, 100);
    printList(head);

    head = insertTail(head, 15);
    printList(head);

    head = insertAtKthNode(head, 100, 2);
    printList(head);

    head = insertBeforeValue(head, 25, 12);
    printList(head);

    return 0;
}