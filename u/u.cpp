#include <iostream>
using namespace std;
int main()
{
    string num;
    cin >> num;
    int n = num.size(), count = 0;
    while (n--)
    {
        if (num[n] == '4' || num[n] == '7')
        {
            count++;
        }
    }

    if (count == 7 || count == 4)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }

    return 0;
}