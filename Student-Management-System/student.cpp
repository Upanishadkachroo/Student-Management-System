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

//saves data to file
void Student::savetofile(ofstream &out) const{
    cout<<rollnumber<<" "<<name<<" "<<course<<" "<<marks<<endl;
}

//now load the data from file
vector<Student> Student::loadfromfile(const string &filename){
    vector<Student> students;
    ifstream file(filename);

    if(file.is_open()){
        string name, course;
        int roll;
        float marks;
    }
}