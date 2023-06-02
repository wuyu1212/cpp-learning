#include<iostream>
using namespace std;
#include <array>

int main()
{
	array<long double, 101> total;
	int i;
	total[0] = total[1] = 1;
	for (int i = 1; i < 101; i++)
		total[i] = i * total[i - 1];

	cin >> i;
	cout << i << "i!=" << total[i] << endl;
	return 0;




}