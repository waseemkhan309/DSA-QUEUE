// Simple Queue
#include<iostream>
using namespace std;
#define size 4
class queues{
  private:
  int f,r,queue[size];
  public:
  queues(){
      f=r=-1;
  }
  //Enqueue operation
  void enqueue(){
      if(r==size-1){
          cout<<"Queue is Full";
          return;
      }else{
          r++;
      cout<<"Enter the element : ";cin>>queue[r];
      }
      if(f==-1){
          f=0;
      }
      }
      //DeQueue operation
      void dequeue(){
          if(f==-1){
              cout<<"queue is Empty."<<endl;
              return;
          }
          cout<<"Delete the element is : "<<queue[f]<<endl;
          if(f==r){
              r=f=-1;
          }else{
              f=f+1;
          }
      }
      //Display simple queue
      void display(){
          if(f==-1){
              cout<<"Queue is empty"<<endl;
              return;
          }else{
          for(int i=0;i<size;i++){
              cout<<queue[i]<<endl;
          }
          }
      }
};
int main(){
    queues q;
    //enqueue elements in queue
    q.enqueue();
    q.enqueue();
    q.enqueue();
    q.enqueue();
    q.display();   //display elements in queue
    //Delete elements from queue
    q.dequeue();
    q.dequeue();
    q.dequeue();
    q.dequeue();
    // q.dequeue();
}