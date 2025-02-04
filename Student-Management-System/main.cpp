#include "student.h"

void addstudent(vector<Student> &students){
    string name, course;
    int roll;
    float marks;

    cout<<"Enter name: ";
    cin>>name;
    cout<<"Roll Number: ";
    cin>>roll;
    cout<<"Enter course: ";
    cin>>course;
    cout<<"Enter marks: ";
    cin>>marks;

    students.push_back(Student(name, roll, course, marks));
    cout<<"Course Added Sucessfully"<<endl;
}

int main(){
    vector<Student> students=Student::loadfromfile("database.txt");
    int choice, roll;

    do{
        cout<<"--Student Management System --"<<endl;
        cout<<"1. Add Student"<<endl;
        cout<<"2. Display all students"<<endl;
        cout<<"3. Sort Students"<<endl;
        cout<<"4. Search Student"<<endl;
        cout<<"5. Delete Student"<<endl;
        cout<<"6. Save & Exit"<<endl;
        cout<<"Enter choice ";
        cin>>choice;

        switch(choice){
            case 1:
            addstudent(students);
            break;

            case 2:
            displayallstudents(students);
            break;

            case 3:
            sortstudents(students);
            break;

            case 4:
            cout<<"Roll Number ";
            cin>>roll;
            searchstudent(students, roll);
            break;

            case 5:
            cout<<"Roll Number ";
            cin>>roll;
            searchstudent(students, roll);
            break;

            case 6:
            savetofile(students, "database.txt");
            cout<<"Data saved sucessfully"<<endl;
            break;

            default:
            cout<<"Invalid choice! Try Again"<<endl;
        }
    }
    while(choice!=6);

    return 0;
}