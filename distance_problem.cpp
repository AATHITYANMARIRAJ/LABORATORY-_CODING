

//1.	Create a class for Distance having feet and inches as attributes. Try to give
//the sum of two distance objects.


#include <iostream>
using namespace std;

class Distance{
    private:
         int feet;
         int inch;
    public:
           void set(){
              cout<<"enter the distance in feet\n";
              cin>>feet;     
              
              cout<<"enter the distance in inches\n";
              cin>>inch;    
           
           } 
           int get_feet(){
               return feet;    
           } 
           int get_inch(){
               return inch;    
           }
      
};
int main(){
     Distance obj1;//first object
     Distance obj2;
     int pc=1;
     obj1.set();
     int a1=obj1.get_feet();
     int a2=obj1.get_inch();
     
     obj2.set();
     
     int a3=obj2.get_feet();
     int a4=obj2.get_inch();
     
     int f1=a1+a3;
     int i1=a2+a4;

     if(i1>12){
          int d1=i1/12;
          int d2=i1%12;
          f1+=d1;
          i1=d2;
     }
     
     cout<<"the sum of distances is"<<f1<<" "<<"feet"<<" "<<"and"<<i1<<"inches\n";
     
     
   return 0; 
};
