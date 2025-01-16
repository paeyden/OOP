#include <iostream>
using namespace std;
class person
{protected:
	string name;
	int yob;
	string gender;
public:
person();
person(string n,string g, int y)
{name=n;
gender=g;
yob=y;
};
void setName();
void setYob();
void setGender();
string getName()
{ return name;
	}
string getGender()
{ return gender;
	}	
int getYob()
{return yob;
	}
void details();		

};

class student:public person
{
private:
string regNo;
double feebal;
public:
student();
student(string m,string e,int k,string r,double f )
{name=m;
gender=e;
yob=k;
regNo=r; 
feebal=f;
};
void setRegno();
void payFee();
string getRegNo()
{ return regNo;
	}
double checkFeebalance()
{return feebal;
}
void viewDetails();		
}; 

person::person()
{cout<<"Please enter your details following the prompts below\n";
cout<<"Enter your name: \n";
cin>>name;
cout<<"Enter your year of birth: ";
cin>>yob;
cout<<"Enter your gender: ";
cin>>gender;

}



void person::setName()
{cout<<"Your current name is "<<name<<".\n Enter your new name: \n";
cin>>name;
cout<<"Your  name has been changed successfuly\n";
}

void person::setYob()
{cout<<"Your current yob is "<<yob<<".\n Enter the new year of birth: \n";
cout<<"The  year of birth has been changed succesfuly\n";
}

void person::setGender()
{cout<<"Your current Gender is "<<gender<<".\n Enter current gender: \n";
cout<<"Gender has been changed succesfully\n";
}

void person::details()
{cout<<"Your details are as follows\n";
cout<<"name: "<<name<<"\n Year of birth: "<<yob<<"\n Gender: "<<gender<<endl;
}

student::student()
{cout<<"Enter your registration number: \n";
cin>>regNo;
cout<<"Enter your fee to be paid: \n";
cin>>feebal;
}


void student::setRegno()
{cout<<"Your current registration number is "<<regNo<<"Enter the new registraion number: \n";
cin>>regNo;
cout<<"The registration number has been changed succesfully";
}

void student::payFee()
{double amt;
cout<<"Enter the amount paid by"<<name<<endl;
cin>>amt;
feebal-=amt;
cout<<"your current fee balance is "<<feebal<<endl;

}

void student::viewDetails()
{cout<<"Your details are as follows: \n";
cout<<"Name: "<<name<<"\n Year of birth: "<<yob<<" \n Registration number: "<<regNo<<" \n Fee balance: "<<feebal<<endl;
}

int main()
{cout<<"Creating a person\n";
person P1,P2("John","male",2005);
cout<<"Creating a student\n";
student s1,s2("Jane","Female",2005,"CIT",50000);
s1.setName();
s1.viewDetails();
return 0;
}
