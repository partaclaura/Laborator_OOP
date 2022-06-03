#include "Sort.h"

Sort::Sort(int count, int min, int max)
{
	this->count = count;
	this->list = new int[count];

	for (int i = 0; i < count; i++)
		list[i] = min + rand() % (max - min + 1);
}

Sort::Sort(int count, int* init_list)
{
	this->count = count;
	this->list = init_list;
}

Sort::Sort(int count, ...)
{
	this->count = count;
	this->list = new int[count];
	va_list vl;
	va_start(vl, count);

	for (int i = 1; i <= count; i++)
		list[i - 1] = va_arg(vl, int);
	va_end(vl);
}

Sort::Sort(const char* str)
{
	this->count = 0;
	for (int i = 0; i < strlen(str); i++)
		if (str[i] == ',')
			count++;
	count++;
	this->list = new int[count];
	int elem = 0;
	int index = 0;
	for (int i = 0; i < strlen(str); i++)
	{
		if (str[i] == ',')
		{
			list[index++] = elem;
			elem = 0;
		}
		else elem = elem * 10 + (str[i] - '0');
	}
	list[index++] = elem;
}

void Sort::printList()
{
	for (int i = 0; i < this->count; i++)
		cout << this->list[i] << ' ';
	cout << endl;
}

void Sort::asc()
{
	for (int i = 0; i < this->count / 2; i++) {
		swap(list[i], list[count - i - 1]);
	}
}

void Sort::BubbleSort(bool ascendent)
{
	for (int i = 0; i < this->count; i++)
	{
		bool ok = false;
		for (int j = 0; j < this->count - i - 1; j++)
		{
			if (list[j + 1] > list[j])
			{
				swap(list[j + 1], list[j]);
				ok = true;
			}
		}
		if (!ok)
		{
			if (ascendent == true) {
				asc();
			}
			return;
		}
	}
	
}
