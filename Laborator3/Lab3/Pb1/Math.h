#pragma once
#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<stdio.h>
#include<stdlib.h>
#include<stdarg.h>
#include<string.h>
using namespace std;

class Math
{
public:
	static int Add(int a, int b);
	static int Add(int a, int b, int c);
	static int Add(double a, double b);
	static int Add(double a, double b, double c);
	static int Mul(int a, int b);
	static int Mul(int a, int b, int c);
	static int Mul(double a, double b);
	static int Mul(double a, double b, double c);
	static int Add(int count, ...);
	static char* Add(const char* a, const char* b);
};

