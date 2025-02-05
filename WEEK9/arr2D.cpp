#include <iostream>
#include <conio.h>
using namespace std;

int main(){

    int num[5][5],n,row,col,uRow,uCol,Darr,optoin;
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
                for (row = 0; row < 5;row++){
                    for (col = 0; col < 5;col++){
                        cout << "Enter ["<<row<<"]["<<col<<"] = ";
                        cin >> num[row][col];
                    }
                    cout << "\n";
                }
            break;
            case 2:
                cout << "---------- Display Data ----------\n";
                for (row = 0; row < 5;row++){
                    for (col = 0; col < 5;col++){
                        cout << num[row][col] << " ";
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
                    cin >> num[uRow][uCol];
                    cout << "---------- After Update -----------\n";
                    for (row = 0; row < 5;row++){
                        for (col = 0; col < 5;col++){
                            cout << num[row][col] << " ";
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
                for (row = 0; row < 5;row++){
                        for (col = 0; col < 5;col++){
                            if(Darr == num[row][col]){
                                num[row][col] = num[row + 1][col + 1];
                                cout << "Array Deleted\n";

                            }
                        }
                    }
                cout << "----------- After Delete -------------\n";
                for (row = 0; row < 5;row++){
                        for (col = 0; col < 5;col++){
                            cout << num[row][col] << " ";
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