Course::Course()
{

}

Course::Course(string title,int ID,string description,int credits,string term):courseTitle(title), courseID(ID), description(description), credits(credits), term(term)
{

}

string Course::getTitle() const
{
	return courseTitle;
}

int Course::getID() const
{
	return courseID;
}

string Course::getDescription() const
{
	return description;
}

int Course::getCredit() const
{
	return credits;
}

string Course::getTerm() const
{
	return term;
}

vector<int> Course::getPrequisites() const
{
	vector<int> preqs;
	for(int i = 0; i < noPreq; i++)
	{
		preqs.push_back(prequisites[i]);
	}
	return preqs;
}

bool Course::setTitle(const string newTitle)
{
	courseTitle = newTitle;
	return true;
}
bool Course::setID(const int newID)
{
	courseID = newID;
	return true;
}
bool Course::setDescription(const string newDescription)
{
	description = newDescription;
	return true;
}
bool Course::setCredit(const int newCredit)
{
	credits = newCredit;
	return true;
}

bool Course::setTerm(const string newTerm)
{
	term = newTerm;
	return true;
}

bool Course::setPrequisites(const CourseInterface& newPreq)
{
	prequisites[noPreq] = newPreq.getID();
	noPreq++;
	return true;
}

bool Course::removePrequisites(const CourseInterface& preq)
{
	return true;

}

bool Course::isPreqOf(const CourseInterface& course)
{
	vector<int> course2Preq = course.getPrequisites();
	bool isPreq = false;
	for(int i = 0; i < 3; i++)
	{
		if(courseID == course2Preq[i])
		{
			isPreq = true;
			break;
		}
	}
	return isPreq;
}