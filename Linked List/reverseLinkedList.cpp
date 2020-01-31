#include<bits/stdc++.h>
using namespace std;

class node {
public:
    int data;
    node* next;
    node(int d) {
        data = d;
        next = NULL;
    }
};
void insertAtHead(node* &head, int d) {
    node* n = new node(d);
    n -> next = head;
    head = n;
}
void printll(node* head) {
    while (head != NULL) {
        cout << head -> data << " ";
        head = head -> next;
    }
}
void reverse(node*& head) {
    node* c = head;
    node* n = NULL;
    node* p = NULL;
    while (c != NULL) {
        n = c -> next;
        c -> next = p;
        p = c;
        c = n;
    }
    head = p;
}
int main() {
    node* head = NULL;
    int a;
    cin >> a;
    insertAtHead(head, a);
    cin >> a;
    insertAtHead(head, a);
    cin >> a;
    insertAtHead(head, a);
    printll(head);
    reverse(head);
    cout << "\n";
    printll(head);
}