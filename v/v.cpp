#include <iostream>
using namespace std;
int main()
{
    int x, y, h, m;
    cin >> x >> y >> h >> m;
    if (x <= h && y <= m)
    {
        cout << "He is the thief!" << endl;
    }
    else
    {
        cout << "He is innocent!" << endl;
    }

    return 0;
}