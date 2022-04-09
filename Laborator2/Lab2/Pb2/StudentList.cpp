#include "StudentList.h"
void StudentList::setName(string newName)
{
	this->name = newName;
}

string StudentList::getName()
{
	return name;
}

bool StudentList::setMathGrade(float grade)
{
	if (grade >= 1 && grade <= 10) {
		this->mathGrade = grade;
		return true;
	}
	return false;
	
}

float StudentList::getMathGrade()
{
	return this->mathGrade;
}

bool StudentList::setEnglishGrade(float grade)
{
	if (grade >= 1 && grade <= 10) {
		this->englishGrade = grade;
		return true;
	}
	return false;

}

float StudentList::getEnglishGrade()
{
	return this->englishGrade;
}

bool StudentList::setHistoryGrade(float grade)
{
	if (grade >= 1 && grade <= 10) {
		this->historyGrade = grade;
		return true;
	}
	return false;

}

float StudentList::getHistoryGrade()
{
	return this->historyGrade;
}

float StudentList::getAverage()
{
	return(this->mathGrade + 
		this->englishGrade + 
		this->historyGrade) / 3;
}

int StudentList::compareName(StudentList other)
{
	if (this->name.size() == other.getName().size())
		return 0;
	else if (this->name.size() > other.getName().size())
		return 1;
	return -1;
}

int StudentList::compareMathGrade(StudentList other)
{
	if (this->mathGrade == other.getMathGrade())
		return 0;
	else if (this->mathGrade > other.getMathGrade())
		return 1;
	return -1;
}

int StudentList::compareEnglishGrade(StudentList other)
{
	if (this->englishGrade == other.getEnglishGrade())
		return 0;
	else if (this->englishGrade > other.getEnglishGrade())
		return 1;
	return -1;
}

int StudentList::compareHistoryGrade(StudentList other)
{
	if (this->historyGrade == other.getHistoryGrade())
		return 0;
	else if (this->historyGrade > other.getHistoryGrade())
		return 1;
	return -1;
}

int StudentList::compareAverage(StudentList other)
{
	if (this->getAverage() == other.getAverage())
		return 0;
	else if (this->getAverage() > other.getAverage())
		return 1;
	return -1;
}