// This is example of inheritancies in oops
#include <iostream>
using namespace std;

class person
{
    int id;
    char name[100];

public:
    void set_p()
    {
        cout << "Enter the ID :: ";
        cin >> id;
        fflush(stdin);
        cout << "Enter the Name :: ";
        cin.get(name, 100);
    }

    void display_p()
    {
        cout << id << "\t" << name << "\t";
    }
};

class student : private person
{
    char course[100];
    int fees;

public:
    void set_s()
    {
        set_p();
        cout << "Enter Course :: ";
        fflush(stdin);
        cin.get(course, 100);

        cout << "Enter Fees :: ";
        cin >> fees;
    }

    void display_s()
    {
        display_p();
        cout << course << "\t" << fees << "\t";
    }
};

int main()
{
    student s1;
    s1.set_s();
    s1.display_s();
}