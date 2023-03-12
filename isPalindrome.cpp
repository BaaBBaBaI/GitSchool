#include <iostream>
#include <fstream>
#include <string>
using namespace std;

bool isPalindrome(string s) {
    int n = s.length();
    for (int i = 0; i < n / 2; i++) {
        if (s[i] != s[n - i - 1]) {
            return false;
        }
    }
    return true;
}

int main() {
    ifstream inputFile("numbers.txt");
    if (!inputFile) {
        cout << "Error opening file." << endl;
        return 1;
    }

    string number;
    while (inputFile >> number) {
        if (isPalindrome(number)) {
            cout << number << " is a palindrome." << endl;
        }
        else {
            cout << number << " is not a palindrome." << endl;
        }
    }

    inputFile.close();
    return 0;
}