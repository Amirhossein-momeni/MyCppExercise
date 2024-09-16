#include <iostream>
#include <vector>
#include <string>
#include <chrono>
#include <thread>

using namespace std;

vector<string> studentNames;
vector<int> studentScores;



void clearConsole() {
#ifdef _WIN32
    system("cls");
#else
    system("clear");
#endif
}

void name() {
    int numStudents;
    cout << "Enter the number of new students: ";
    cin >> numStudents;

    cin.ignore();

    for (int i = 0; i < numStudents; ++i) {
        string studentName;
        cout << "Enter the name of student " << (studentNames.size() + 1) << ": ";
        getline(cin, studentName);
        studentNames.push_back(studentName);
        studentScores.push_back(0);
    }

    clearConsole();
}

void enterScores() {
    if (studentNames.empty()) {
        cout << "No students available. Please enter student names first." << endl;
        return;
    }

    for (size_t i = 0; i < studentNames.size(); ++i) {
        cout << "Enter the score for " << studentNames[i] << ": ";
        cin >> studentScores[i];
    }

    clearConsole();
}

void averageGrades() {
    if (studentNames.empty()) {
        cout << "No students available. Please enter student names first." << endl;
        return;
    }

    if (studentScores.empty() || studentScores.size() != studentNames.size()) {
        cout << "No scores available. Please enter student scores first." << endl;
        return;
    }

    double sum = 0;
    for (int score : studentScores) {
        sum += score;
    }

    double average = sum / studentScores.size();
    cout << "The average grade is: " << average << endl;
}

void printWithDelay(const string& text, chrono::milliseconds delay) {
    for (char ch : text) {
        cout << ch << flush;
        this_thread::sleep_for(delay);
    }
    cout << endl;
}

void displayMenu() {
    clearConsole();
    printWithDelay("In the menu below select an option:", chrono::milliseconds(30));
    printWithDelay("====================================", chrono::milliseconds(30));
    printWithDelay("", chrono::milliseconds(30));
    printWithDelay("1) Enter the name of the student.", chrono::milliseconds(30));
    printWithDelay("2) Enter student scores.", chrono::milliseconds(30));
    printWithDelay("3) Average student grades.", chrono::milliseconds(30));
    printWithDelay("4) Exit.", chrono::milliseconds(30));
    printWithDelay("", chrono::milliseconds(30));
    printWithDelay("====================================", chrono::milliseconds(30));
}



int main() {

    while (true) {
        int choice;

        displayMenu();

        cin >> choice;

        switch(choice) {
            case 1:
                cout << "You chose the first option." << endl << endl;
                name();
                break;
            case 2:
                cout << "You chose the second option." << endl << endl;
                enterScores();
                break;
            case 3:
                cout << "You chose the third option." << endl << endl;
                averageGrades();
                break;
            case 4:
                cout << "Exiting the program." << endl;
                return 0;
            default:
                cout << "Invalid choice. Please select a valid option." << endl;
        }
    }

    return 0;
}
