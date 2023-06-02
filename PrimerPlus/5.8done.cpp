

#include <iostream>
#include <cstring>

int main()
{
    using namespace std;

    char word[100];
    cout << "Enter words (to stop, type the word done):" << endl;
    cin >> word;
    int count = 0;

    while (strcmp(word, "done") != 0)
    {
        if (bool(cin >> word) == true)
            count++;
    }


    cout << endl << "You entered a total of " << count << " words." << endl;

    system("pause");
    return 0;
}
