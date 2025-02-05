#include <iostream>
using namespace std;

int main(){

    string students[20][3],newData;
    int n,i,id,column,option;
    bool start=true;
while(start){

    cout << "1.Insert information\n";
    cout << "2.Display information\n";
    cout << "3.Update information\n";
    cout << "4.Delete information\n";
    cout << "0.Exit\n";

    cout << "Enter you option: ";
    cin >> option;
    switch(option){
        case 1:
            cout << "\n======= Insert ========\n";
            cout << "How many student do you want input info: ";
            cin >> n;

            for (i = 0; i < n;i++){
                cout << "ID     : ";
                cin >> students[i][0];
                cout << "Name   : ";
                cin >> students[i][1];
                cout << "Gender : ";
                cin >> students[i][2];
                cout << "\n";
            }
            break;
            case 2:
                cout << "\n========== Display =========\n";

                for (i = 0; i < n;i++){
                    cout << students[i][0] << "\t" << students[i][1] << "\t";
                    cout << students[i][2] << "\n";
                }
                break;
            case 3:
                cout << "\n========== Update ==========\n";
                cout << "Input ID: ";
                cin >> id;
                cout << "Input Column: ";
                cin >> column;
                cout << "Input New-Data: ";
                cin >> newData;
                students[id - 1][column - 1] = newData;

                cout << "\n========== After Upate =========\n";

                for (i = 0; i < n;i++){
                    cout << students[i][0] << "\t" << students[i][1] << "\t";
                    cout << students[i][2] << "\n";
                }
                break;
            case 4:
                cout << "\n========= Delete =========\n";
                cout << "Input ID: ";
                cin >> id;
                students[id - 1][0] = "";
                students[id - 1][1] = "";
                students[id - 1][2] = "";

                cout << "\n========== After Delete =========\n";

                for (i = 0; i < n;i++){
                    cout << students[i][0] << "\t" << students[i][1] << "\t";
                    cout << students[i][2] << "\n";
                }
                break;
            case 0:
                start = false;
                break;
}
    }

    

    

    

    
    return 0;
}