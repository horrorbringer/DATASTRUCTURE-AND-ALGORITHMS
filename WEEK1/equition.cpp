#include<iostream>
#include<conio.h>
#include<math.h>
using namespace std;
int main(){
    float a, b, c, dalta, x, x1, x2;
    char t = 253;
    cout << "ax" << t << " + bx + c = 0\n";
    cout << "Input a = ";
    cin >> a;
    cout << "Input b = ";
    cin >> b;
    cout << "Input c = ";
    cin >> c;
    if(a==0){
        x = -c / b;
        cout << "Result = " << x<<endl;
    }else if(a!=0){
        system("cls");
        dalta = (b * b) - (4 * a * c);
        cout << a << "x" << t << " + " << b << "x + " << c << " = 0\n";
        cout << "Dalta = " << dalta << endl;
        if(dalta>0){
            x1 = (-b - sqrt(dalta)) / (2 * a);
            x2 = (-b + sqrt(dalta)) / (2 * a);
            cout << "Result x1 = " << x1 << endl;
            cout << "Result x2 = " << x2 << endl;
        }if(dalta==0){
            x1 = x2 = -b / 2 * a;
            cout << "Result x1 = x2 = " << x1 << endl;
        }if(dalta<0){
            cout << "No Root!\n";
        }
    }
    return 0;
}