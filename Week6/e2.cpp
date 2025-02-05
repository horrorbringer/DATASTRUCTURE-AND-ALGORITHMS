#include <iostream>
using namespace std;

void way1(int n){
    int i;
    for (i = 1; i <= n/2;i++){
        cout << "Number1 = " << 2 * i << "  Number2 = " << (2 * i) - 1 << endl;
    }
}

void way2(int n){
    int i;
    for (i = 1; i <= n;i++){
        if(i%2==0)
            cout << "Number1: " << i << "\n";
        if(i%2!=0)
            cout << "\nNumber2: " << i << "\n";
    }
}

int main(){
    int i, n; 
    cout << "Enter number: ";
    cin >> n;
    way2(n);

    return 0;
}