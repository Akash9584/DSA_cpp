#include <iostream>
#include <utility>
using namespace std;

int main() {
    pair<int, string> student;

    student.first = 025;      // roll number
    student.second = "Akash"; // name

    cout << "Roll_No: " << student.first << endl;
    cout << "Name: " << student.second << endl;

    return 0;
}
