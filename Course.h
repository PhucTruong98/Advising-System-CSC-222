#ifndef COURSES_H
#define COURSES_H
#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Course
{
private:
	string courseTitle;
	int courseID;
	string description;
	int credits;
	string term;
	int prequisites[4];
//	Course prequisites[] = new CourseInterface[4]; //Can't create an array of unfinished class
	int noPreq = 0;
public:
	Course();
	Course(string title,int ID,string description,int credits,string term);

	string getTitle() const;
	int getID() const;
	string getDescription() const;
	int getCredit() const;
	string getTerm() const;
	
	vector<int> getPrequisites() const; //return a vector of interger that has all prequisites's ID 

	bool setTitle(const string newTitle);
	bool setID(const int newID);
	bool setDescription(const string newDescription);
	bool setCredit(const int newCredit);
	bool setTerm(const string newTerm); 

	bool setPrequisites(const Course& newPreq);
	bool removePrequisites(const Course& preq); 
	bool isPreqOf(const Course& course);

	void printCourse() const;
};

#include"Course.cpp"
#endif