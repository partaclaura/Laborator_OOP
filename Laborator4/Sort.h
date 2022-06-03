#pragma once
#include <stdlib.h>
#include <cstdarg>
#include <string.h>
#include<iostream>
using namespace std;
class Sort
{
	int* list;
	int count;
	void asc();
public:
	Sort(int count, int min, int max);
	Sort(int count, int *init_list);
	//Sort(int count, int* vector);
	Sort(int count, ...);
	Sort(const char*);
	void printList();
	void BubbleSort(bool ascendent = false);
};

