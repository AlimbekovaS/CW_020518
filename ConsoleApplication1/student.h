#pragma once
#include "Library.h"
class Student
{
private:
	
	string name;
	string surname;
public:
	static int std_count; //poschitat' skol'ko dobavilos obektov
	Student(){std_count++;}
	Student(string name, string surname) 
	{
		this->name = name;
		this->surname = surname;
		std_count++;
	}
	static void init() { std_count = 0; } //static metod
	static int get_count() { return std_count; }
	friend  istream & operator >> (istream& is, Student & s);
	friend  ostream & operator << (ostream& os, Student s);
	~Student() { std_count--; }
 };