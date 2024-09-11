#include <iostream>
using namespace std;

int main()
{
    int lemak, bob, count = 0;
    cin >> lemak >> bob;
    while (lemak <= bob)
    {
        lemak *= 3;
        bob *= 2;
        count++;
    }
    cout << count << endl;
    return 0;
}