#include<iostream>
#include<fstream>
using namespace std;
class fileIO
{public:
	fileIO()
{ofstream myfile("textFile.txt");
myfile<<"C++ file I/O is working\n";
string inputText;
cout<<"Type a sentence: ";
getline(cin,inputText);
myfile<<inputText;
myfile.close();
ifstream mytext("textFile.txt");

string text(getline,mytext);
cout<<text;
mytext.close();
}


};

int main()
{fileIO file;
return 0;
}

