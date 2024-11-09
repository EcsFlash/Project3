#include "Stack.h"
#include "Queue.h"
#include <iostream>
#include <windows.h> 
using namespace std;
void pause() {
    bool flag = true;
    int way;
    do {
        cout << "Enter 0 to go back" << endl;
        cin >> way;
        switch (way) {
        case 0:
            flag = false;
            break;
        default:
            break;
        }
    } while (flag);
}

void showMenuStack() {
    cout << "Select a method to execute:" << endl;
    cout << "1. Push" << endl;
    cout << "2. Pop" << endl;
    cout << "3. Clear" << endl;
    cout << "4. Peek" << endl;
    cout << "0. Exit" << endl;
}
void showMenuQueue() {
    cout << "Select a method to execute:" << endl;
    cout << "1. Enque" << endl;
    cout << "2. Deque" << endl;
    cout << "3. Peek" << endl;
    cout << "4. Clear" << endl;
    cout << "0. Exit" << endl;
}

int main() {
    //printLogo();
    int element;
    int way = 0;
    cout << "Let's start!" << endl;
    cout << "Stack or ueue?" << endl;
    cout << "1. Stack" << endl;
    cout << "2. ueue" << endl;
    cout << "Enter 1 or 2" << endl;
    cin >> way;
    system("cls");
    //printLogo();
    bool flag = false;
    
    Stack<int> stack;
    Queue<int> ueue;
    int choice = 0;
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    if (way == 1) {
        do {
            system("cls");
            cout << "Current Stack:" << '\t';
            SetConsoleTextAttribute(hConsole, 12);
            cout << stack << endl;
            SetConsoleTextAttribute(hConsole, 15);
            showMenuStack();

            cout << "Enter your choice: " << endl;
            cin >> choice;

            switch (choice) {
            case 1:
                cin >> element;
                stack.push(element);
                break;
            case 2:
                stack.pop();
                break;
            case 3:
                stack.clear();
                break;
            case 4:
                cout << stack.peek() << endl;
                pause();
                break;
            case 0:
                cout << "Leaving the programm." << endl;
                break;
            default:
                cout << "Invalid choice. Please try again." << endl;
                break;
            }
        } while (choice != 0);
    }
    else if (way == 2) {
        do {
            system("cls");
            cout << "Current ueue:" << '\t';
            SetConsoleTextAttribute(hConsole, 12);
            cout << ueue << endl;
            SetConsoleTextAttribute(hConsole, 15);
            showMenuQueue();

            cout << "Enter your choice: " << endl;
            cin >> choice;

            switch (choice) {
            case 1:
                cin >> element;
                ueue.enque(element);
                break;
            case 2:
                ueue.deque();
                break;
            case 3:
                ueue.clear();
                break;
            case 4:
                cout << ueue.peek() << endl;
                pause();
                break;
            case 0:
                cout << "Leaving the programm." << endl;
                break;
            default:
                cout << "Invalid choice. Please try again." << endl;
                break;
            }
        } while (choice != 0);
    }
    else {
        throw invalid_argument("пу пу пу");
    }
}


