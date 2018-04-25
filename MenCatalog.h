#ifndef MENCATALOG_H
#define MENCATALOG_H
#include<iostream>
#include<string>

template<class ItemType>
class MenCatalog
{
private:
	static const int DEFAULT_CAPACITY = 6; 
	ItemType* items = new ItemType[DEFAULT_CAPACITY];
	int itemCount;
	int maxItems;
	int getIndexOf(const ItemType& target, int searchIndex) const;

public:
	MenCatalog(); //default constructor
	int getCurrentSize() const;
	bool isEmpty() const;
	bool add(const ItemType& item);
	bool remove(const ItemType& item);
	void clear();
	bool contains(const ItemType& item) const;
	int getFrequencyOf(const ItemType& item) const;
	vector<ItemType> toVector() const; //return a vector contains all items of bag
	//ArrayBag<ItemType> unionBag(ArrayBag<ItemType> newBag); //return a union bag between the two
	//ArrayBag<ItemType> intersection(ArrayBag<ItemType> newBag);//return a bag that has share items with the two bags
	//ArrayBag<ItemType> difference(ArrayBag<ItemType> newBag);//return a difference bag that has the unique items from the two bags
};

#include "MenCatalog.cpp"
#endif