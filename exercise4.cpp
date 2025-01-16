#include<iostream>
using namespace std;
int main ()
{int pat;
cout<<"Enter the number used in the pattern: \n";
cin>>pat;

for(int i=pat;i>=1;i--)
{for(int k=1;k<=pat;k++)
{cout<<k<<" ";
}
cout<<endl;
pat-=1; 
}
return 0;
}



