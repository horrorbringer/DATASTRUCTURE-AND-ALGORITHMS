#include <iostream>
#include <string>
#include <sstream>
using namespace std;

int main(){
    int digit;
    int total[3];
    int result;
    cout << "Enter 3 digit: ";
    cin >> digit;
    if(to_string(digit).length() != 3){
        cout << "Please enter again!";
    }else{
        
        string newDigit = to_string(digit);
        for (int i = 0; i < 3;i++){
            cout << "number: "<< newDigit[i] << "\n";
           total[i] =   stringstream(newDigit[i]);
        }
        result = total[0] + total[1] + total[2];
        cout << "result = " << result;
    }
    return 0;
}