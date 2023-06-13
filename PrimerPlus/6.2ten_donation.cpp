#include<iostream>
using namespace std;
int main()
{
	double donation[10];
	double average;
	double sum=0;
	int i,j=0;
	cout << "enter donation£»";
	for (i = 0; i < 10; i++)
	{
		cin >> donation[i];
		{
			if (cin.fail())
			{ 
				cout << "not a digit";
				break;
			}
			sum += donation[i];
		}

	}
	average = sum / i;
	for (i = 0; i < 10; i++)
	{
		if (donation[i] > average)
		{
			j++;
		}

	}
	cout << "The average = " << average << endl;
	cout << "In this array has " << j << " value(s) larger than avearge" << endl;
	return 0;
}