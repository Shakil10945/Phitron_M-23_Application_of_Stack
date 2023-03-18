#include<bits/stdc++.h>
using namespace std;

template <typename N> class Node
{
public:
    N value;
    Node *next;
    Node *prev;

    Node(N val)
    {
        value=val;
        next=NULL;
        prev=NULL;
    }
};
template <typename S> class Stack
{
    Node <S> *head;
    Node <S> *top;
    int count=0;

public:
    Stack()
    {
        head=NULL;
        top=NULL;
    }

    //PUSH
    void push(S val)
    {
        Node <S> *newNode = new Node <S> (val);

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
    S pop()
    {
        Node <S> *delNode;
        delNode = top;
        S chk;
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
    S Top()
    {
        S chk;
        if(top==NULL)
        {
            cout<< "There is no element in top"<<endl;
        }
        else
        {
            chk=top->value;
        }
        return chk;
    }
};
