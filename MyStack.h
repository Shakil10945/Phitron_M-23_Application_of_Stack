#include<bits/stdc++.h>
using namespace std;

class Node
{
public:
    int value;
    Node *next;
    Node *prev;

    Node(int val)
    {
        value=val;
        next=NULL;
        prev=NULL;
    }
};
class Stack
{
    Node *head;
    Node *top;
    int count=0;

public:
    Stack()
    {
        head=NULL;
        top=NULL;
    }

    //PUSH
    void push(int val)
    {
        Node *newNode = new Node(val);

        if(head==NULL)
        {
            head=top=newNode;
            count++;
            return;
        }

        top->next=newNode;
        newNode->prev=top;
        top=newNode;
        count++;
    }
    //POP
    int pop()
    {
        Node *delNode;
        delNode = top;
        int chk=-1;
        if(head==NULL)
        {
            cout<< "Stack Underflow"<<endl;
            return chk;
        }
        else if(top==head)
        {
            head=top=NULL;
        }
        else
        {
            top=delNode->prev;
            top->next=NULL;
        }
        chk=delNode->value;
        delete delNode;
        count--;
        return chk;
    }

    //Empty
    bool empty()
    {
        if(head==NULL)  return true;
        else            return false;
    }

    //Size
    int size()
    {
        return count;
    }

    //TOP
    int Top()
    {
        if(top==NULL)
        {
            cout<< "There is no element in top"<<endl;
            return -1;
        }
        else
        {
            return top->value;
        }
    }
};
