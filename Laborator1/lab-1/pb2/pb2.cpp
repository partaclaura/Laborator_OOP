#define _CRT_SECURE_NO_DEPRECATE
#include <stdio.h> 
#include <stdlib.h> 
#include <cstring>
#include <iostream>
using namespace std;
/*Write a program in C-Language that open the file "in.txt", and prints the sum of the numbers
that are found on each line of the file in.txt. To open the file use fopen API.
Write your own function that converts a string to a number (similar cu atoi API).
To print something to the screen, use the printf API.
Example: let's consider the following "ini.txt" file:
             123
             198698
             5009
             983279
The program will print to the screen 1187109.
*/

int main()
{
    FILE* file1;
    if ((file1 = fopen("in.txt", "r")) == NULL) {
        printf("Error! opening file");
        exit(1);
    }
    int nr = 0, sum = 0;
    do {
        char c;
        c = fgetc(file1);
        if (c == '\n' || feof(file1)) {
            sum += nr;
            nr = 0;
        }
        else {
            nr *= 10;
            nr += c - '0';
            /*switch (c) {
            case '1': nr += 1; break;
            case '2': nr += 2; break;
            case '3': nr += 3; break;
            case '4': nr += 4; break;
            case '5': nr += 5; break;
            case '6': nr += 6; break;
            case '7': nr += 7; break;
            case '8': nr += 8; break;
            case '9': nr += 9; break;
            }*/
        }
        if (feof(file1))
            break;
    } while (true);
    cout << sum;
    return 0;
}


