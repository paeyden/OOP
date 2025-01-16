# include <iostream>
using namespace std;
class polygon
{protected:
	double length,width;
public:
polygon();
virtual void getArea()=0;
void getDimensions();
void setDimensions();	
};

class rectangle: public polygon
{public:
void getArea();
};

class triangle: public polygon
{public:
void getArea();
};

polygon::polygon()
{cout<<"Fill in the fields below in order to get the area of the given shape\n";
cout<<"Enter the length : ";
cin>>length;
cout<<"Enter the width: ";
cin>>width;
}

void polygon::getDimensions()
{cout<<"The length is:"<<length<<" \n The width is: \n"<<width<< endl;

}

void polygon::setDimensions()
{cout<<"The current length is:"<<length<<" \n Enter new length: \n";
cin>>length;
cout<<"The current width is:"<<width<<" \n Ente the new width: \n";
cin>>width;
cout<<"The dimensions have been changed successfully.";
}
void rectangle::getArea()
{double area;
area= length*width;
cout<<"The area of the rectangle is : "<<area<<endl;
}
void triangle::getArea()
{double area;
area=0.5*(length*width);
cout<<"The area of the triangle is: "<<area<<endl;
}

int main()
{cout<<"Rectangle object\n";
rectangle R1;
cout<<"Triangle object.\n";
triangle T1;
R1.getArea();
T1.getArea();
return 0;
}

