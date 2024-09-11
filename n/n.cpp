#include <iostream>
using namespace std;

int main()
{
    int n, count = 0;
    cin >> n;
    int p[n];
    int data = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> data;
        if (data)
        {
            cout << "HARD" << endl;
            return 0;
        }
    }
    cout << "EASY" << endl;
    return 0;
}