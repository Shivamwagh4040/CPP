#include<iostream>
using namespace std;

template <class T>
struct node
{
    T data;
    struct node *next;
};

template <class T>
class SinglyLL
{
    public:
        struct node<T> * First;

        SinglyLL();

        void InsertFirst(T no);
        void InsertLast(T no);
        void InsertAtPos(T no, int ipos);
        void Display();
        int Count();
};

template <class T>
SinglyLL<T> :: SinglyLL()
{
    First = NULL;
}

template <class T>
void SinglyLL<T> :: InsertFirst(T no)
{
    struct node<T> * newn = new node<T>;

    newn -> data = no;
    newn -> next = NULL;

    if(First == NULL)
    {
        First = newn;
    }

    else
    {
        newn -> next = First;
        First = newn;
    }
}

template <class T>
void SinglyLL<T> :: InsertLast(T no)
{
    struct node<T> * newn = new node<T>;

    newn -> data = no;
    newn -> next = NULL;

    if(First == NULL)
    {
        First = newn;
    }

    else
    {
        struct node<T> * temp = First;

        while(temp -> next != NULL)
        {
            temp = temp -> next;

        }
        temp -> next = newn;
    }
}

template <class T>
void SinglyLL<T> :: InsertAtPos(T no, int ipos)
{
    int iCount = 0;

    if((ipos < 1) || (ipos > iCount + 1))
    {
        cout<<"Invalid Position"<<"\n";
        return;
    }
    if(ipos == 1)
    {
        InsertFirst(no);
    }
    else if(ipos == iCount + 1)
    {
        InsertLast(no);
    }
    else
    {
        struct node<T> * newn = new node<T>;

        newn -> data = no;
        newn -> next = NULL;

        struct node<T> * temp = First;
        for(int iCnt = 1; iCnt < ipos - 1; iCnt++)
        {
            temp = temp -> next;
        }
        newn -> next = temp -> next;
        temp -> next = newn;
    }
}

template <class T>
void SinglyLL<T> :: Display()
{
    cout<<"Elements of Linked List are : "<<"\n";

    struct node<T> * temp = First;

    while(temp != NULL)
    {
        cout<<" | "<<temp -> data<< " | -> ";
        temp = temp -> next;
    }
    cout<<"\n";
}

template <class T>
int SinglyLL<T> :: Count()
{
    struct node<T> * temp = First;
    int iCnt = 0;

    while(temp != NULL)
    {
        iCnt++;
        temp = temp -> next;
    }
    return iCnt;
}

int main()
{
    int iRet = 0;

    SinglyLL <int> iobj;
    iobj.InsertFirst(21);
    iobj.InsertFirst(11);
    iobj.InsertLast(51);
    iobj.InsertLast(101);
    iobj.Display();
    iRet = iobj.Count();
    cout<<"Number of nodes are : "<<iRet<<"\n";

    iobj.InsertAtPos(105,3);
    iobj.Display();
    iRet = iobj.Count();
    cout<<"Number of nodes are : "<<iRet<<"\n";

    return 0;
}