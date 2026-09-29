// Problem: Calculate total, percentage, pass/fail status, grade, highest marks, and lowest marks for five subjects.
// Topic: Nested if, if-else-if-else, Logical Operators
// Difficulty: High
// Approach: Process the five marks and use conditional statements to determine the complete result.

#include <iostream>
using namespace std;


int main(){
    int hindi,eng,math,sci,com;
    cout << "Enter your Marks Hindi Subject: ";
    cin >> hindi;
    cout << "Enter your Marks English Subject: ";
    cin >> eng;
    cout << "Enter your Marks Math Subject: ";
    cin >> math ;
    cout << "Enter your Marks Science Subject: ";
    cin >> sci;
    cout << "Enter your Marks computer Subject: ";
    cin >> com;
    string status;
    char grade = 'F';

    if (hindi >= 0 && hindi <= 100 && eng >= 0 && eng <= 100 && math >= 0 && math <= 100 && sci >= 0 && sci <= 100 && com >= 0 && com <= 100) {
        int passing_marks = 33;
        int total_marks = hindi+eng+com+math+sci;
        double percentage = (double)(total_marks) / 5;

        int highest = (hindi >= eng && hindi >= math && hindi >= sci && hindi >= com) ? hindi :
                (eng >= math && eng >= sci && eng >= com) ? eng :
                    (math >= sci && math >= com) ? math :
                        (sci >= com) ? sci : com;
        int lowest = (hindi <= eng && hindi <= math && hindi <= sci && hindi <= com) ? hindi :
                        (eng <= math && eng <= sci && eng <= com) ? eng :
                            (math <= sci && math <= com) ? math :
                                (sci <= com) ? sci : com;

        if((hindi >= passing_marks) && (eng >= passing_marks) && (math >= passing_marks) && (sci >= passing_marks) && (com >= passing_marks)){
            grade = (percentage >= 90) ? 'A' : (percentage >= 75) ? 'B' : (percentage >= 60) ? 'C' : (percentage >= 45) ? 'D' : (percentage >= 33) ? 'E' : 'F';
            status = "PASS";
            cout << "---------------STUDENT RESULT ----------   " << endl;
            cout << "Total Marks: " << total_marks << "/500" << endl;
            cout << "Percentage: " << percentage << "%" << endl;
            cout << "Status: " << status << endl;
            cout << "Grade: " << grade << endl;
            cout << "Highest Marks: " << highest << endl;
            cout << "Lowest Marks: " << lowest << endl;

        }
        else{
            status = "FAIL";
            cout << "---------------STUDENT RESULT ----------   " << endl;
            cout << "Total Marks: " << total_marks << "/500" << endl;
            cout << "Percentage: " << percentage << "%" << endl;
            cout << "Status: " << status << endl;
            cout << "Grade: " << grade << endl;
            cout << "Highest Marks: " << highest << endl;
            cout << "Lowest Marks: " << lowest << endl;
        }
    }
    else {
        cout << "Invalid Output: Marks should be between 0 and 100.";
    }
    return 0;
}
