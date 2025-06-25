
// file cpp for functions of student 
#include "Student.h"
Student::Student(string n, int i, float g ) {
	num_students++;
	name = n;
	id = i;
	grade = g;
}
void Student::display() {
	// print student details
	cout << "Name: " << name << endl;
	cout << "ID: " << id << endl;
	cout << "Grade: " << grade << endl;
}
Student::~Student() {
	// destructor
	cout << "Destructor called for student: " << name << endl;
}
int Student::num_students = 0;
int Student:: getnum_students() {
	return num_students;
}
