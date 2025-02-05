#include <iostream>
using namespace std;

int Sum(int n){
    if(n==1)
        return 1;
    else
        return n + Sum(n - 1);
}

int SumEven(int n){
    if(n==1)
        return 1;
    else
        return n + SumEven(n - 1);
    
}