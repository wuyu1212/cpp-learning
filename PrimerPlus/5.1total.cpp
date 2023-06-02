#include<iostream>
using namespace std;

int main()
{
	int min, max;

	cout << "please enter two numbers:" << endl;
	cout << "please enter the min:";
	cin >> min;
	cout << "please enter the max";
	cin >> max;
	int sum = 0;
	for (int i = min; i <=max; i++)
		sum += i;
	cout << "the total number is" << sum << " " << min << "to" << max << endl;

	return 0;

}