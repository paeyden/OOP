# include<iostream>
using namespace std;
class Demo;
class friendship
{private:string name;
protected: 
	int year;
public:
	friendship()
{name ="Test1";
	year= 2025;
	}
void show()
{
cout<<name<<" born in "<<year<<endl;

}
friend void check(friendship & f);	
friend Demo;			

};

class Demo
{public: void test(friendship k)
{k.name="From Demo";
k.show();
}
};

void check(friendship & f)
{f.name="New name";
cout<<"Name changed to "<<f.name<<endl;
}
int main()
{friendship demo;
demo.show();
check(demo);
demo.show();
Demo d;
d.test(demo);
return 0;
}

