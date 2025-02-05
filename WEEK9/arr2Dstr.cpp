#include <iostream>
#include <conio.h>
#include <iomanip>
using namespace std;

int main(){

    int num,n,row,col,uRow,uCol,optoin;
    string student[5][5],Darr;
    bool start = true;
    while(start){
        cout << "1.Input Array\n";
        cout << "2.Display Array\n";
        cout << "3.Update Array\n";
        cout << "4.Delete Array\n";
        cout << "0.Exit\n";
        cout << "Select option: ";
        cin >> optoin;
        switch(optoin){
            case 1:
                cout << "---------- Insert Data ----------\n";
                cout << "How many student you input: ";
                cin >> num;
                for (row = 0; row < num;row++){
                        cout << "Enter Student ID = ";
                        cin >> student[row][0];
                        cout << "Enter Student Name = ";
                        cin >> student[row][1];
                        cout << "Enter Student Sex = ";
                        cin >> student[row][2];
                        cout << "Enter Student Age = ";
                        cin >> student[row][3];
                        cout << "Enter Student DOB = ";
                        cin >> student[row][4];
                    cout << "\n";
                }
            break;
            case 2:
                cout << "---------- Display Data ----------\n";
                for (row = 0; row < num;row++){
                    for (col = 0; col < 5;col++){
                        cout << student[row][col] <<setw(20);
                    }
                    cout << "\n";
                }
            break;
            case 3:
                uData:
                cout << "---------- Update Data -----------\n";
                cout << "Enter index to update:\n";
                cout << "Enter Row: ";
                cin >> uRow;
                cout << "Enter Column: ";
                cin >> uCol;
                if((uRow>=0 && uRow <=4) || (uCol >= 0 && uCol <=4)){
                    cout << "Enter new value: ";
                    cin >> student[uRow][uCol];
                    cout << "---------- After Update -----------\n";
                    for (row = 0; row < num;row++){
                        for (col = 0; col < 5;col++){
                            cout << student[row][col] <<setw(20);
                        }
                        cout << "\n";
                    }
                }else{
                    cout << "Please input row (0 -> 4) and col (0 -> 4).";
                    getch();
                    goto uData;
                }
            break;
            case 4:
                cout << "----------- Delete Array -------------\n";
                cout << "Enter value that want delete: ";
                cin >> Darr;
                for (row = 0; row < num;row++){
                        for (col = 0; col < 5;col++){
                            if(Darr == student[row][col]){
                                student[row][col] = student[row + 1][col + 1];
                                num--;
                                cout << "Array Deleted\n";

                            }
                        }
                    }
                cout << "----------- After Delete -------------\n";
                for (row = 0; row < num;row++){
                        for (col = 0; col < 5;col++){
                            cout << student[row][col] <<setw(20);
                        }
                        cout << "\n";
                    }
            break;
            case 0:
                start = false;
                break;
        }
    }
    return 0;
}