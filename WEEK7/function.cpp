#include <iostream>
using namespace std;

// function non return type
void sum(){
    int i, s = 0, n;
    cout << "Enter n: ";
    cin >> n;
    cout << "Sn = ";
    for (i = 1; i <= n;i++){
        s += i;
        cout << i << " + ";
    }
    cout << "\b\b = ";
    cout  << s;
}

// function return type that have parameter
int sum(int n){
    int i, s = 0;
    for (i = 1; i <= n;i++){
        s += i;
    }
    return s;
}

int callSelf(int k){
    if(k > 0)
        return k + callSelf(k - 1); // k + (k-1) + ... k > 0
    else
        return 0;
}

main(){
    int result;
    result = callSelf(10);
    cout << "Result = " << result;
}
