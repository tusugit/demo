#include<iostream>
#include <fstream>
using namespace std;

int main() {
    double sum = 0;
    double x;
    ifstream inFile;

    inFile.open("input.txt");
    if (!inFile) {
        cout << "Unable to open file";
        exit(1); // terminate with error
    }

    while (inFile >> x) {
        sum = sum + x;
    }

    inFile.close();
    cout << "Sum = " << sum << endl;
    return 0;
}