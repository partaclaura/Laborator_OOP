#include "NumberList.h"
void NumberList::Init()
{
	this->count = 0;
}

bool NumberList::Add(int x)
{
	this->numbers[count] = x;
	this->count++;
	if (this->count >= 10)
		return false;
	return true;
}

void NumberList::Sort()
{
	for (int i = 0; i < this->count-1; i++)
	{
		for(int j=i+1; j< this->count; j++)
			if (numbers[i] > numbers[j])
			{
				int aux = numbers[i];
				numbers[i] = numbers[j];
				numbers[j] = aux;
			}
	}
}

void NumberList::Print()
{
	for (int i = 0; i < this->count; i++)
		cout << this->numbers[i] << ' ';
	cout << '\n';
}