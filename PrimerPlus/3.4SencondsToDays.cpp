#include<iostream>
using namespace std;

int main()
{
	long Second;
	int day, hours, minutes, seconds;
	const int Day = 24, Hour = 60, Minute = 60;
	cout << "Enter the number of seconds:_____\b\b\b\b\b";
	cin >> Second;
	seconds = Second % Minute;
	minutes = Second / Minute % Hour;
	hours = Second /Minute / Hour% Day;
	day = Second / Minute / Hour / Day;
	cout << Second << " seconds = " << day << " days, " << hours << " hours, " << minutes << " minutes, " << seconds << " seconds" << endl;
	return 0;
}