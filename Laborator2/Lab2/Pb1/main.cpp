#include "NumberList.h"

int main()
{
	NumberList nr;
	nr.Init();
	while (true)
	{
		int newNr = rand() % 100;
		if (nr.Add(newNr) == false)
			break;
	}
	nr.Print();
	nr.Sort();
	nr.Print();

}