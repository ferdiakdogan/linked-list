#ifndef PRIORITYQ_CLASS
#define PRIORITYQ_CLASS

#include "link.h"

template <class T>
class PriorityQueue
{
private:
    // assume T is a data type where > (greater than), < (less than) and == (equal to)
    // operators that allow comparison are defined and overloaded.
    LinkedList<T> Q;

public:
    // constructors
    PriorityQueue(void); // PROVIDED BELOW
    PriorityQueue(const PriorityQueue<T>& PQ); // Copy Constructor

    // destructor
    ~ PriorityQueue(void);

    int QSize(void) const;   // Returns the number of items stored in the Priority Queue
    int QEmpty(void) const; // PROVIDED BELOW

    void ShowQ(); // PROVIDED BELOW

    void QInsert(const T& item); // Inserts the item at the correct location in the Q List

    // Deletion methods
    T QDelete(void); // Deletes and returns the item with the highest priority

};

template <class T>
PriorityQueue<T>::PriorityQueue(void)
{}

template <class T>
int  PriorityQueue<T>::QEmpty(void) const
{
    return Q.ListEmpty();
}


template <class T>
void PriorityQueue<T>::ShowQ()
{
    for(Q.Reset(); !Q.EndOfList(); Q.Next())
        cout<<Q.Data()<<" ";
    cout<<"\n";
}



/***********************************/
/***********************************/
/* REST OF THE IMPLEMENTATION HERE */
/***********************************/
/***********************************/

//constructor for Priority Queue
template <class T>
PriorityQueue<T>::PriorityQueue(const PriorityQueue<T>& PQ)
{
    Q.CopyList(PQ);         //Use LinkedList CopyList function
}

//Destructor for PriorityQueue
template <class T>
PriorityQueue<T>::~PriorityQueue(void)
{
    Q.ClearList();          //Use LinkedList ClearList function
}

//Return the size of queue
template <class T>
int PriorityQueue<T>::QSize(void) const
{
    return Q.ListSize();       //Use LinkedList ListSize function
}

//Delete the highest priority Node
template <class T>
T PriorityQueue<T>::QDelete(void)
{
    LinkedList<T> *prevPtr, *currPtr;
    Q.Reset();          //Start from first Node
    if(QEmpty())        //Deleting form an empty queue, return error
    {
        cerr << "Deleting from an empty Queue!" << endl;
        exit(1);
    }
    for (int i=1 ; i<Q.ListSize() ; i++)    //Go through all Nodes until last Node is reached
    {
        Q.Next();
    }
    Q.DeleteAt();               //DeleteAt rear
}

//Insert a new Node according to its priority
template <class T>
void PriorityQueue<T>::QInsert (const T& item)
{
    for(Q.Reset(); !Q.EndOfList(); Q.Next())    //Go through all Nodes
        {
            if(item<Q.Data()) break;            //if suitable location is found break from loop
        }
        if(Q.ListEmpty())                       //Insert at found location
        {
            Q.InsertAt(item);
        }
        else
        {
            Q.InsertAt(item);
        }
}

#endif  // PRIORITYQ_CLASS
