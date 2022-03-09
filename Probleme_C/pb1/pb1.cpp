/*1. Scrieti un program care genereaza random intre 10 si 20 fisiere, 
fiecare fisier avand inte 1000000 si 2000000 caractere random 
din spatiul 'a'-'z'*/
#include "Header.h"

int main()
{
	int nrf = (rand() % (20 - 10 + 1)) + 10;
	printf("% s % d % s", "Se vor genera ", nrf, " fisiere");
	for (int i = 0; i < nrf; i++)
	{
		char filename[10] = "file";
		int x = 4;
		if (i > 9) {
			int nr = i, index = 1;
			while (nr)
			{
				filename[x + index] = (nr % 10) + '0';
				index--;
				nr /= 10;
			}
		}
		else filename[x] = i + '0';
		filename[++x] = '.';
		filename[++x] = 't';
		filename[++x] = 'x';
		filename[++x] = 't';
		
		FILE* newfile;
		newfile = fopen(filename, "w");
		if (newfile == NULL)
		{
			printf("Eroare la genereare fisierlui.\n");
			exit(EXIT_FAILURE);
		}
		/*
		long dataSize = (rand() % (2000000 - 1000000 + 1)) + 1000000;
		char data[2000000];
		for (int i = 0; i < dataSize; i++)
		{
			char c = (rand() % (122 - 97 + 1)) + 97;
			data[i] = c;
		}
		fputs(data, newfile);
		fclose(newfile);
		printf("%s%s%s%ld%s","S-a creat fisierul ", filename, "cu ", dataSize, "caractere.\n");*/
	}
}
