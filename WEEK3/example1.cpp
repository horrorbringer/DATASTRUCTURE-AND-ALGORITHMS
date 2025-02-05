#include <iostream>
#include <conio.h>
using namespace std;

int main(){
    again:
    float a, b, c, max, min;
    cout << "\nInput a = ";
    cin >> a;
    cout << "Input b = ";
    cin >> b;
    cout << "Input c = ";
    cin >> c;
    if(a==b&&b==c){
        cout << "No Maximum and Minimum.";
    }
    if(a!=b&&a!=c&&b!=c){
        if(a>b){
            if(a>c){
                max = a;
                if(b>c)
                    min = c;
                if(b<c)
                    min = b;
                cout << "\nMaximum is: " << max;
                cout << "\nMinimum is: " << min;
            }
            if(a<c){
                max = c;
                min = b;
                cout << "\nMaximum is: " << max;
                cout << "\nMinimum is: " << min;
            }
        }
        if(a<b){
            if(b>c){
                max = b;
                if(a>c)
                    min = a;
                if(a<c)
                    min = c;
                cout << "\nMaximum is: " << max;
                cout << "\nMinimum is: " << min;
            }
            if(b<c){
                max = c;
                min = a;
                cout << "\nMaximum is: " << max;
                cout << "\nMinimum is: " << min;
            }
        }
    }
    if(a==b&&b!=c){
        if(b>c){
            max = b;
            min = c;
        }
        if(b<c){
            max = c;
            min = b;
        }
        cout << "\nMaximum is: " << max;
        cout << "\nMinimum is: " << min;
    }
    if(b==c&&c!=a){
        if(b>a){
            max = b;
            min = a;
        }
        if(b<a){
            max = a;
            min = b;
        }
        cout << "\nMaximum is: " << max;
        cout << "\nMinimum is: " << min;
    }
    if(a==c&&c!=b){
        if(c>b){
            max = c;
            min = b;
        }
        if(c<b){
            max = b;
            min = c;
        }
        cout << "\nMaximum is: " << max;
        cout << "\nMinimum is: " << min; 
    }
    getch();
    goto again;
    return 0;
}