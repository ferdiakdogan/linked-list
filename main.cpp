#include <iostream>
#include <stdlib.h>
#include "link.h"
#include "node.h"
#include "PQ.h"

using namespace std;

int main()
{
    LinkedList<char> L;
    PriorityQueue<char> S;

    L.InsertAt('A');
    L.InsertRear('B');
    L.InsertRear('C');
    L.InsertFront('d');
    L.InsertAt('4');
    L.InsertRear('r');
    L.InsertRear('y');
    L.InsertFront('6');
    L.InsertAfter('H');
    L.InsertAt('0');
    L.InsertRear('z');
    L.InsertAfter('k');
    L.InsertAt('7');


    L.DeleteFront();
    L.DeleteAt();
    L.InsertRear('l');
    L.InsertAfter('9');
    L.DeleteAt();
    int q = L.ListSize();
    int p = L.CurrentPosition();
    int r = L.EndOfList();

    cout<<"Current position:"<<p<<endl;
    cout<<"List Size:"<<q<<endl;
    cout<<"End of List:"<<r<<endl;

    if(L.ListEmpty())
    cout<<"EmptyList"<<endl;

    for(L.Reset(); !L.EndOfList(); L.Next())
    {
        cout<<L.Data()<<" ";
    cout<<"\n";
    }

   S.QInsert('A');
   S.QInsert('B');
   S.QInsert('F');
   S.QInsert('G');
   S.QInsert('C');
   S.QInsert('E');
   S.QInsert('D');
   S.QInsert('I');
   S.QInsert('H');
   S.QInsert('B');
   S.QDelete();
   cout <<"Queue contents:"<<endl;
   S.ShowQ();
   int t = S.QSize();
   cout <<"Queue Size: "<< t << endl;



}
