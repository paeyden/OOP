#include<iostream>
using namespace std;
class rectangle
{private:
	float length,width;
	double pmeter,area;

public:
	void display();
	void enterDimensions();
	void compute();
};

void rectangle::enterDimensions()
{cout<<"Enter the length of the rectangle: \n";
cin>>length;
cout<<"Enter the width of the rectangle: \n";
cin>>width;
}

void rectangle::display()
{cout <<"The length of the rectangle is: "<<length<<" \n The width of the rectngle is: "<<width<<endl;

}
void rectangle::compute()
{pmeter=2*length+2*width;
area=length*width;
cout<<"The perimeter of the rectangle is: "<<pmeter<<" \n The area of the rectangle is: "<<area<<endl;
}
int main()
{cout<<"Creating rectangle \n";
rectangle R1;
R1.enterDimensions();
R1.display();
R1.compute();
return 0;
}
