void populate(int scores[], int size) 
{
    for (int i = 0; i < size; i++) 
	{
  cout<<"Enter score for student "<<(i + 1)<< ": ";
        cin>> scores[i];  // Fill the array with user input
    }
}
void display(int scores[], int size) 
{
    for (int i = 0; i < size; i++) {
        cout << scores[i] << " ";  // Print each element
    }
    cout << endl;
}
void sort(int scores[], int size) 
{
    int temp;
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            if (scores[j] > scores[j + 1]) {  // For ascending order
                temp = scores[j];
                scores[j] = scores[j + 1];
                scores[j + 1] = temp;
            }
        }
    }
}
int main() 
{
    int size;

    // Ask for the number of students (size of the array)
    cout<<"Enter the number of students: ";
    cin >> size;

    // Declare the array for storing scores
    int scores[size];

    // Call functions and pass parameters
    populate(scores, size);     // Fill the array with scores
    cout << "Original scores: ";
    display(scores, size);      // Display the original array

    sort(scores, size);         // Sort the array
    cout << "Sorted scores: ";
    display(scores, size);      // Display the sorted array

    // Find highest, lowest, and average (in main or a function)
    int highest = scores[size - 1];  // After sorting, last element is highest
    int lowest = scores[0];          // First element is lowest
    int sum = 0;
    for (int i = 0; i < size; i++) {
        sum += scores[i];
    }
    float average = static_cast<float>(sum) / size;  // Average

    // Output highest, lowest, and average
    cout<<"Highest score: "<< highest <<endl;
    cout<<"Lowest score: "<< lowest <<endl;
    cout<<"Average score: "<< average <<endl;

    return 0;
}

