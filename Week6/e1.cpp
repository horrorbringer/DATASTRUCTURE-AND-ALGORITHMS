#include<iostream>
#include<vector>

using namespace std;
int main(){
    int a,initialize=1,result;
    cout << "Enter number: ";
    cin >> a;
    do{
        result =  initialize * a;
        cout << a << " X " << initialize << " = " << result << "\n";
        initialize++;
    } while (initialize <= 10);
    return 0;
}