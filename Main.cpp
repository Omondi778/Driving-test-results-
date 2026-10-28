
#include <iostream>
#include <string>
using namespace std;

int main() {
    string studentName;
    double theoryMarks, practicalMarks, averageScore;

    // Prompt the user for details
    cout << "Enter student name: ";
    getline(cin, studentName);

    cout << "Enter theory test marks: ";
    cin >> theoryMarks;

    cout << "Enter practical test marks: ";
    cin >> practicalMarks;

    // Calculate the average score
    averageScore = (theoryMarks + practicalMarks) / 2;

    // Display the results
    cout << "\n===== DRIVING TEST RESULT =====" << endl;
    cout << "Student Name    : " << studentName << endl;
    cout << "Theory Marks    : " << theoryMarks << endl;
    cout << "Practical Marks : " << practicalMarks << endl;
    cout << "Average Score   : " << averageScore << endl;

    // A student passes if the average is 50 and above
    if (averageScore >= 50) {
        cout << "Result          : PASSED" << endl;
    } else {
        cout << "Result          : FAILED" << endl;
    }
    cout << "===============================" << endl;

    return 0;
}
