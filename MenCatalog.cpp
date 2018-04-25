template<class ItemType>
MenCatalog<ItemType>::MenCatalog(): itemCount(0), maxItems(DEFAULT_CAPACITY) //default constructor
{

}

template<class ItemType>
int MenCatalog<ItemType>::getIndexOf(const ItemType& item, int searchIndex) const //return the index of an item using recursive call
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
int MenCatalog<ItemType>::getCurrentSize() const
{
	return itemCount;
}

template<class ItemType>
bool MenCatalog<ItemType>::isEmpty() const
{
	return itemCount == 0;
}


template<class ItemType>
bool MenCatalog<ItemType>::add(const ItemType& item) //add new item, if there are no room, it will double the size of the array
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
bool MenCatalog<ItemType>::remove(const ItemType& item) //remove the item from bag
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
void MenCatalog<ItemType>::clear() 
{
	itemCount = 0;
}

template<class ItemType>
bool MenCatalog<ItemType>::contains(const ItemType& item) const
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
int MenCatalog<ItemType>::getFrequencyOf(const ItemType& item) const
{
	int frequency = 0;
	for (int i = 0; i <= itemCount; i++)
	{
		if(items[i] == item)
		{
			frequency++;
		}
	}
	return frequency;
}

template<class ItemType>
vector<ItemType> MenCatalog<ItemType>::toVector() const //return a vector that contains all items in bag
{
	vector<ItemType> bagContents;
	for (int i = 0; i < itemCount; i++)
	{
		bagContents.push_back(items[i]);
	}
	return bagContents;
}
