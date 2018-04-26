#ifndef DEGREE_H
#define DEGREE_H
#include<iostream>
#include<string>
using namespace std;

template<class ItemType>
class Degree
{
private:
	static const int DEFAULT_CAPACITY = 20; 
	ItemType* items = new ItemType[DEFAULT_CAPACITY];
	int itemCount;
	int maxItems;
	int getIndexOf(const ItemType& target, int searchIndex) const;

	string degree; //what degree is this
	string degreeDescription; //the descriptionof degree

public:
	Degree();
	Degree(string degree, string description); //default constructor
	int getCurrentSize() const;
	int getTotalCredit() const;
	bool add(const ItemType& item);
	bool remove(const ItemType& item);
	bool contains(const ItemType& item) const;
	void displayDegree() const;
	vector<ItemType> toVector() const; //return a vector contains all items of bag

	
};

#include "Degree.cpp"
#endif