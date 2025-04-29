#include <iostream>
using namespace std;

class Student {
    int rollNo, maths, chem, eng, phy, com, t_marks;
    string name;
    double percentage;

public:
    void setStudent(int rollNo, string name, int phy, int maths, int chem, int eng, int com) {
        this->rollNo = rollNo;
        this->name = name;
        this->phy = phy;
        this->maths = maths;
        this->chem = chem;
        this->eng = eng;
        this->com = com;
    }

    void getStudent() {
        cout << endl << "--------------------------------------"<<endl;
        cout << "Name: " << name << endl;
        cout << "Roll No: " << rollNo << endl;

        int choice;
        cout << ""<<name<<", if you want to see your percentage and grade, press 2: ";
        cin >> choice;

        if (choice == 2) {
            t_marks = phy + chem + eng + maths + com;
            percentage = (t_marks / 500.0) * 100;

            cout << "Total Marks: " << t_marks << "/500" << endl;
            cout << "Percentage: " << percentage << "%" << endl;

            if (percentage >= 91 && percentage <= 100) {
                cout << "Your Grade is A";
            } else if (percentage >= 81) {
                cout << "Your Grade is A";
            } else if (percentage >= 71) {
                cout << "Your Grade is A";
            } else if (percentage >= 61) {
                cout << "Your Grade is A";
            } else if (percentage >= 51) {
                cout << "Your Grade is A";
            } else if (percentage >= 41) {
                cout << "Your Grade is A";
            } else if (percentage >= 33) {
                cout << "Your Grade is A";
            } else {
                cout << "Your Grade is A";
            }
        }
    }
};

int main() {
    int n;
    cout << "Enter number of students: ";
    cin >> n;

    Student std[100]; 

    for (int i = 0; i < n; i++) {
        int rollNo, maths, chem, eng, phy, com;
        string name;

        cout << "\n----- Enter Student Details -----" << endl;
        cout << "Enter Roll No: ";
        cin >> rollNo;

        cout << "Enter Name: ";
        cin >> name;

        cout << "Enter Physics Marks: ";
        cin >> phy;
        cout << "Enter Maths Marks: ";
        cin >> maths;
        cout << "Enter Chemistry Marks: ";
        cin >> chem;
        cout << "Enter English Marks: ";
        cin >> eng;
        cout << "Enter Computer Marks: ";
        cin >> com;

        std[i].setStudent(rollNo, name, phy, maths, chem, eng, com);
    }

    for (int i = 0; i < n; i++) {
        std[i].getStudent();
    }

    return 0;
}
