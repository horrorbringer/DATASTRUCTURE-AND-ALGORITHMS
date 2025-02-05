#include <iostream>
#include <iomanip>
#include <string>
#include <cctype> // library for use method char tolower()
#include <conio.h>
using namespace std;

void head(){
    cout << setw(4) << "id" << setw(8) << "sex" << setw(15)
                    << "name" << setw(6) << "age" << setw(8) 
                    << "eng" <<setw(6) << setw(8) << "com" << setw(9) << "math" << setw(9) 
                    << "total" << setw(10) << "average" << setw(8) << "grade"<< endl;
}

class student{
    public:
        // proporties
        int id=1;
        string name;
        string sex;
        int age;
        float eng;
        float com;
        float math;
        float total;
        float average;
        string grade;
        // method inputdata and outputdata
        void inputdata();
        void inputscore();
        void outputdata();
        int PrimaryKey(int pk_id);
};

void student::inputdata(){
    cout << "Enter name: ";
    cin.ignore();
    getline(cin,name);
    cout << "Enter age: ";
    cin >> age;
    cout << "Enter sex: ";
    cin >> sex;
    inputscore();
    cout << endl;
}
void student::inputscore(){

    inputAgain:    
    cout << "Enter score english: ";
    cin >> eng;
    cout << "Enter score computer: ";
    cin >> com;
    cout << "Enter score math: ";
    cin >> math;

    if(!(eng <= 100 && eng >= 0) || !( com <= 100 && com >= 0) || !(math <= 100 && math >= 0)){
        cout << "\nInvalid score please input all agian!\n";
        system("pause");
        system("cls");
        goto inputAgain;
        
    }else{

        total = eng + com + math;
        average = total / 3;

        if(average <= 100 && average >= 90)
            grade = "A";
        else if(average < 90 && average >= 80)
            grade = "B";
        else if(average < 80 && average >= 70)
            grade = "C";
        else if(average < 70 && average >= 60)
            grade = "D";
        else if(average < 60 && average >= 50)
            grade = "E";
        else
            grade = "F";
    }
            
}
void student::outputdata(){
    cout << setw(4) << id << setw(8) << sex << setw(15)
                    << name << setw(6) << age << setw(8) 
                    << eng <<setw(6) << setw(8) << com << setw(9) << math << setw(9) 
                    << total << setw(10) << average << setw(8) << grade <<endl;
}
int student::PrimaryKey(int pk_id){
    if(pk_id==1){
        return 1;
    }else{
        return pk_id + PrimaryKey(pk_id - 1);
    }
}

