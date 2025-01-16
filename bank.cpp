#include<iostream>
using namespace std;
bool checkPIN()
{const int correctpin=1234;
int enterpin;
int attempts=0;
while(attempts<3)
{cout<<"Enter your PIN: ";
cin>>enterpin;
if(enterpin==correctpin)
{return true;

}
else{attempts++;
cout<<"Incorrect PIN";
if(attempts<3){cout<<"Try again\n";
}
}
}
cout<<"Too many incorrect attempts \n Acess denied";
return false;
}
void withdraw(double &balance)
{double amount;
char choice;
do{

cout<<"Enter the amount to be withdrawn: ";	
cin>>amount;
if(amount<=balance){balance-=amount;
cout<<"Withdrawl is succesful.\n Your new balance is "<<balance<<endl;
}
else{cout<<"Insufficiet funds \n.Your curret balance is "<<balance<<endl;
}
cout<<"Would you like to make another withdrawl? (y/n)";
cin>>choice;
}
while(choice=='y'||choice=='Y');
}
int main(){
double balance= 10000;
if(checkPIN()){
	withdraw(balance);
	
}
cout<<"Thank you for using the banking system.\n Goodbye!";
return 0;
}
