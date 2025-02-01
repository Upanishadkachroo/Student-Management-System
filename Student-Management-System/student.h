#ifndef STUDENT_H
#define STUDENT_H

#include<iostream>
#include<fstream>
#include<vector>
#include<algorithm>
using namespace std;

class Student{
    private:
    string name;
    int rollnumber;
    string course;
    float marks;

    public:
    Student(string name, int rollnumber, string course, float marks){
        this->name=name;
        this->rollnumber=rollnumber;
        this->course=course;
        this->marks=marks;
    }

    //getter
    int getroolnumber() const{
        return rollnumber;
    }

    string getname() const{
        return name;
    }

    string getname() const{
        return course;
    }

    float getmarks() const{
        return marks;
    }

    //methods or functions
    void display() const;
    void savetofile(ofstream &out) const;
    static vector<Student> loadfromfile(const string &filename);

    //sorting 
    static bool comparebyroll(const Student &s1, const Student &s2);
    static bool comparebyname(const Student &s1, const Student &s2);
    static bool comparebymarks(const Student &s1, const Student &s2);
};

#endif

