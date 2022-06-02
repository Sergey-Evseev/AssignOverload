#include <iostream>
#include "MyClass.h";
using namespace std;

int main()
{
	setlocale(LC_ALL, "ru");

	MyClass a(10);
	MyClass b(2);	
	MyClass c(5);	
	c = a = b;
	return 0;
}