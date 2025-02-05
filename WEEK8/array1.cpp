#include<iostream>
using namespace std;

int main(){

    int arr[30];    // declare variable as array
    int index, n, i,size,newData;    // declare normal variable
    size = sizeof(arr) / sizeof(int); // collect size of array
    cout << "How many elements do you want input ? ";
    cin >> n;
    for (i = 0; i < n;i++){
        cout << "Enter index[" << i << "] = ";
        cin >> arr[i];
    }
    cout << "Data of array = ";
    for (int i = 0; i < n;i++)
    {
        cout << arr[i] << " ";
    }
    cout << "\nUpdate Data:";
    cout << "\nInput Index: ";
    cin >> index;
    cout << "\nInput New Data: ";
    cin >> newData;
    arr[index] = newData;
    cout << "Data of array = ";
    for (int i = 0; i < n;i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}