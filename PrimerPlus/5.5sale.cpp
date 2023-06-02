#include<iostream>
using namespace std;

int main()
{
	const int month = 12;
	int sell;
	int total = 0;
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
	for (int i = 0; i < month; i++)
	{
		cout << months[i]<<":";
		cin >> sell;
		total += sell;
	}
	cout << "So this year we sold " << total << " books for all.";
	return 0;
}