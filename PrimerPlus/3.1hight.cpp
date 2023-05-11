#include<iostream>
using namespace std;

int main()
{
	int height;
	const int a = 12;
	cout << "pls enter your height______\b\b\b\b\b";
	cin >> height; 
	int feet, in;
	feet = height / a;
	in = height % a;
	cout << "you are " << feet << " feets and " << in << " inches" << endl;
	return 0;

}