#include <iostream>
using namespace std;

int main()
{
    int r;
    cin >> r;

    while (r--)
    {
        int count = 0, i = 5;
        while (i--)
        {
            int r;
            cin >> r;
            if (r == 1)
            {
                count++;
            }
        }
        if (count >= 4)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}