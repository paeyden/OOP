#include<iostream>
using namespace std;
class employee
//start of class defination
{private:
	string name,gender;
	int yob,yoe;
public:
	void setDetails();	
	void getDetails();
	string getname();
	void setname();
	int getYoE();	
};//end of class defination
//class impementation(external implementation)
void employee::setDetails()
{
cout<<"Enter name of the employee\n";
cin>>name;
cout<<"Enter year of birth"<<name<<endl;
cin>>yob;
cout<<"What is the gender of"<<name<<"?\n";
cin>>gender;
cout<<"When was"<<name<<"employed?\n";
cin>>yoe;
cout<<"Employee details captured successfully\n";
}

void employee::getDetails()
{
cout<<"Employee details\n";
cout<<"Name: "<<name<<"\n Gender: "<<gender<<"\n Year of Birth: "<<yob<<"\n Year Employed: "<<yoe<<endl;	
}

string employee::getname(){
	return name;
}

int employee::getYoE(){
	return yoe;
}

void employee::setname()
{cout<<"Current name is "<<name<<".\n Enter new name: \n";
cin>>name;
cout<<"Name has been changed succesfully.\n";
}

int main(){
	cout<<"Creating a new employee\n";
	employee employee1, employee2;  //objects
	
	employee1.setDetails();//method call
	employee2.setDetails();
	employee1.getDetails();
	employee2.getDetails();
	employee1.setname();//message passing (dot is used separatethe message and recipient) dot syntax 
	cout<<"Employee1 is now called "<<employee1.getname()<<endl;
	cout<<"Employee1 was employed in "<<employee1.getYoE();
	
	employee1.name ="Mercy";
	return 0;
}
