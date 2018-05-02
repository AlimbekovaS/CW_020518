#include"Library.h"
#include"student.h"
istream& operator >> (istream& is, Student &s)// peregruzka operatora vvoda
{
	is >> s.name >> s.surname;
	return is;
}
ostream &operator<<(ostream&os, Student s)
{
	os << s.name << "\t" << s.surname << endl;
	return os;
}