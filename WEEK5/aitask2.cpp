#include <iostream>
#include<string>
#include <conio.h>
using namespace std;

int main() {
    int number, firstDigit, secondDigit, thirdDigit, sum;
    a:
    cout << "Enter a three-digit number: ";
    cin >> number;

    if(to_string(number).length() != 3){
        cout << "Please Enter again\n";
        getch();
        goto a;
    }else{
        // Extract the digits
        firstDigit = number / 100;
        secondDigit = (number / 10) % 10;
        thirdDigit = number % 10;

        // Calculate the sum
        sum = firstDigit + secondDigit + thirdDigit;

        // Print the results
        cout << "First digit: " << firstDigit << endl;
        cout << "Second digit: " << secondDigit << endl;
        cout << "Third digit: " << thirdDigit << endl;
        cout << "Sum of digits: " << sum << endl;
    }
    return 0;
}