#ifndef FACULTY_H
#define FACULTY_H


#include "Student.h"
#include "InserviceStudent.h"
#include "Regular.h"
#include<memory>
#include <map>
#include <algorithm>

class Faculty {
    private:
    string FacultyName;
    vector<shared_ptr<Student>> student_lists;

    public:
    ~Faculty();

    void addStudent();
    void showStudent();
    bool checkID(string id);
    
    void deleteStudent();
    void showStudentHighestEntranceScore();
    void showRelugarStudent();
    void inserviceList();

    void lastest_8List();
    void gpaHighest();
    void arrangeList();
    void numberOfStudentsByYear();


};



#endif