#include "student.h"

//constructor
Student::Student(string n, int r, string c, float m){
    name=n;
    rollnumber=r;
    course=c;
    marks=m;
}

//get student roll number
int Student::getroolnumber() const{
    return rollnumber;
}

//get student name;
string Student::getname() const{
    return name;
}

//get  student marks
float Student::getmarks() const{
    return marks;
}

//display at details
void Student::display() const{
    cout<<"Roll No. "<<rollnumber<<" | Name: "<<name<<" | Course: "<<course<<"| Marks: "<<marks<<endl;
}