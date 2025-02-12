#include "student.h"

//constructor call
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

        while(file>>roll>>name>>course>>marks){
            students.push_back(Student(name, roll, course, marks));
        }

        file.close();
    }
    return students;
}

//compare roll number in ascending order
bool Student::comparebyroll(const Student &s1, const Student &s2){
    return s1.getroolnumber() < s2.getroolnumber();
}

//comapre by name
bool Student::comparebyname(const Student &s1, const Student &s2){
    return s1.getname() < s2.getname();
}

//comapre student by marks
bool Student::comparebymarks(const Student &s1, const Student &s2){
    return s1.getmarks() < s2.getmarks();
}
