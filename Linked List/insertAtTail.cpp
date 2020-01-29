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
void insertAtTail(node* &head, int data) {
    node* n = new node(data);
    if(head == NULL) {
        head = n;
        return;
    }
    node* temp = head;
    while(temp -> next != NULL) {
        temp = temp -> next;
    }
    temp -> next = n;
    n -> next = NULL;
}

int len(node* head) {
    int len = 0;
    while(head != NULL) {
        len++;
        head = head -> next;
    }
    return len;
}
void insertInMiddle(node* &head, int data, int p) {
    node* temp = head;
    node* n = new node(data);
    if(head == NULL || p == 0) {
        insertAtHead(head, data);
        return;
    }
    if(p > len(head)) {
        insertAtTail(head, data);
        return;
    }
    while(p-1) {
        temp = temp -> next;
        p--;
    }
    n -> next = temp-> next;
    temp -> next = n; 
}
void printll(node *head) {
    while(head != NULL) {
        cout << head -> data << " ";
        head = head-> next;
    }
}

int main() {
    int a, k;
    cin >> a;
    node* head = NULL;
    insertAtTail(head, a);
    cin >> a;
    insertAtTail(head, a);
    cin >> a;
    insertAtHead(head, a);
    cin >> a;
    cin >> k;
    insertInMiddle(head, a, k);
    printll(head);
}