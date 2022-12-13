#include<iostream>
using namespace std;
class priorityqueue{
  private:
  int i,f,r;
  int a[5]={1,10,};
  public:
  priorityqueue(){       // constructor
      i=0;
      f=0;
      r=1;
  }
  void isertion(int val){
      if(r>=4){
          cout<<"queue is Full"<<endl;
          return ;
      }
      else if(val>=a[r]){
          r++;
          a[r]=val;
      }
      else{
          i=r;
          while(i!=-1){
              if(val<a[i]){
                  a[i+1]=a[i];
                  i--;
              }else{
                  a[i+1]=val;
                  r++;
                  break;
              }
          }
      }
  }
 void deletion(){    //deletion
          if(f<0){
              cout<<"queue is Empty."<<endl;
              return;
          }
          cout<<"Delete the element is : "<<a[f]<<endl;
          if(f==r){
              r=f=-1;
          }else{
              a[f]=0;
              f=f+1;
          }
      }
  void display(){     //display
      cout<<"Display Queue"<<endl;
      if(r<0){
          cout<<"Queue is empty"<<endl;
      }else{
          for(int i=0;i<=r;i++){
              cout<<a[i]<<endl;
          }
      }
  }
};
int main(){
    priorityqueue p;
    p.isertion(20);
    p.isertion(3);
    p.isertion(4);
    p.display();
    p.deletion();
    p.display();
    p.isertion(2);
    // p.deletion();
    p.display();
    return 0;
}