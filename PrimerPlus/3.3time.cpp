#include<iostream>
using namespace std;
//doublel(参数)：强制转换
int main()
{
	const int Tominture = 60, Tosecond = 60;
	int  degrees, minutes, seconds;
	double Time;
	cout << "Enter a latitude in degrees, minutes, and seconds:"<<endl;
	cout << "First, enter the degrees:___\b\b\b" ;
	cin >> degrees;
	cout << endl;
	cout << "Next, enter the minutes of arc___\b\b\b" ;
	cin >> minutes;
	cout << endl;
	cout << "Finally, enter the seconds of arc___\b\b\b" ;
	cin >> seconds;
	cout << endl;
	Time = (double(seconds) / 60 + double(minutes)) / 60 + degrees;
	cout << degrees <<" degrees," << minutes<<" minutes," << seconds<<"seconds =" << Time<<" degrees";
	return 0;
}