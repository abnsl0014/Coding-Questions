#include<bits/stdc++.h>
using namespace std;

class node {
public:
    int data;
    node* next;
    node(int d){
        data = d;
        next = NULL;
    }
};

class linkedList {
public:
    node* head = NULL;
    node* tail = NULL;
    linkedList() {
        head = NULL;
        tail = NULL;
    } 
};

void insertAtHead(node* &head, int data) {
    node* n = new node(data);
    n -> next = head;
    head = n;
}
void printll(node *head) {
    while(head != NULL) {
        cout << head -> data << " ";
        head = head-> next;
    }
}
int main() {
    int a;
    cin >> a;
    node* head = NULL;
    insertAtHead(head, a);
    cin >> a;
    insertAtHead(head, a);
    cin >> a;
    insertAtHead(head, a);
    printll(head);
}