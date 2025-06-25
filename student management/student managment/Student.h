
// header file of Student
#pragma once
#include<string>
#include<iostream>
using namespace std;
class Student
{
public:
	string name;
	int id;
	float grade;
	static int num_students;
	Student(string ,int ,float ); // name id grade
	Student(){}
	void display();
	int getnum_students();

	~Student();

};

