#include <iostream>
#include <set>
using namespace std;
int main()
{
    std::set<int> colors;
    int i = 4;
    while (i--)
    {
        int data;
        cin >> data;
        colors.insert(data);
    }
    int count = 4 - colors.size();
    cout << count << endl;

    return 0;
}