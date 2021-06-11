// Frank Regal
// Lecture Section 9
// udemy C++ Course
// Grades Example from Lecture

#include <iostream>

using namespace std;

int main () {
    
    int score {};
    cout << "Enter you score on the exam (0 to 100): ";
    cin >> score;
    
    char letterGrade {};
    
    if (score >= 0 && score <= 100) {
        if (score >= 90) {
            letterGrade = 'A';}
        else if (score >=80) {
            letterGrade = 'B';}
        else if (score >= 70) {
            letterGrade = 'C';}
        else if (score >= 60) {
            letterGrade = 'D';}
        else {letterGrade = 'F';}
        cout << "You grade is: " << letterGrade;
        
        if (letterGrade == 'F') {
            cout << "\nSorry your failed. You must repeat the class." << endl;
        }
    } else {
        cout << "Sorry " << score << " is not in range.";
    }
    
    
    cout << endl;
    return 0;
}