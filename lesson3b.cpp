#include<iostream>
using namespace std;

// Function to populate the array
void populate(int array[], int s) {
    for(int i = 0; i < s; i++) {
        cout << "Enter element " << (i + 1) << " of the array: ";
        cin >> array[i];
    }
}

// Function to display the array
void display(int array[], int size) {
    for (int k = 0; k < size; k++) {
        cout << array[k] << " ";
    }
    cout << endl;
}

// Function to sort the array in descending order
void sort(int array[], int size) {
    int temp;
    for (int k = 0; k < size; k++) {
        for (int i = 0; i < size - 1; i++) {
            if (array[i] < array[i + 1]) {  // For descending order
                temp = array[i];
                array[i] = array[i + 1];
                array[i + 1] = temp;
            }
        }
    }
}

int main() {
    int size;
    
    cout << "Enter the size of the array: ";
    cin >> size;

    int numbers[size];  // Declare array in main()

    populate(numbers, size);  // Populate the array
    cout << "Original array: ";
    display(numbers, size);   // Display original array

    sort(numbers, size);  // Sort the array
    cout << "Sorted array: ";
    display(numbers, size);   // Display sorted array

    return 0;
}

