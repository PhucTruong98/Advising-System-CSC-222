#ifndef COURSEINTERFACE_H
#define COURSEINTERFACE_H
#include<iostream>
#include<string>
#include<vector>
using namespace std; 

class CourseInterface
{
public:
	virtual string getTitle() const = 0;
	virtual int getID() const = 0;
	virtual string getDescription() const = 0;
	virtual int getCredit() const = 0;
	virtual string getTerm() const = 0;
	virtual vector<int> getPrequisites() const = 0;

	virtual bool setTitle(const string newTitle) = 0;
	virtual bool setID(const int newID) = 0;
	virtual bool setDescription(const string newDescription) = 0;
	virtual bool setCredit(const int newCredit) = 0;
	virtual bool setTerm(const string newTerm) = 0; 
//	virtual bool setPrequisites(const CourseInterface newPreq) = 0;
//	virtual bool removePrequisites(const CourseInterface preq) = 0; 



};

#endif