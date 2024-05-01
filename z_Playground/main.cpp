#include<iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;
    Node* prev;
    Node(int x)
    :data(x), prev(nullptr), next(nullptr) {}
};

void insertTail(Node*& head, int x) {
    Node* tmp=new Node(x);
    if(head==nullptr) {
        head=tmp;
    }
    else {
        Node* tail=head;
        while(tail!=nullptr && tail->next!=nullptr) {
            tail=tail->next;
        }
        tail->next=tmp;
        tmp->prev=tail;
    }
}

void insertHead(Node*& head, int x) {
    Node* newNode=new Node(x);
    newNode->next=head;
    head->prev=newNode;
    head=newNode;
}

void print(Node* head) {
    Node* tail=nullptr;
    // Forward print and find tail
    for(Node* cur=head; cur!=nullptr; cur= cur->next) {
        cout<<cur->data<<" ";
        tail=cur;   // Tail will be last non-null Node
    }
    cout<<endl;
    // Reverse print from tail
    for(Node* cur=tail; cur!=nullptr; cur=cur->prev) {
        cout<<cur->data<<" ";
    }
    cout<<endl;
}

void deleteHead(Node*& head) {
    Node* tmp=head;
    if(head->next==nullptr) {
        delete tmp;
        head=nullptr;
    }
    head=head->next;
    head->prev=nullptr;
    tmp->next=nullptr;
    delete tmp;
}

void deleteTail(Node*& head) {
    Node* cur=head;
    while(cur!=nullptr && cur->next!=nullptr) {
        cur=cur->next;
    }
    Node* tmp=cur;
    cur=cur->prev;
    if(cur!=nullptr)
        cur->next=nullptr;
    delete tmp;
}

void solve() {
    Node* head=nullptr;
    int n;
    cout<<"Enter the size of the list:"<<endl;
    cin>>n;
    cout<<"Enter "<<n<<" element"<<((n==1)?"":"s")<<endl;
    for(int i=0; i<n; i++) {
        int tmp;
        cin>>tmp;
        insertTail(head,tmp);
    }
    cout<<"Doubly Linked List:"<<endl;
    print(head);
    insertHead(head,1);
    cout<<"Doubly Linked List:"<<endl;
    print(head);
}

int main() {
    solve();
    return 0;
}