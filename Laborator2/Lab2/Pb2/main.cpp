#include "StudentList.h"

void print(StudentList s1, StudentList s2, int value, string object)
{
	if (value == 1)
		cout << s1.getName() << " are " << object << " mai mare.";
	else if (value == 0)
		cout << s1.getName() << " si " << s2.getName() << " au " << object << " la fel.";
	else if(value == -1)
		cout << s2.getName() << " are " << object << " mai mare.";
	cout << '\n';
}

int main()
{
	StudentList student1;
	StudentList student2;
	
	student1.setName("Andrei");
	student1.setMathGrade(7.90);
	student1.setEnglishGrade(7);
	student1.setHistoryGrade(6);

	student2.setName("Maria");
	student2.setMathGrade(7.80);
	student2.setEnglishGrade(10);
	student2.setHistoryGrade(6);

	print(student1, student2, student1.compareName(student2), "numele");
	print(student1, student2, student1.compareMathGrade(student2), "nota la mate");
	print(student1, student2, student1.compareEnglishGrade(student2), "nota la engleza");
	print(student1, student2, student1.compareHistoryGrade(student2), "nota la istorie");
	print(student1, student2, student1.compareAverage(student2), "media");
	return 0;
	
}