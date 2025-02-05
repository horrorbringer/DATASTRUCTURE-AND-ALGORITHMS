#include <iostream>
#include <list>
using namespace std;

typedef struct nodeList{
    int data;
    nodeList *next;
}nodeList;

int main(){
    nodeList *pfirst; // point to fist node
    nodeList *plast; // point to last node
    nodeList *temp;
    nodeList *a;
    nodeList *item;
    nodeList *del;

    int n,k,pos,i;
    char z, w;

    // create memory Location for link list
    item = (nodeList *)malloc(sizeof(nodeList));
    if(!item){
        cout << "\nMemory allocation failed";
    }
    while(true){

    cout << "\n1. Add node-1 to link list";
    cout << "\n2. Add fist node to link list";
    cout << "\n3. Add last node to link list";
    cout << "\n4. Add Center node to link list";
    cout << "\n5. Delete node from link list";
    cout << "\n6. Display link list";
    cout << "\nEnter your choice: ";
    cin >> n;
    switch(n){
        case 1:
            cout << "\nAdd node-1 to link list";
            cout << "\nEnter data for node-1: ";
            cin >> k;
            item->data = k;
            pfirst = item;
            plast= item;
            item->next = nullptr;
            break;
        case 2:
            cout << "\nAdd fist node to link list";
            cout << "\nEnter data for first node: ";
            cin >> k;
            item->data = k;
            item->next = pfirst;
            pfirst = item;
            break;
        case 3:
            cout << "\nAdd last node to link list";
            cout << "\n/Enter data to last node:";
            cin >> k;
            item->data = k;
            plast->next = item;
            item->next = nullptr;
            plast = item;
            break;
            case 4:
                cout << "\nAdd center to node link list";
                cout << "\nEnter data to center node: ";
                cin >> k;
                cout << "\nEnter position that need add: ";
                cin >> pos;
                for (i = 1; i < pos - 1;i++){
                    temp = temp->next;
                }
                item->data = k;
                item->next = temp->next;
                temp->next = item;

                break;
            case 5:
                cout << "Delete node to link list";
                break;
            case 6:
                cout << "Display link list";
                temp = temp->next;
                while(temp){
                    cout << item->data << " -> ";
                }
                cout << "NULL";
                break;

    }



    }
    return 0;
}