#include <iostream>
using namespace std;
class student
{private:
	string regNo,name;
	double feeBal;
	int yos;
public:
student();//default constructer
student(string r,string n, double fb,int y)
	{regNo=r;name=n;feeBal=fb;yos=y;
	}
void payfees();
double checkbal()
	{return feeBal;
	}
void payfees(double fee);
void viewDetails();	
};// end of classdefination

// class implementation
student:: student()
{cout<<"Creating a new student record\n";
cout<<"Enter the registration number of the student\n";
cin>>regNo;
cout<<"Enter the name of the student\n";
cin>>name;
cout<<"Enter the fees to be paid";
cin>>feeBal;
}
void student::payfees()// its a mutator
{double amt;
cout<<"Enter the amount paid by"<<name<<endl;
cin>>amt;
feeBal-=amt;
cout<<"your current fee balance is "<<feeBal<<endl;

}
void student::payfees(double fee)
{feeBal-=fee;
cout<<"Your current fee Bal is "<<feeBal<<endl;
}
void student::viewDetails()
{cout<<"Student details\n";
cout<<"Registration no.: "<<regNo<<"\n name: "<<name<<"\n The fees paid: "<<feeBal <<endl;
}
int main()
{student S1,S2("CIT-227-001/2023","Moses",15000,2);
S1.viewDetails();
S2.viewDetails();
S2.payfees(5000);
S1.payfees();
cout<<"Student1 bal is"<<S1.checkbal()<<endl;
cout<<"Student2 bal is "<<S2.checkbal()<<endl;
return 0;
}





