//fibonaaci problem

#include <iostream>
using namespace std;

class  Fibonaaci{
      private:
             int a1;
             int a2; 
             int temp;     
      public:
             void fibo(){
                 int n;
                 cout<<"enter the first no:\n";
                 cin>>a1;
                 cout<<"enter the second no:\n";
                 cin>>a2;
                 temp=a1+a2;
                 cout<<"enter the range:\n";
                 cin>>n;
                 for(int i=0;i<n;i++){
                     cout<<a1<<" ";
                     a1=a2;
                     a2=temp;
                     temp=a1+a2;         
                }     
                cout<<"\n";  
             }
       
};
int main(){
  Fibonaaci obj1;
  obj1.fibo();
  return 0;    
}