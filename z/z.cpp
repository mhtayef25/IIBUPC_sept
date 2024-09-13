#include <iostream>
using namespace std;

int main()
{
    int testCase;
    cin >> testCase;
    while (testCase--)
    {
        int chocolate, base, reminder;
        cin >> chocolate;
        base = chocolate / 3;
        reminder = chocolate % 3;
        if (reminder == 0)
        {
            cout << base << " " << base << " " << base << endl;
        }
        else if (reminder == 1)
        {
            cout << base << " " << base << " " << base + 1 << endl;
        }
        else
        {
            cout << base << " " << base + 1 << " " << base + 1 << endl;
        }
    }

    return 0;
}
