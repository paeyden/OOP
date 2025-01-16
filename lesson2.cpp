#include <iostream>
using namespace std;
int main()

{char grade;//declaration

cout<<"Enter your grade \n";
cin>>grade;
switch(grade)
{case'A':
case 'a':
cout<<"Execellent performance\n";
break;
case 'B':
case 'b':
cout<<"Above average performance\n";
break;
case 'C':
case'c':
	cout<<"Average performance\n ";
break;
case 'D':
case'd':
	cout<<"Below average performance";
	break;
case 'E':
case 'e':
	cout<<"Retake the unit";
	break;
default:
	cout<<"invalid grade\n";	
}
//exercise 2
int val, sqr;
do
{cout<<"Enter a value in the range of 1-100: \n";
cin>>val;
if(val>=1&&val<=100)
{sqr = val *val;
cout<<"The square of"<<val<<"is"<<sqr<<endl;
}
else
{cout<<"The value is out of range\nTry another\n";
sqr =0;
}

}

while(sqr<10000);
cout<<"End of exercise 2\n";
// exercise3
int num1,num2,num3,sum;
cout<<"Enter theh 1st number: \n";
cin>>num1;
cout<<"Enter the 2nd number: \n";
cin>>num2;
sum = num1+ num2;
cout<<"The ans is "<<sum <<endl;
while(sum<1000)
{cout<<"Enter another number\n";
cin>>num3;
sum=num3+ sum;//sum+=num3(can also be written that way)
cout<<"The sum is"<<sum<<endl;
}
cout<<"End of exercise 3\n";

return 0;
}


