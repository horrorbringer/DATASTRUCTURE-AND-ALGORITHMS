#include <iostream>
#include <iomanip>
using namespace std;

// global variable 
// declear ascii for design table
char conTopLeft = 218, TTopCenter = 194, conTopRight = 191;
char TLeftCenter = 195, center = 197, TRightCenter = 180;
char conBotLeft = 192, TBotCenter = 193, conBotRight = 217;
char lineP = 179, lineL = 196;

// declare functio as global
void borderTop();
void borderBottom();
void header();

void header(){
    cout <<lineP<< setw(4) << "Id" << setw(2) <<lineP << setw(8) << "Sex" << setw(3) << lineP << setw(13)
                           << "Name" << setw(3) << lineP << setw(6) << "Age" << setw(2) << lineP << setw(8) 
                           << "Eng" <<setw(6) << lineP<< setw(9) << "Com"<<setw(2)<<lineP<< setw(9) << "math" <<setw(2) << lineP << setw(9) 
                           << "total" << setw(2) <<lineP << setw(9) << "average" << setw(2) << lineP<< endl;
}

void borderTop(){
    for (int i = 0; i < 90;i++){
        if(i==0)
            cout << conTopLeft;
        if(i==5 || i==15 || i == 30 || i == 37 || i == 50 || i == 60 || i == 70 || i == 80)
            cout << TTopCenter;
    
        cout << lineL;
        if(i==89)
            cout << conTopRight;
    }
    cout << endl;
}
void borderBottom(){
    for (int i = 0; i < 90;i++){
        if(i==0)
            cout << conBotLeft;
        if(i==5 || i==15 || i == 30 || i == 37 || i == 50 || i == 60 || i == 70 || i == 80)
            cout << TBotCenter;
        cout << lineL;
        if(i==89)
            cout << conBotRight;
    }
    cout << endl;
}