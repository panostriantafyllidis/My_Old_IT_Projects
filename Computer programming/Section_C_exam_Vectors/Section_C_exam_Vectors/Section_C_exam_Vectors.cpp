// Section_C_exam_Vectors.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <vector>
using namespace std;
void negativesum()
{
	int negative_sum = 0;
	vector<int> section_c(10);
	for (int i=0; i < 10; i++)
	{
		if (section_c[i] < 0)
		{
			negative_sum = negative_sum + section_c[i];
		}
	}

}
void oddnumbers()
{
	vector<int> section_c(10);
	for (int i=0; i < 10; i++)
	{
		if (section_c[i] % 2 == 0)
		{
			cout << section_c[i] << endl;
		}
	}
}
void maxnumber()
{
	int max;
	vector<int> section_c(10);
	section_c[0] = max;
	for (int i=1; i < 10; i++)
	{
		if (section_c[i] > max)
		{
			cout << section_c[i] << endl;
		}
	}

}
	

int main()
{
	vector<int> section_c(10);
	for (int i = 0; i < 10; i++)
	{
		cin >> section_c[i];
	}
	cout << "The max number is: " << maxnumber << endl;
	cout << "The odd numbers are : " << oddnumbers << endl;
	cout << "The sum of all negatives is : " << negativesum << endl;
    return 0;
}

