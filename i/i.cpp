#include <iostream>
using namespace std;

int main()
{
    int num_1;
    cin >> num_1;
    if (num_1 % 2 == 0 && num_1 != 2)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
    return 0;
}