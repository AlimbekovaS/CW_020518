#include "Library.h"
#include"student.h"

int Student::std_count;

void example()
{
	static int n=5;
	n += 10;
	cout << n << endl;
}

int main()
{
	//Student::init();
	
	/*Student s;
	Student s1("name","surname");*/
	/*example();
	example();
	cout << Student::get_count();*/
	string str1 = "This is example string";// dlia string ispol'syem metod klassa string c_str()
	char str2[] = "a";
	 
	cout << strstr(str1.c_str(), str2) -str1.c_str()<< endl;
	
	system("pause");
	return 0;
}