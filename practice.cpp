#include<iostream>
using namespace std;
void enter(int scores[],int size)
{for(int i=0;i<size;i++)

{cout<<"Enter the scores of student"<<(i+1)<<":";
cin>>scores[i];
}

}

void show(int scores[],int size)

{for(int k=0;k<size;k++)

{cout<<scores[k]<<" "; // printing each element
}
cout<<endl;

}

void arrange(int scores[],int size)

{int temp;
for(int i=0;i<size;i++)

{for(int k=0;k=size-1;k++)

{if(scores [k]>scores[k+1])

{temp=scores[k];
scores[k]=scores[k+1];
scores[k+1]=temp;

}
}

}
}

int main()
{int size;
cout<<"Enter the size of the array";
cin>>size;
int scores [size];
enter(scores,size);
  cout << "Original scores: ";
show(scores,size);

arrange(scores,size);
 cout << "Sorted scores: ";
  int highest = scores[size - 1];  // After sorting, last element is highest
    int lowest = scores[0];          // First element is lowest
    int sum = 0;
    for (int i = 0; i < size; i++) {
        sum += scores[i];
    }
    float average = static_cast<float>(sum) / size;  // Average

    // Output highest, lowest, and average
    cout << "Highest score: " << highest << endl;
    cout << "Lowest score: " << lowest << endl;
    cout << "Average score: " << average << endl;
return 0;
}
