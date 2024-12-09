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

    // Determine the grade based on the score
    if (score >= 70) {
        grade = 'A';
    } else if (score >= 60) {
        grade = 'B';
    } else if (score >= 50) {
        grade = 'C';
    } else if (score >= 40) {
        grade = 'D';
    } else if (score >= 0) {
        grade = 'F';
    } else {
        cout << "Invalid score." << endl;
        return 1;
    }

    // Output the full name and grade of the student
    cout << "Student: " << fullName << endl;
    cout << "Course: " << course << endl;
    cout << "Grade: " << grade << endl;

    return 0;
}