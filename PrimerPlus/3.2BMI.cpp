#include<iostream>
using namespace std;
//转化最终是以左边为准，double = int ：int变double
int main()
{
	const double ITometre = 0.0254, Tokilo = 2.2;
	const int a = 12;

	int feet;
	int inch;
	int weighet;

	cout << "pls enter your feet_____\b\b\b\b\b";
	cin >> feet;
	cout << "pls enter your inch_____\b\b\b\b\b";
	cin >> inch;
	cout << "pls enter your weight_____\b\b\b\b\b";
	cin >> weighet;

	double Metre, Kilo,BMI;
	Metre = (feet * 12 + inch) * ITometre;
	Kilo = weighet / Tokilo;
	BMI = Kilo / (Metre * Metre);

	cout << "you are " << Metre << " metres and " << Kilo << " kilos" << endl;
	cout << "your BMI are " << BMI;

	return 0;





	return 0;
}