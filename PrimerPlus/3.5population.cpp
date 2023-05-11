#include<iostream>
using namespace std;

//long long ÊÇÕûÊý
int main()
{
	long long wp, op;
	double rate;
	cout << "pls enter the world's population_____\b\b\b\b\b";
	cin >> wp;
	cout << "Enter the population of the US_____\b\b\b\b\b";
	cin >> op;
	rate = double(wp) / double(op)*100;
	cout << "The population of the US is " << rate << "%of the world population." << endl;




	return 0;
}