#ifndef COURSES_H
#define COURSES_H
#include <iostream>
#include <string>
#include <vector>
#include "CourseInterface.h"
using namespace std;

class Course:public CourseInterface
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
	vector<int> getPrequisites() const;

	bool setTitle(const string newTitle);
	bool setID(const int newID);
	bool setDescription(const string newDescription);
	bool setCredit(const int newCredit);
	bool setTerm(const string newTerm); 

	bool setPrequisites(const CourseInterface& newPreq);
	bool removePrequisites(const CourseInterface& preq); 
	bool isPreqOf(const CourseInterface& course);
};

#include"Course.cpp"
#endif