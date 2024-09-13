#include <iostream>
using namespace std;
int main()
{
    int i, k, result;
    cin >> i >> k;
    while (k > 0)
    {
        if (i % 10 == 0)
        {
            i = i / 10;
        }
        else
        {
            i = i - 1;
        }
        k--;
    }
    cout << i << endl;
    return 0;
}