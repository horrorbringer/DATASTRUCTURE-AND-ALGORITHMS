#include <iostream>
#include <cstdlib>

using namespace std;

struct nodeList {
    int data;
    nodeList *next;
};

void addFirst(nodeList *&head, int data) {
    nodeList *newNode = new nodeList();
    newNode->data = data;
    newNode->next = head;
    head = newNode;
}

void addLast(nodeList *&head, int data) {
    nodeList *newNode = new nodeList();
    newNode->data = data;
    newNode->next = nullptr;
    if (!head) {
        head = newNode;
    } else {
        nodeList *temp = head;
        while (temp->next) {
            temp = temp->next;
        }
        temp->next = newNode;
    }
}

void addCenter(nodeList *&head, int data, int pos) {
    nodeList *newNode = new nodeList();
    newNode->data = data;
    if (pos == 1) {
        newNode->next = head;
        head = newNode;
        return;
    }
    nodeList *temp = head;
    for (int i = 1; i < pos - 1 && temp; ++i) {
        temp = temp->next;
    }
    if (!temp) {
        cout << "Position out of range" << endl;
        delete newNode;
        return;
    }
    newNode->next = temp->next;
    temp->next = newNode;
}

void deleteNode(nodeList *&head, int pos) {
    if (!head) {
        cout << "List is empty" << endl;
        return;
    }
    nodeList *temp = head;
    if (pos == 1) {
        head = head->next;
        delete temp;
        return;
    }
    nodeList *prev = nullptr;
    for (int i = 1; i < pos && temp; ++i) {
        prev = temp;
        temp = temp->next;
    }
    if (!temp) {
        cout << "Position out of range" << endl;
        return;
    }
    prev->next = temp->next;
    delete temp;
}

void displayList(nodeList *head) {
    if (!head) {
        cout << "List is empty" << endl;
        return;
    }
    nodeList *temp = head;
    while (temp) {
        cout << temp->data << " -> ";
        temp = temp->next;
    }
    cout << "NULL" << endl;
}

int main() {
    nodeList *head = nullptr;
    int n, data, pos;

    while (true) {
        cout << "\n1. Add node-1 to link list";
        cout << "\n2. Add first node to link list";
        cout << "\n3. Add last node to link list";
        cout << "\n4. Add center node to link list";
        cout << "\n5. Delete node from link list";
        cout << "\n6. Display link list";
        cout << "\nEnter your choice: ";
        cin >> n;
        switch (n) {
            case 1:
                cout << "Enter data: ";
                cin >> data;
                addFirst(head, data);
                break;
            case 2:
                cout << "Enter data: ";
                cin >> data;
                addFirst(head, data);
                break;
            case 3:
                cout << "Enter data: ";
                cin >> data;
                addLast(head, data);
                break;
            case 4:
                cout << "Enter data: ";
                cin >> data;
                cout << "Enter position: ";
                cin >> pos;
                addCenter(head, data, pos);
                break;
            case 5:
                cout << "Enter position: ";
                cin >> pos;
                deleteNode(head, pos);
                break;
            case 6:
                displayList(head);
                break;
            default:
                cout << "Invalid choice" << endl;
        }
    }

    return 0;
}