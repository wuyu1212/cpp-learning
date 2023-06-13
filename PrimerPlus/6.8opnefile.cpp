#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
	char filename[30];
	ifstream inFile;
    cout << "Enter the name of data file: ";
    cin.getline(filename, 30);
    inFile.open(filename);
    if (!inFile.is_open())
    {
        cout << "Could not open the file" << filename << endl;
        exit(EXIT_FAILURE);
    }
    int count = 0;
    char str;
    inFile >> str;
    while (inFile.good())
    {
        count++;
        inFile >> str;
    }
    if (inFile.eof())
        cout << "End of file reached.\n";
    inFile.close();
    cout << "The total number of characters is " << count << endl;
}