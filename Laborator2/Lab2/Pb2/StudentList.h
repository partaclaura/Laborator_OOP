#pragma once
#include <iostream>
using namespace std;
class StudentList
{
	string name;
	float mathGrade;
	float englishGrade;
	float historyGrade;
public:
	void setName(string newName);
	string getName();
	bool setMathGrade(float grade);
	float getMathGrade();
	bool setEnglishGrade(float grade);
	float getEnglishGrade();
	bool setHistoryGrade(float grade);
	float getHistoryGrade();
	float getAverage();
	int compareName(StudentList other);
	int compareMathGrade(StudentList other);
	int compareEnglishGrade(StudentList other);
	int compareHistoryGrade(StudentList other);
	int compareAverage(StudentList other);
};

