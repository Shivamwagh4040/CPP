#include<iostream>
using namespace std;

struct node
{
    int data;
    struct node *next;
};

class Queue
{
    public:
        struct node *First;
        int iCount;

        Queue();

        bool IsQueueEmpty();
        void EnQueue(int no);      // Insert
        int DeQueue();              // Delete
        void Display();
};

Queue :: Queue()
{
    First = NULL;
    iCount = 0;
}

bool Queue :: IsQueueEmpty()
{
    if (iCount == 0)
    {
        return true;
    }
    else
    {
        return false;
    }
    
}

void Queue :: EnQueue(int no)    // InsertFirst
{
    struct node *newn = new node;

    newn -> data = no;
    newn -> next = NULL;

    if(First == NULL)
    {
        First = newn;
    }
    else
    {
        struct node *temp = First;

        while(temp -> next != NULL)
        {
            temp = temp -> next;
        }
        temp -> next = newn;
    }
    iCount++;

    cout<<no<<"gets pushed in the stack succesfully"<<"\n";
}

int Queue :: DeQueue()      // DeleteFirst
{
    if(First == NULL)
    {
        cout<<"Unable to DeQueue the element as Stack is empty."<<"\n";
        return -1;
    }
    else
    {
        int value = First -> data;
        struct node *temp = First;

        First = First -> next;
        delete temp;

        iCount--;

        return value;
    }
}

void Queue :: Display()
{
    if(First == NULL)
    {
        cout<<"Stack is empty."<<"\n";
    }
    else
    {
        cout<<"Elements of stack are : "<<"\n";

        struct node *temp = First;
        while(temp != NULL)
        {
            cout<<" | "<<temp -> data<<" |-> ";
            temp = temp -> next;
        }
        cout<<"NULL"<<"\n";
    }
}

int main()
{
    Queue obj;

    obj.EnQueue(11);
    obj.EnQueue(21);
    obj.EnQueue(51);
    obj.EnQueue(101);

    obj.Display();

    int iRet = obj.DeQueue();
    cout<<"Poped elements is : "<<iRet<<"\n";

    iRet = obj.DeQueue();
    cout<<"Poped element is : "<<iRet<<"\n";

    obj.Display();

    return 0;
}