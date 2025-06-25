
// main cpp file 
#include <iostream>
#include "Student.h" 

using namespace std;
int main()
{

	Student students[3] = {
		Student("ahmed", 101, 85.5),
		Student("kareem", 102, 90.0),
		Student("youssef", 103, 98.0)
	};
	// Display details of each student
	for (int i = 0; i < 3; i++) {
		students[i].display();
	}
	cout << "num of student"<< Student::num_students;

	return 0;



}


