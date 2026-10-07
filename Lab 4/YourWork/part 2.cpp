#include<iostream>
using namespace std;
struct node
{
    int val;
    node *next;
    node *prev;
};
struct DoublyLinkedList
{
    node *head,*tail;
    DoublyLinkedList()
    {
        head = NULL;
        tail = NULL;
        cout << "Doubly Linked List initialized!\n";
    }
    void enqueueTail(int x)
    {
        node *cur = new node;
        cur->val = x;
        cur->next = NULL;
        cur->prev = NULL;
        if(head == NULL && tail == NULL){

            head = tail = cur;
        return;
    }
    tail->next = cur;
    cur->prev = tail;
    tail = cur;
}
void enqueueHead(int x)
{
    node *cur = new node;
    cur->val = x;
    cur->next = NULL;
    cur->prev = NULL;
    if(head == NULL && tail == NULL)
    {
        head = tail = cur;
        return;
    }
    cur->next = head;
    head->prev = cur;
    head = cur;
}
void printForward()
{
    cout <<"Forward: NULL <- ";
    node *cur = head;
    if(cur == NULL)
    {
        cout << "List is Empty!";
        return;
    }
    while (cur !=NULL)
    {
        cout <<cur->val;
        if(cur->next != NULL) cout <<"<->";
        cur = cur->next;
    }
    cout<< " ->NULL\n";
}
void printListReverse()
{
    cout << "Reverse:  NULL <- ";
    node *cur = tail;
    if (cur == NULL)
    {
        cout << "List is Empty!\n";
        return;
    }
    while (cur != NULL)
    {
        cout << cur->val;
        if (cur->prev != NULL) cout << " <-> ";
        cur = cur->prev;
    }
    cout << " -> NULL\n";
}
};
int main()
{
    DoublyLinkedList d1;
    d1.enqueueTail(20);
    d1.enqueueTail(30);
    d1.enqueueHead(10);
    d1.enqueueHead(5);
    d1.printForward();
    d1.printListReverse();
    return 0;
}









