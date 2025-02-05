#include<iostream>
using namespace std;

float Area(float a, float b){
    float area;
    area = a * b;
    return area;
}

int main(){
    system("cls");
    float a, b, result;
    char dd = 253;
    cout << "Enter width = ";
    cin >> a;
    cout << "Enter height = ";
    cin >> b;
    result = Area(a, b);
    cout << "So Area of Regtangle (" << a << " X " << b << ") = " << result << " Km" << dd;
    return 0;
}