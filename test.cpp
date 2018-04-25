#include"CourseInterface.h"
#include"Course.h"
#include"MenCatalog.h"

int main()
{
	MenCatalog<Course> catalog;
	Course CSC1("CSC1", 12345, "this is des", 3, "fall 2018");
	catalog.add(CSC1);
	cout<<catalog.getCurrentSize();
	return 0;
}