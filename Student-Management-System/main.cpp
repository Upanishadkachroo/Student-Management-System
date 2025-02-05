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

void displayallstudents(const vector<Student> &students){
    if(students.empty()){
        cout<<"No students record found"<<endl;
        return;
    }
    for(const auto &student: students){
        student.display();
    }
}

//Sort karne k liye
void sortstudents(vector<Student> &students){
    int sortchoice;
    cout<<"Sort by: "<<endl;
    cout<<"1. Roll Number "<<endl;
    cout<<"2. Name "<<endl;
    cout<<"3. Marks "<<endl;
    cout<<"Enter choice "<<endl;
    cin>>sortchoice;

    switch(sortchoice){
        case 1:
        sort(students.begin(), students.end(), Student::comparebyroll);
        cout<<"Students sorted by roll number "<<endl;
        break;

        case 2:
        sort(students.begin(), students.end(), Student::comparebyname);
        cout<<"Students sorted by name "<<endl;
        break;

        case 3:
        sort(students.begin(), students.end(), Student::comparebymarks);
        cout<<"Students sorted by marks"<<endl;
        break;

        default:
        cout<<"Invalid choice!"<<endl;
    }  
}

//to search students
void searchstudent(const vector<Student> students, int roll){
    for(const auto &student: students){
        if(student.getroolnumber()==roll){
            student.display();
            return;
        }
    }
    cout<<"Student not found"<<endl;
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