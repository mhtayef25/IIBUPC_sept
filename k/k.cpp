#include <iostream>
using namespace std;

int main()
{
    int watermelons, friends;
    cin >> watermelons >> friends;
    float remainder = watermelons % friends;
    cout << remainder << endl;
    return 0;
}