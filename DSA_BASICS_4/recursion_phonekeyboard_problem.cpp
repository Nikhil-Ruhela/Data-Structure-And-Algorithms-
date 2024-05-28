#include <iostream>
#include <string>
using namespace std;

// Array to store the phone keyboard characters
const string keyboard[] = {
    " ",     // 0
    "",      // 1
    "abc",   // 2
    "def",   // 3
    "ghi",   // 4
    "jkl",   // 5
    "mno",   // 6
    "pqrs",  // 7
    "tuv",   // 8
    "wxyz"   // 9
};

// Function to generate all possible combinations of a phone number
void generateCombinations(const string& phoneNumber, string currentCombination, int currentIndex) {
    // Base case: if currentIndex reaches the end of the phone number, print the current combination
    if (currentIndex == phoneNumber.length()) {
        cout << currentCombination << endl;
        return;
    }

    // Get the characters corresponding to the current digit
    string characters = keyboard[phoneNumber[currentIndex] - '0'];
    


    // For each character, append it to the current combination and make a recursive call
    for (char c : characters) {
        generateCombinations(phoneNumber, currentCombination + c, currentIndex + 1);  
    }
 }

// Main function
int main() {
    string phoneNumber;
    cout << "Enter a phone number: ";
    cin >> phoneNumber;
    cout << "Possible combinations of the phone number:\n";
    generateCombinations(phoneNumber, "", 0);

    return 0;
}


