#include<iostream>
using namespace std;
class vehicle{
private:
	string regno,make;
	int yom,age;
public:
	vehicle();
	void getAge();
	void getDetails();
};
vehicle::vehicle()
{cout<<"Enter the registration number of the vehicle: ";
cin>>regno;
cout<<"Enter the make of the vehicle : ";
cin>>make;
cout<<"Enter the year of manufacture of the vehicle: ";
cin>>yom;
}

void vehicle::getAge(){
	int cy;
	cout<<"Enter the current year: ";
	cin>>cy;
	age=cy-yom;
	cout<<"The age of the vehicle is "<<age<<endl;
}

void vehicle::getDetails(){
	cout<<"Vehicle details\n";
    cout<<"The registration number of the vehicle is : " <<regno<< "\n The make of the vehicle is :"<<make<<"\n The year of manufacture of the vehicle is :"<<yom<<"\n The age of the vehicle is:"<<age<<endl;
 
}

int main(){
	cout<<"Creating a file of the vehicle \n";
	vehicle v;
	v.getAge();
	v.getDetails();
	return 0;
}
