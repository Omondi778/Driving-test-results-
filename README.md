C++

#include <iostream>
using namespace std;

int main()
{
    char studentName[100];
    double theoryMarks, practicalMarks, averageScore;

    cout << "Enter student name: ";
    cin.getline(studentName, 100);

    cout << "Enter theory test marks: ";
    cin >> theoryMarks;

    cout << "Enter practical test marks: ";
    cin >> practicalMarks;

    averageScore = (theoryMarks + practicalMarks) / 2;

    cout << "\n===== DRIVING TEST RESULTS =====\n";
    cout << "Student Name: " << studentName << endl;
    cout << "Theory Marks: " << theoryMarks << endl;
    cout << "Practical Marks: " << practicalMarks << endl;
    cout << "Average Score: " << averageScore << endl;

    if (averageScore >= 50)
    {
        cout << "Result: Passed" << endl;
    }
    else
    {
        cout << "Result: Failed" << endl;
    }

    cout << "================================\n";

    return 0;
}
