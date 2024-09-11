#include <iostream>
using namespace std;

int main()
{
    int i, n, count;
    cin >> n;
    i = 0, count = 0;
    while (i < n)
    {
        int person1, person2, person3;
        cin >> person1 >> person2 >> person3;
        if ((person1 && person2) || (person2 && person3) || (person3 && person1))
        {
            count++;
        }
        i++;
    }
    cout << count << endl;
    return 0;
}