// Simple Queue
#include<iostream>
using namespace std;
#define size 4
class circularqueues{
  private:
  int f,r,queue[size];
  public:
  circularqueues(){
      f=r=-1;
  }
  //Enqueue operation
  void enqueue(){
    //   check isFull Queue
      if((f==0 && r==size-1) || (f-r==1)){
          cout<<"Circular Queue is Full";
          return;
      }
      else if(r==-1){
          f=r=0;
      }
      else if(r==size-1){
        r=0;   
      }
      else{
          r++;
      }
      cout<<"Enter the element : ";cin>>queue[r];
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
              cout<<": Elemnts in Queue :"<<endl;
          for(int i=0;i<size;i++){
              cout<<queue[i]<<endl;
          }
          }
      }
};
int main(){
    circularqueues q;
    //enqueue elements in queue
    q.enqueue();
    q.enqueue();
    q.enqueue();
    q.enqueue();
    q.display();   //display elements in queue
    //Delete elements from queue
    q.dequeue();
    q.enqueue();
    q.display(); 
    // q.dequeue();
    // q.dequeue();
    // q.dequeue();
    // q.dequeue();
}