int main(){
    student student[100]; // crerate 100 student 
    int idSearch; // for search
    string strSearch;
    int option,
        numberStudent=0,
        i,j,n,
        op_update;
    bool start=true,
         isFound=0;
    char comfirm; // for comfirm delete

    string tmpName,tmpSex,tmpGrade; // use for store value temporary that have datatype string
    float tmpEng,tmpCom,tmpMath,tmpTotal,tmpAvg; // use for store value temporary that have datatype float
    int tmpAge,tmpId; // use for store value temporary that have datatype integer

    cout << fixed << showpoint << setprecision(2);

    while(start){
        cout << "+-+---------------------------+\n";
        cout << "|1| => Insert Information     |\n";
        cout << "|2| => Output Information     |\n";
        cout << "|3| => Update Information     |\n";
        cout << "|4| => Delete Information     |\n";
        cout << "|5| => Sort by id ascending   |\n";
        cout << "|6| => Sort by name ascending |\n";
        cout << "|7| => Search by id           |\n";
        cout << "|8| => Search by name         |\n";
        cout << "|0| => Exit                   |\n";
        cout << "+-+---------------------------+\n";
        cout << "Select option: ";
        cin >> option;
        system("cls");
        switch(option){
            case 1:
                // case input information 
                cout << "How many student do you input: ";
                cin >> n;
                for (i = 0; i < n;i++){
                    student[numberStudent].inputdata();
                    numberStudent++;
                    student[numberStudent].id += student[numberStudent].PrimaryKey(numberStudent);
                }
                break;
            case 2:
                // case display information
                if(numberStudent > 0){
                    head();
                    for (i = 0; i < numberStudent;i++){
                        student[i].outputdata();
                    }
                }else{
                    cout << "Don't have any student here!\n";
                }
                system("pause");
                break;
            case 3:
                // case update information
                if(numberStudent>0){
                    cout << "+-+------------------------------+\n";
                    cout << "|1| => Update Name.              |\n";
                    cout << "|2| => Update Sex.               |\n";
                    cout << "|3| => Update Age.               |\n";
                    cout << "|4| => Update Score English.     |\n";
                    cout << "|5| => Update Score Math.        |\n";
                    cout << "|6| => Update Score Computer.    |\n";
                    cout << "+-+------------------------------+\n";
                    cout << "Enter option: ";
                    cin >> op_update;
                    switch(op_update){
                        case 1:
                            cout << "\n============ Update Name ==========\n";
                            cout << "Enter id to update students: ";
                            cin >> idSearch;
                            for (i = 0; i < numberStudent;i++){
                                if(idSearch == student[i].id){
                                    student[i].outputdata();
                                    cout << "Name: " << student[i].name << endl << endl;
                                    cout << "Enter new name: ";
                                    cin >> student[i].name;
                                    isFound = 1;
                                    cout << "The student was updated!\n";
                                    break;
                                }
                            }
                            if(isFound != 1){
                                cout << "The id " << idSearch <<" search not found!\n";
                            }
                            break;
                        case 2:
                            cout << "\n============ Update Sex ==========\n";
                            cout << "Enter id to update sex: ";
                            cin >> idSearch;
                            for (i = 0; i < numberStudent;i++){
                                if(idSearch == student[i].id){
                                    student[i].outputdata();
                                    cout << "Sex: " << student[i].sex << endl << endl;
                                    cout << "Enter new sex: ";
                                    cin >> student[i].sex;
                                    isFound = 1;
                                    cout << "The student was updated!\n";
                                    break;
                                }
                            }
                            if(isFound != 1){
                                cout << "The id " << idSearch <<" search not found!\n";
                            }
                            break;
                        case 3:
                            cout << "\n============ Update Age ==========\n";
                            cout << "Enter id to update age: ";
                            cin >> idSearch;
                            for (i = 0; i < numberStudent;i++){
                                if(idSearch == student[i].id){
                                    student[i].outputdata();
                                    cout << "Age: " << student[i].age <<endl<< endl;
                                    cout << "Enter new age: ";
                                    cin >> student[i].age;
                                    isFound = 1;
                                    cout << "The student was updated!\n";
                                    break;
                                }
                            }
                            if(isFound != 1){
                                cout << "The id " << idSearch <<" search not found!\n";
                            }
                            break;
                        case 4:
                            cout << "\n============ Update Score English ==========\n";
                            cout << "Enter id to update score english: ";
                            cin >> idSearch;
                            for (i = 0; i < numberStudent;i++){
                                if(idSearch == student[i].id){
                                    student[i].outputdata();
                                    cout << "English: " << student[i].eng << endl << endl;
                                    cout << "Enter new score english: ";
                                    cin >> student[i].eng;
                                    isFound = 1;
                                    cout << "The student was updated!\n";
                                    break;
                                }
                            }
                            if(isFound != 1){
                                cout << "The id " << idSearch <<" search not found!\n";
                            }
                            break;
                        case 5:
                            cout << "\n============ Update Score Math ==========\n";
                            cout << "Enter id to update score math: ";
                            cin >> idSearch;
                            for (i = 0; i < numberStudent;i++){
                                if(idSearch == student[i].id){
                                    student[i].outputdata();
                                    cout << "Math: " << student[i].math << endl;
                                    cout << endl;
                                    cout << "Enter new score math: ";
                                    cin >> student[i].math;
                                    isFound = 1;
                                    cout << "The student was updated!\n";
                                    break;
                                }
                            }
                            if(isFound != 1){
                                cout << "The id " << idSearch <<" search not found!\n";
                            }
                            break;
                        case 6:
                            cout << "\n============ Update Score Computer ==========\n";
                            cout << "Enter id student to update score computer: ";
                            cin >> idSearch;
                            for (i = 0; i < numberStudent;i++){
                                if(idSearch == student[i].id){
                                    student[i].outputdata();
                                    cout << "Score: " << student[i].com << endl << endl;
                                    cout << "Enter new score computer: ";
                                    cin >> student[i].com;
                                    isFound = 1;
                                    cout << "The student was updated!\n";
                                    break;
                                }
                            }
                            if(isFound != 1){
                                cout << "The id " << idSearch <<" search not found!\n";
                            }
                            break;
                    }
                    
                }else{
                    cout << "Don't have any student here!\n";
                }
                system("pause");
                break;
            case 4:
                // case delete information
                if(numberStudent>0){
                    cout << "Enter id student to delete: ";
                    cin >> idSearch;
                    for (i = 0; i < numberStudent;i++){
                        if(idSearch == student[i].id){
                            student[i].outputdata();
                            cout << endl;
                            cout << "Are you sure ? (y/n or press any key) : ";
                            cin >> comfirm;
                            if(tolower(comfirm) == 'y'){
                                student[i] = student[i + 1];
                                numberStudent--;
                                isFound = 1;
                                cout << "The student was deleted!\n";
                                break;
                            }else{
                                isFound = 1;
                                cout << "The student was not deleted!\n";
                                break;
                            }
                        }
                    }
                    if(isFound != 1){
                        cout << "The id " << idSearch <<" search not found!\n";
                    }
                }else{
                    cout << "Don't have any student here!\n";
                }
                system("pause");
                break;
            case 5:
                // sort by id ascending 
                if(numberStudent>1){
                    for (i = 0; i < numberStudent;i++){
                        for (j = i + 1; j < numberStudent ;j++){
                            if(student[i].id > student[j].id){
                                // sort id
                                tmpId = student[i].id;
                                student[i].id = student[j].id;
                                student[j].id = tmpId;
                                // sort name
                                tmpName = student[i].name;
                                student[i].name = student[j].name;
                                student[j].name = tmpName;
                                // sort sex
                                tmpSex = student[i].sex;
                                student[i].sex = student[j].sex;
                                student[j].sex = tmpSex;
                                // sort age
                                tmpAge = student[i].age;
                                student[i].age = student[j].age;
                                student[j].age = tmpAge;
                                // sort english
                                tmpEng = student[i].eng;
                                student[i].eng = student[j].eng;
                                student[j].eng = tmpEng;
                                // sort computer
                                tmpCom = student[i].com;
                                student[i].com = student[j].com;
                                student[j].com = tmpCom;
                                // sort math
                                tmpMath = student[i].math;
                                student[i].math = student[j].math;
                                student[j].math = tmpMath;
                                // sorttotal
                                tmpTotal = student[i].total;
                                student[i].total = student[j].total;
                                student[j].total = tmpTotal;
                                // sort average
                                tmpAvg = student[i].average;
                                student[i].average = student[j].average;
                                student[j].average = tmpAvg;
                                // sort grade
                                tmpGrade = student[i].grade;
                                student[i].grade = student[j].grade;
                                student[j].grade = tmpGrade;
                                isFound = 1;
                            }
                        }
                    }
                    if(isFound == 1)
                        cout << "The data sorted successfully\n";
                    system("pause");
                }else{
                    cout << "Student must have 2 up!\n";
                }
                break;
            case 6:
                if(numberStudent>1){
                    for (i = 0; i < numberStudent;i++){
                        for (j = i + 1; j < numberStudent ;j++){
                            if(student[i].name > student[j].name){
                                // sort id
                                tmpId = student[i].id;
                                student[i].id = student[j].id;
                                student[j].id = tmpId;
                                // sort name
                                tmpName = student[i].name;
                                student[i].name = student[j].name;
                                student[j].name = tmpName;
                                // sort  sex
                                tmpSex = student[i].sex;
                                student[i].sex = student[j].sex;
                                student[j].sex = tmpSex;
                                // sort age
                                tmpAge = student[i].age;
                                student[i].age = student[j].age;
                                student[j].age = tmpAge;
                                // sort english
                                tmpEng = student[i].eng;
                                student[i].eng = student[j].eng;
                                student[j].eng = tmpEng;
                                // sort computer
                                tmpCom = student[i].com;
                                student[i].com = student[j].com;
                                student[j].com = tmpCom;
                                // sot math
                                tmpMath = student[i].math;
                                student[i].math = student[j].math;
                                student[j].math = tmpMath;
                                // sort total
                                tmpTotal = student[i].total;
                                student[i].total = student[j].total;
                                student[j].total = tmpTotal;
                                // sort average
                                tmpAvg = student[i].average;
                                student[i].average = student[j].average;
                                student[j].average = tmpAvg;
                                // sort grade
                                tmpGrade = student[i].grade;
                                student[i].grade = student[j].grade;
                                student[j].grade = tmpGrade;
                                isFound = 1;
                            }
                        }
                    }
                    if(isFound == 1)
                        cout << "The data sorted successfully\n";
                    system("pause");
                }else{
                    cout << "student must have 2 up!\n";
                }
                break;
            case 7:
                if(numberStudent>0){
                    cout << "Enter id student to search: ";
                    cin >> idSearch;
                    for (i = 0; i < numberStudent;i++){
                        if(idSearch==student[i].id){
                            head();
                            student[i].outputdata();
                            isFound = 1;
                            break;
                        }
                    }
                    if(isFound != 1)
                        cout << "The id << " << idSearch << " >> Search not found!\n";
                }else{
                    cout << "Don't have any student here!\n";
                }
                system("pause");
                break;
            case 8:
                if(numberStudent>0){
                    cout << "Enter name student to search: ";
                    cin.ignore();
                    getline(cin, strSearch);
                    // cuase that we can use idSearch with string becuase
                    // idSearch's datatype is string  
                    for (i = 0; i < numberStudent;i++){
                        if(strSearch==student[i].name){
                            head();
                            student[i].outputdata();
                            isFound = 1;
                            break;
                        }
                    }
                    if(isFound != 1)
                        cout << "The name << " << idSearch << " >> Search not found!\n";
                }else{
                    cout << "Don't have any student here!\n";
                }
                system("pause");
                break;
            case 0:
                start = false;
                break;
            default:
                cout << "Invalid option!\n";
                system("pause");
        }
        system("cls");
    }
    return 0;
}