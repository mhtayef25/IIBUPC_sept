#include <iostream>
using namespace std;

int main()
{
    int team1, team2;
    cin >> team1 >> team2;
    if (team1 > team2)
    {
        cout << "Champion" << endl;
        cout << "Runner up" << endl;
    }
    else
    {
        cout << "Runner up" << endl;
        cout << "Champion" << endl;
    }

    return 0;
}