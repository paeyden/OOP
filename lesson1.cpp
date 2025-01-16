//My first C++ code
#include <iostream>
using namespace std;  //for reuse of std
int main () 
{
    cout <<"Hello world!"<< endl;
    string name;//variable declaration
    int yob,cyr,age,score;
    cout<<"Enter your name "<<endl;
    cin>>name;
    
    cout<<name<< " When were you born?"<< endl;
    cin>>yob;
    cout<<"Enter the current year\n";
    cin>> cyr;
    age= cyr-yob;
    cout<<name<<" You are"<<age<<" years old\n";
    if (age>=18)  
     cout<<"you qualify for an id \n";
	 
	 else
	 cout<<"Wait for "<<18-age<<"years to apply";
	 cout<<name<<"Enter your score in OOP1\n";
	 cin>>score;
	 if (score<=39)
	 cout<<"failed";
	else if(score<=49)
	cout<<"Pass,D";
	else if(score<=59)
	cout<<"Pass,C";
	else if(score<=69)
	cout<<"Pass,B";
	else
	cout<<"Pass,A";
    return 0;
}

