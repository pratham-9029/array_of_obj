#include <iostream>
using namespace std;

class student
{
    int rollNo, maths, chem, eng, phy, com, choice, t_marks;
    string name;
    double percentage;
    char grade;

public:
    void setStudent(int rollNo, int maths, int chem, int eng, int phy, int com, int choice,string name,
                    double percentage)
    {
        this->rollNo = rollNo;
        this->chem = chem;
        this->com = com;
        this->eng = eng;
        this->maths = maths;
        this->name = name;
        this->percentage = percentage;
        this->phy = phy;
        this->choice = choice;
    }

    void getStudent()
    {
        cout << "Your Name is : " << this->name << endl;
        cout << "Your Roll No : " << this->rollNo << endl;

        cout << endl;
        cout << "Hey hi ! If you want to see your percentage and grade , then press 2";
        cout << endl;
        cout << "Enter your choice : ";
        cin >> choice;
        if (choice == 2)
        {
            t_marks = phy + chem + eng + maths + com;
            percentage = (t_marks / 500) * 100;

            cout << "Your percentage is : " << percentage << endl;

            if (percentage >= 1 && percentage <= 100)
            {
                if (percentage >= 91)
                {
                    cout << "Your Grade is A";
                }
                else if (percentage >= 81)
                {
                    cout << "Your Grade is B1";
                }
                else if (percentage >= 71)
                {
                    cout << "Your Grade is B2";
                }
                else if (percentage >= 61)
                {
                    cout << "Your Grade is C1";
                }
                else if (percentage >= 51)
                {
                    cout << "Your Grade is C2";
                }
                else if (percentage >= 41)
                {
                    cout << "Your Grade is D1";
                }
                else if (percentage >= 33)
                {
                    cout << "Your are pass";
                }
                else
                {
                    cout << "Your Grade is F";
                }
            }
            else
            {
                cout << "Wrong input";
            }
        }
        else
        {
            cout << endl;
        }
    }
};

int main()
{
    int n, rollNo, maths, chem, eng, phy, com;
    string name;
    cout << "Enter Student No : ";
    cin >> n;

    student std[n];

    for (int i = 0; i < n; i++)
    {
        cout << "-----Enter STudent Detail-----" << endl;
        cout << "Enter Your roll no : ";
        cin >> rollNo;
        cout << "Enter Your Name : ";
        cin >> name;
        cout << "enter phy marks: ";
        cin >> phy;
        cout << "enter maths marks: ";
        cin >> maths;
        cout << "enter chem marks: ";
        cin >> chem;
        cout << "enter eng marks: ";
        cin >> eng;
        cout << "enter com marks: ";
        cin >> com;

        std[i].setStudent(rollNo, name, phy, maths, chem, eng, com);
    }

    for (int i = 0; i < n; i++)
    {
        std[i].getStudent();
    }
}