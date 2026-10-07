#include <iostream>
#include <string>
using namespace std;

class Student {
protected:
    int roll_no;
    string name;
public:
    void setStudent() {
        cout << "Enter Roll No: ";
        cin >> roll_no;
        cin.ignore();
        cout << "Enter Name: ";
        getline(cin, name);
    }
    void showStudent() {
        cout << "Roll No: " << roll_no << "\nName: " << name << endl;
    }
};

class Exam : public Student {
protected:
    float marks[6];
public:
    void setMarks() {
        cout << "Enter marks for 6 subjects: ";
        for(int i = 0; i < 6; i++) {
            cin >> marks[i];
        }
    }
    void showMarks() {
        cout << "Subject Marks: ";
        for(int i = 0; i < 6; i++) {
            cout << marks[i] << " ";
        }
        cout << endl;
    }
};

class Result : public Exam {
private:
    float total_marks;
    float percentage;
public:
    void calculateResult() {
        total_marks = 0;
        for(int i = 0; i < 6; i++) {
            total_marks += marks[i];
        }
        percentage = total_marks / 6.0;
    }
    void showResult() {
        cout << "Total Marks: " << total_marks << " / 600" << endl;
        cout << "Percentage: " << percentage << "%" << endl;
    }
};

int main() {
    Result r;
    
    // Taking Interactive Input
    cout << "--- Enter Student Details ---" << endl;
    r.setStudent();
    r.setMarks();
    
    // Processing
    r.calculateResult();
    
    // Displaying Output
    cout << "\n--- Final Scorecard ---" << endl;
    r.showStudent();
    r.showMarks();
    r.showResult();
    
    return 0;
}
