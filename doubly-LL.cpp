#include<iostream>
#include<cstdlib>
using namespace std;
struct linkedlist{
    int data;
    struct linkedlist *next;
    struct linkedlist *prev;
}*head,*p,*q;

void create(){
    typedef struct linkedlist node;
    int n;
    cout << "Enter number of nodes: ";
    cin >> n;
    head = NULL;
    for (int i = 0; i < n; i++)
    {
        if(head == NULL){
            p = (node*)malloc(sizeof(node));
            cout << "Enter data: ";
            cin >> p->data;
            p->next = NULL;
            p->prev = NULL; // Corrected
            head = p;
        }
        else{
            q = (node*)malloc(sizeof(node));
            cout << "Enter data: ";
            cin >> q->data;
            q->next = NULL;
            q->prev = p;
            p->next = q;
            p = q;
        }
    }
}

void insert_end(int val) {
    typedef struct linkedlist node;
    node *temp = (node*)malloc(sizeof(node));
    temp->data = val;
    temp->next = NULL;
    temp->prev = NULL;
    if (head == NULL) {
        head = temp;
        p = temp;
    } 
    else {
        p = head;
        while (p->next != NULL) {
            p = p->next;
        }
        p->next = temp;
        temp->prev = p;
    }
}

void print(){
    p = head;
    while (p != NULL)
    {
        cout << p->data << " ";
        p = p->next;
    }
    cout << endl;
}

int main(){
    cout << "ADITYA KUMAR 2400320100075" <<endl;
    create();
    print();
    int val;
    cout << "Enter value to insert at end: ";
    cin >> val;
    insert_end(val);
    print();
    return 0;
}