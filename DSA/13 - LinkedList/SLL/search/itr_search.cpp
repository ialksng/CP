#include<bits/stdc++.h>
using namespace std;

struct Node {
    int data;
    Node *next;

    Node(int x) {
        data = x;
        next = NULL;
    }
};

int searchList(Node *head, int x);

int main() {
    Node *head = new Node(10);
    head -> next = new Node(20);
    head -> next -> next = new Node(30);
    head -> next -> next -> next = new Node(40);

    searchList(head, 30);

    return 0;
}

int searchList(Node *head, int x) {
    int pos = 1;
    while (head != NULL) {
        if (head -> data == x) return pos;
        else pos++;
        head = head -> next;
    }
    return -1;
}