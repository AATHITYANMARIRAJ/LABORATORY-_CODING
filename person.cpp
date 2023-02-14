#include <iostream>
#include <string>
using namespace std;

class student{
	private:
	   string name;
	   int id;
	   int salary;
	   
	public:
		
	  void set(){
	   cout<<"enter the name of the student\n";
	   cin>>name;
	   
	   cout<<"enter the id\n";
	   cin>>id;
	   
	   cout<<"enter the salary of the student\n";
	   cin>>salary;
	}
	
	 void display(){
	 	cout<<"the name of the student is "<<name<<"\n";
	 	cout<<"the id of the student is "<<id<<"\n";
	 	cout<<"the salary of the student is "<<salary<<"\n";
	 }
	 string get_name(){
	   return name;
	}
	int get_salary(){
	   return salary;
	}
};

int main(){
   student s[100];
   int i=0;
   int n;
   cout<<"enter for how many studets u want to enter the details\n";
   cin>>n;
   //setting values
   for(int i=0;i<n;i++){
   	  s[i].set();
   }
   cout<<"\n";
   
   //displaying values
   for(int j=0;j<n;j++){
   	 s[j].display();
   	 cout<<"\n";
   }
   
   //putting salary in an array
   int sal[100];
   for(int k=0;k<n;k++){
   	  sal[k]=s[k].get_salary();
	  
   }
   
   //bubble sort
   for(int i=0;i<n;i++){
   	for(int j=i+1;j<n;j++){
		if(sal[i]>sal[j]){
			swap(sal[i],sal[j]);
		}
	}
	   
	
   }
   int gt=sal[n-1];
   
   //finding the person with the highest salary
   string n1;
   int s1;
   
   for(int k=0;k<n;k++){
   	  int a=s[k].get_salary();
   	  if(a==gt){
   	  	  n1=s[k].get_name();
   	  	  s1=s[k].get_salary();
		 }
   }
   
   cout<<n1<<" "<<"is the highest paid employee with salary"<<" "<<s1;
   
   return 0;
}
