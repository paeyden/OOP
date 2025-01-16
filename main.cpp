//My first C++ code
#include <iostream>
using namespace std;  //for reuse of std
int main () {
    cout <<"Hello world!"<< endl;
    string name;//variable declaration
    int yob,cyr,age;
    cout<<"Enter your name "<<endl;
    cin>>name;
    cout<< name << "When were you born?"<< endl;
    cin>>yob;
    cout<<"Enter the current year\n";
    cin>> cyr;
    age= cyr-yob;
    cout<<name<<"You are"<<age<<"years old\n";

    return 0;
}
