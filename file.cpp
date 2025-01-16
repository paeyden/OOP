#include <iostream>
#include <fstream>
#include <string>
using namespace std;

class fileIO {
public:
    fileIO() {
        // Write to the file
        ofstream myfile("textFile.txt");
        if (!myfile) {
            cerr << "Error: Could not create or open the file for writing.\n";
            return;
        }
        myfile << "C++ file I/O is working\n";

        string inputText;
        cout << "Type a sentence: ";
        getline(cin, inputText);
        myfile << inputText << "\n";
        myfile.close();

        // Read from the file
        ifstream mytext("textFile.txt");
        if (!mytext) {
            cerr << "Error: Could not open the file for reading.\n";
            return;
        }

        string line;
        cout << "Contents of the file:\n";
        while (getline(mytext, line)) {
            cout << line << endl;
        }
        mytext.close();
    }
};

int main() {
    fileIO file;
    return 0;
}

