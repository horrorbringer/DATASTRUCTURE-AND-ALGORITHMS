#include<iostream>
#include<vector>
using namespace std;

int main (){

    vector<string> fruits;
    vector<string> foods;

    fruits = {"Apple", "Banana", "Orange", "Papaya"};

    // assign method
    foods.assign(fruits.begin(), fruits.end()); 


    foods.at(0) = "Mango";
    for(string f:foods){
        cout << f << endl;
    }
    cout << "==================================\n";
    for(string ft : fruits){
        cout << ft << endl;
    }


    return 0;
}