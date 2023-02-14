#include <iostream>
using namespace std;
#include <string>

class student{
	private:
	  string name;
	  int age;
	  int marks;
	public:
		void set(){
			cout<<"enter the name:\n";
			cin>> name;
			
			cout<<"enter the age:\n";
			cin>>age;
			
			cout<<"enter the marks:\n";
			cin>>marks;
	}
	
	int get_marks(){
		return marks;
	}
	
	string get_name(){
		return name;
	}

	void display(){
		cout<<"the name is "<<name<<"\n";
		cout<<"the age is "<<age<<"\n";
		cout<<"the marks is "<<marks<<"\n";

	}
			
};

int main(){
	student s[10];
    int in=0;
    int n;
    cout<<"enter the total no of students you want to enter:\n";
    cin>>n;
	int mal[100];

    //putting all marks in an array
	for(int i=0;i<n;i++){
		s[i].set();
	}
    for(int i=0;i<n;i++){
		int ni;
		ni=s[i].get_marks();
    	mal[in]=ni;
		in++;
	}

	 //displaying values
   for(int j=0;j<n;j++){
   	 s[j].display();
   	 cout<<"\n";
   }
	
    //bubble sort
    for(int j=0;j<n;j++){
		for(int i=j+1;i<n;i++){
    	if(mal[j]<mal[i]){
    		swap(mal[j],mal[i]);
		}
	}
	}


	for(int j=0;j<n;j++){
    	cout<<mal[j]<<"\n";
	}
	
	string f[10];
	int f1=0;
	string se[10];
	int s1=0;
	string th[10];
	int th1=0;
	for(int j=0;j<n;j++){
		int tm=s[j].get_marks();
		if(tm==mal[0]){
			f[f1]=s[j].get_name();
			f1++;
			
		}
		
		if(tm==mal[1]){
			se[s1]=s[j].get_name();
			s1++;
			
		}
		
		if(tm==mal[2]){
			th[th1]=s[j].get_name();
			th1++;
			
		}
		
	}
	
	cout<<"the students who scored first rank:\n";
	for(int k=0;k<n;k++){
		cout<<f[k]<<"\n";
	}
	
	cout<<"the students who scored second rank:\n";
	for(int k=0;k<n;k++){
		cout<<se[k]<<"\n";
	}
	
	cout<<"the students who scored third rank:\n";
	for(int k=0;k<n;k++){
		cout<<th[k]<<"\n";
	}
	
	
  return 0;
}
