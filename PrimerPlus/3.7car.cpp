#include<iostream>
using namespace std;

int main()
{
    using namespace std;
    float kilometer;
    float litro;
    cout << "Pls Enter your kilometers:";
    cin >> kilometer;
    cout << "Pls Enetr your litros:";
    cin >> litro;

    float eux;
    eux = litro / (kilometer / 100);
    cout << "Every 100 kilometers cost " << eux << " litros gas in Europe." << endl;
    const float Mile_per_100kilometers = 62.14;
    float mile;
    mile = (kilometer / 100) * Mile_per_100kilometers;
    const float Calon_per_litro = 3.875;
    float calon;
    calon = litro / Calon_per_litro;
    float usx;
    usx = mile / calon;
    cout << "That means you drive " << usx << " miles  using 1 calon gas in the US." << endl;
    cout << eux << "/100km = " << usx << "mpg" << endl;
	return 0;
}