#include<bits/stdc++.h>
using namespace std;

struct Node {
    int data;
    Node* next;

    Node(int data1, Node* next1) {
        data = data1;
        next = next1;
    }

    Node(int data1) {
        data = data1;
        next = nullptr;
    }
};

Node* convert2LL(vector<int> & arr) {
    Node* head = new Node(arr[0]);
    Node* temp = head;
    for (int i = 1; i < arr.size(); i++) {
        Node* newNode = new Node(arr[i]);
        temp->next = newNode;
        temp = newNode;
    }
    return head;
}

int lengthofLL(Node* head) {
    int count = 0;
    Node* temp = head;
    while(temp) {
        count++;
        temp = temp->next;
    }
    return count;
}

bool searchInLL(Node* head, int key) {
    Node* temp = head;
    while(temp) {
        if(temp -> data == key) return true;
        temp = temp -> next;
    }
    return false;
}

void printLL(Node* head) {
    Node* temp = head;
    while(temp) {
        cout << temp-> data  << " ";
        temp = temp->next;
    }
    cout << endl;
}

Node* deleteHead(Node* head) {
    if(head == NULL) return head;
    Node* temp = head;
    head = temp->next;
    delete temp;
    return head;
}

Node* deleteTail(Node* head) {
    if(head == NULL || head->next == NULL) return NULL;
    Node* temp = head;
    while(temp->next->next != NULL) { 
        temp = temp->next;
    }
    delete temp -> next;
    temp->next = NULL;
    return head;
}

int main() {
    vector<int> arr = {12, 3, 5, 7};
    Node* head = convert2LL(arr);
    return 0;
}