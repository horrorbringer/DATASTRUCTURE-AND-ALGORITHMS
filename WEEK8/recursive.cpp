#include <iostream>
int SumEven(int n){
    if(n==1)
        return 2; 
    else
        return (n*2) + SumEven(n - 1);
}
int oddSum(int n){
    if(n==1){
        return 1;
    }
    else{
        return (n*2-1) + oddSum(n - 1);
    }
}
int normalSum(int n){
    if(n==1){
        return 1;
    }else{
        return n + normalSum(n-1);
    }
}
using namespace std;
int main(){
    int n;
    cout << "Enter n: ";
    cin >> n;
    cout << "SumEven = " << SumEven(n);
    cout << "\nOddSum = " << oddSum(n);
    cout << "\nNormalSum = " << normalSum(n);
    return 0;
}

