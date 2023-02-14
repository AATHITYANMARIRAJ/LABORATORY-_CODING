/*
Create a class named Book with proper ID, Author Name, Publisher
name, price and year as its data members. Write suitable member
functions to collect the details of various books. Find out the number
of books having the same price.

*/

#include <iostream>
using namespace std;
#include <string>
class Book{
	private:
	   int id;
	   string author_name;
	   string publisher_name;
	   int price;
	   int year;
	   
	public:
		void set(){
			cout<<"enter the id\n";
			cin>>id;
			
			cout<<"enter the author name\n";
			cin>>author_name;
			
			cout<<"enter the publisher name\n";
			cin>>publisher_name;
			
			cout<<"enter the price\n";
			cin>>price;
			
			cout<<"enter the year\n";
			cin>>year;
			
		}
		
		void display(){
			cout<<"the id is "<<id;
			cout<<"the author_name is "<<author_name<<"\n";
			cout<<"the publisher_name is "<<publisher_name<<"\n";
			cout<<"the price is "<<price<<"\n";
			cout<<"the year is "<<year<<"\n";
		}
		
		int get_id(){
		   return id;
		}
		int get_price(){
			return price;
		}
};

int main(){
	Book b[100];
	int n;
	cout<<"enter for how many books you want to enter the detail\n";
	cin>>n;
	for(int i=0;i<n;i++){
		b[i].set();
	}
	 
	for(int i=0;i<n;i++){
		b[i].display();
	}
	
	
	int price[100];
	
	for(int i=0;i<n;i++){
	   price[i]=b[i].get_price();
	}
	int n1=n;
	//removing duplicate elements
	 for ( int i = 0; i < n; i ++)  
    {  
        for ( int j = i + 1; j < n; j++)  
        {  
            // use if statement to check duplicate element  
            if ( price[i] == price[j])  
            {  
                // delete the current position of the duplicate element  
                for ( int k = j; k < n- 1; k++)  
                {  
                    price[k] = price[k + 1];  
                }  
                // decrease the size of array after removing duplicate element  
                n--;
		}
	}
}

for(int i=0;i<n;i++){
	int count=0;
	for(int j=0;j<n1;j++){
		if(b[j].get_price()==price[i]){
			count++;
		}
	}
	cout<<"the book with price "<<price[i]<<" has "<<count<<" copies.\n";
}
	
	return 0;
}

