// exercise one 
#include<iostream>
using namespace std;
void menu();//prototype
void square()
{char kar;
cout<<"Enter the charcter used in the pattern of a square: \n";
cin>>kar;
int size;
cout<<"Enter the size used in the pattern of a square: \n";
cin>>size;
for(int x=1;x<=size;x++)
{for(int y=1;y<=size;y++)
{cout<<kar;
}
cout<<endl;
}
 menu();
}

void triangle()
{char choice;
cout<<"Enter the charcter used in the pattern of a triangle: \n ";
cin>>choice;
int num;
cout<<"Enter the size used in the pattern of a triangle: \n";
cin>>num;
for(int x=1;x<=num;x++)
{for(int y=1;y<=x;y++)
{cout<<y<<" ";
}
cout<<endl;
}
menu();
}

void invertedtriangle()
{char kar1;
cout<<"Enter the charcter used in the pattern of a inverted triangle: \n ";
cin>>kar1;
int pat;
cout<<"Enter the size used in the pattern of inverted triangle: \n";
cin>>pat;

for(int i=pat;i>=1;i--)
{for(int k=1;k<=i;k++)
{cout<<kar1<<" ";
}
cout<<endl;
pat-=1; 
}
menu();
}

void exitprogram()

{char confirm;
cout<<"Do you want to exit the program?\n";
cin >> confirm;

    if (confirm == 'y' || confirm == 'Y') {
        cout << "Exiting the program. Goodbye!\n";
    } else {
        cout << "Returning to the menu.\n";
        menu();}  // Go back to the menu if user doesn't want to exit
}
void menu()
{cout<<"pattern\n";
cout<<"1.Square\n 2.Triangle\n 3.Inverted triangle\n 4.Exit\n ";
int pattern;
cout<<"Enter a number for a pattern\n";
cin>>pattern;
switch (pattern)
{case 1: 
	square();
	break;
	
case 2:
triangle();
	break;

case 3:
	invertedtriangle();
	break;	
case 4:
	exitprogram();
	break;
default:
cout<<"invalid entry\n Try another \n ";	
menu ();				

}
}
int main()
{ menu();
return 0;
}

