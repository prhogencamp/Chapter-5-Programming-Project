// StudentLineUp.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ifstream inputFile("LineUp.txt");
    
    const int MAX_NAMES = 100;
    string names[MAX_NAMES];
    int count = 0;
    string name;

    while (inputFile >> name && count < MAX_NAMES) {
        names[count++] = name;
    }

    inputFile.close();

    for (int i = 0; i < count - 1; ++i) {
        for (int j = 0; j < count - 1 - i; ++j) {
            if (names[j] > names[j + 1]) {
                swap(names[j], names[j + 1]);
            }
        }
    }

    cout << "Student Count: " << count << endl;

    if (count > 0) {
        cout << "Front Student: " << names[0] << endl;

        cout << "End Student: " << names[count - 1] << endl;
    }
    else {
        cout << "No students." << endl;
    }

    return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
