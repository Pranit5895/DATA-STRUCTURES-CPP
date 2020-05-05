#include <iostream>
#define MAX 10

using namespace std;

class Queue
{
      int front,rear;
      int queue[MAX];
 
      public:
  
      Queue()
      {
        front=rear=-1;
      }
 
      // To insert a node in the Queue
       void qinsert(int item) 
       {
              if(rear==MAX-1)
             {
                cout<<"\nQUEUE OVERFLOW";
             }
             else if(front==-1 && rear==-1)
             {
                front=rear=0;
                queue[rear]=item;
                cout<<"\nITEM INSERTED: "<<item;
             }
             else
             {
                rear++;
                queue[rear]=item;
                cout<<"\nITEM INSERTED: "<<item;
             }
       void qdelete()
       {
              int item;
  
              if(rear==-1)
             {
                cout<<"\nQUEUE UNDERFLOW";
             }
             else if(front==0 && rear==0)
             {
                       item=queue[front];
                       front=rear=-1;
                       cout<<"\n\nITEM DELETED: "<<item;
             }
             else
             {
                      item=queue[front];
                      front++;
                      cout<<"\n\nITEM DELETED: "<<item;
             }
       }
 }
