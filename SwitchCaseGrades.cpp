#include <iostream>
#include <string>
using namespace std;

int main() {
    string fullName, course;
    int score;
    char grade;

    // Ask the user to input the full name of the student
    cout << "Enter the full name of the student: ";
    getline(cin, fullName);

    // Ask the user to input the course
    cout << "Enter the course: ";
    getline(cin, course);

    // Ask the user to input the score
    cout << "Enter the score: ";
    cin >> score;

    // Determine the grade based on the score using switch case
    switch (score / 10 ) {
        case 10:
        case 9:
        case 8:
        case 7:
            grade = 'A';
            break;
        case 6:
            grade = 'B';
            break;
        case 5:
            grade = 'C';
            break;
        case 4:
            grade = 'D';
            break;
        case 3:
        case 2:
        case 1:
        case 0:
            grade = 'F';
            break;
        default:
            cout << "Invalid score." << endl;
            return 1;
    }

    // Output the full name and grade of the student
    cout << "Student: " << fullName << endl;
    cout << "Course: " << course << endl;
    cout << "Grade: " << grade << endl;

    return 0;
}