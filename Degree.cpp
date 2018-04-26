template<class ItemType>
Degree<ItemType>::Degree(): itemCount(0), maxItems(DEFAULT_CAPACITY) //default constructor
{

}

template<class ItemType>
Degree<ItemType>::Degree(string degree, string description): itemCount(0), maxItems(DEFAULT_CAPACITY), degree(degree), degreeDescription(description) //parametrize constructor
{

}

template<class ItemType>
int Degree<ItemType>::getIndexOf(const ItemType& item, int searchIndex) const //return the index of an item using recursive call
{
	int result = -1;
	if(searchIndex < itemCount)
	{
		if(items[searchIndex] == item)
		{
			result = searchIndex;
		}
		else
		{
			result = getIndexOf(item, searchIndex + 1);
		}
	}
	return result;
}

template<class ItemType>
int Degree<ItemType>::getCurrentSize() const //how many courses is in this degree
{
	return itemCount;
}

template<class ItemType>
int Degree<ItemType>::getTotalCredit() const //return the total credit for this major
{
	int totalCredit = 0;
	for(int i = 0; i < itemCount; i++)
	{
		totalCredit += items[i].getCredit();
	}
	return totalCredit;
}


template<class ItemType>
bool Degree<ItemType>::add(const ItemType& item) //add new item, if there are no room, it will double the size of the array
{
	bool hasRoomToAdd = (itemCount < maxItems);
	if(!hasRoomToAdd)
	{
		ItemType* bagContents = items; //new pointer points to the bag array
		items = new ItemType[2*itemCount]; // new array with double the size
		for(int i = 0; i <= itemCount; i++)
		{
			items[i] = bagContents[i]; //copy the items from old to new
		}
		delete[] bagContents; //delete the old bag
		maxItems = maxItems*2;
		
	}
	items[itemCount] = item;
	itemCount++;
	return true;
}


template<class ItemType>
bool Degree<ItemType>::remove(const ItemType& item) //remove the item from bag
{
	bool removed = false;
	for(int i = 0; i <= itemCount; i++)
	{
		if(items[i] == item)
		{
			items[i] = items[itemCount];
			itemCount--;
			removed = true;
		}
	};
	return removed;
}


template<class ItemType>
bool Degree<ItemType>::contains(const ItemType& item) const
{
	bool contains = false;
	for (int i = 0; i <= itemCount; i++)//loop thru to see if item is in bag
	{
		if (items[i] == item)
		{
			contains = true;
		}
	}
	return contains;
}


template<class ItemType>
vector<ItemType> Degree<ItemType>::toVector() const //return a vector that contains all items in bag
{
	vector<ItemType> bagContents;
	for (int i = 0; i < itemCount; i++)
	{
		bagContents.push_back(items[i]);
	}
	return bagContents;
}

template<class ItemType>
void Degree<ItemType>::displayDegree() const
{
	cout<<"---------------------------------------------------------------------------------------"<<endl;
	cout<< degree << endl << degreeDescription<< endl <<"These are the require courses for this major:"<<endl;
	for(int i = 0; i < itemCount; i++)
	{
		items[i].printCourse();
	}
	cout<< "Total Major Credit: " << getTotalCredit()<< endl;
	cout<<"---------------------------------------------------------------------------------------"<<endl;

}
