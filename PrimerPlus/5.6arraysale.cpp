#include<iostream>
using namespace std;

int main()
{
	const int year = 3, month = 12;
	const char* months[month] =
	{
	"January",
	"February",
	"March",
	"April",
	"May",
	"June",
	"July",
	"August",
	"September",
	"October",
	"November",
	"December"
	};
	int sell[year][month];
	int sum[year]{ 0,0,0 };
	int totalsum = 0;
	for (int m = 0; m < 3; m++)
	{
		cout << "the year is " << m+1 << endl;
		for (int i = 0; i < 12; i++)
		{
			cout << months[i] << ":";
			cin >> sell[m][i];
			sum[m] += sell[m][i];

		}

	}
	totalsum = sum[0] + sum[1] + sum[2];
	cout<< "The 1st year's saleroom is " << sum[0] << endl;
	cout << "The 2nd year's saleroom is " << sum[1] << endl;
	cout << "The 3rd year's saleroom is " << sum[2] << endl;
	cout << "The total saleroom of the 3 years is " << totalsum << ".\n";
	
	return 0;
}