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

        SinglyLL();

        void InsertFirst(int no);
        void InsertLast(int no);
        void InsertAtPosition(int no, int ipos);

        void DeleteFirst(int);
        void DeleteLast(int);
        void DeleteAtPosition(int ipos);

        void Display();
        void Count();
};

int main()
{
    SinglyLL obj;

    return 0;
}