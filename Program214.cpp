//  Singly Linear Linked List In C++  //

#include<iostream>
using namespace std;

#pragma pack(1)
struct node
{
    int Data;
    struct node * next;
};

typedef struct node NODE;
typedef struct node * PNODE;
typedef struct node ** PPNODE;

class SinglyLL
{
    public: 
        PNODE First;
        int iCount;

        SinglyLL();

        void InsertFirst(int no);
        void InsertLast(int no);
        void InsertAtPosition(int no, int ipos);

        void DeleteFirst();
        void DeleteLast();
        void DeleteAtPosition(int ipos);

        void Display();
};

SinglyLL :: SinglyLL()
{
    First = NULL;
    iCount = 0;
}

void SinglyLL :: InsertFirst(int no)
{
    // Step 1 : Alloacte the memory for node
    PNODE newn = new NODE;

    // Step 2 : Initialize node
    newn->Data = no;
    newn->next = NULL;

    // Step 3: Check if LL is empty or not
    if(First == NULL)
    {
        First = newn;
        iCount++;
    }
    else    // If LL contains atleast one node
    {
        newn->next = First;
        First = newn;
        iCount++;
    }
}

void SinglyLL :: InsertLast(int no)
{
    // Step 1 : Alloacte the memory for node
    PNODE newn = new NODE;

    // Step 2 : Initialize node
    newn->Data = no;
    newn->next = NULL;

    // Step 3: Check if LL is empty or not
    if(First == NULL)
    {
        First = newn;
        iCount++;
    }
    else    // If LL contains atleast one node
    {
        PNODE temp = First;

        while(temp->next != NULL)
        {
            temp = temp->next;
        }
        temp->next = newn;
        iCount++;
    }
}

void SinglyLL :: InsertAtPosition(int no, int ipos)
{}

void SinglyLL :: DeleteFirst()
{
    if(First == NULL)
    {
        return;
    }
    else if(First->next == NULL)
    {
        delete First;
        First = NULL;
        iCount--;
    }
    else
    {
        PNODE temp = First;
        First = First ->next;
        delete temp;
        iCount--;
    }
}

void SinglyLL :: DeleteLast()
{
    if(First == NULL)
    {
        return;
    }
    else if(First->next == NULL)
    {
        delete First;
        First = NULL;
        iCount--;
    }
    else
    {
        PNODE temp = First;
        
        while(temp->next->next != NULL)
        {
            temp = temp->next;
        }
        delete temp->next;
        temp->next = NULL;
        iCount--;
    }
}

void SinglyLL :: DeleteAtPosition(int ipos)
{}

void SinglyLL :: Display()
{
    cout<<"Elements of Linked List are : "<<"\n";
    PNODE temp = First;

    while(temp != NULL)
    {
        cout<<" | "<<temp->Data<<" |-> ";
        temp = temp->next;
    }
    cout<<"NULL"<<"\n";
}


int main()
{
    SinglyLL obj1;
    SinglyLL obj2;

    obj1.InsertFirst(51);
    obj1.InsertFirst(21);
    obj1.InsertFirst(11);
    obj1.Display();
    cout<<"Number of nodes LL are  : "<<obj1.iCount<<"\n";

    obj1.InsertLast(101);
    obj1.InsertLast(111);
    obj1.InsertLast(121);
    obj1.Display();
    cout<<"Number of nodes LL are : "<<obj1.iCount<<"\n";

    obj1.DeleteFirst();
    obj1.Display();
    cout<<"Number of nodes LL are : "<<obj1.iCount<<"\n";

    obj1.DeleteLast();
    obj1.Display();
    cout<<"Number of nodes LL are : "<<obj1.iCount<<"\n";

    return 0;
}