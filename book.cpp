/*
Create a class named Book with proper ID, Author Name, Publisher
name, price and year as its data members. Write suitable member
functions to collect the details of various books. Find out the number
of books having the same price.

*/

#include <iostream>
using namespace std;
class Book{
      private:
	     int id;
		 char author_name[50];
		 char publisher_name[50];
		 int price;
		 int year;

	public:
	   void set(){
		cout<<"enter the id of the book\n";
		cin>>id;

        cin.ignore();
		cout<<"enter the author name\n";
		cin>>author_name;
		
		cout<<"enter the publisher name\n";
		cin>>publisher_name;
		
		cout<<"enter price:\n";
		cin>>price;

		cout<<"enter the year:\n";
		cin>>year;

	   }

	 void display(){
		cout<<"The id is"<<id<<"\n";
		cout<<"the author name is"<<author_name<<"\n";
		cout<<"the publisher name is"<<publisher_name<<"\n";
		cout<<"the price is"<<price<<"\n";
		cout<<"the year is"<<year<<"\n";
		
	 }  
    
	int get_price(){
		return price;
	}
};

int main(){
	
    Book a[100];
	int n;
	cout<<"enter for how many book you want to enter the detail\n";
	cin>>n;
	for(int i=0;i<n;i++){
		a[i].set();
	}

    for(int i=0;i<n;i++){
		a[i].display();
	}
    
	int sal[100];

    for(int i=0;i<n;i++){
		int a1=a[i].get_price();
        sal[i]=a1;
	}

   for(int i=0;i<n;i++){
	  int count=1;
	for(int j=i+1;j<n;j++){
		if(sal[i]==sal[j]){
             count++;
			 a[j]=a[j+1];
	         n--;
		}
	}
	cout<<"the book with price "<<sal[i]<<" have "<<count<<" copies";
   }
    
	return 0;
}



