#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int caseNum;
    cin >> caseNum;

    while (caseNum--)
    {
        double long_hand, short_hand;
        cin >> long_hand >> short_hand;
        double middle_hand = .5 * long_hand * short_hand;
        cout << fixed << setprecision(9) << middle_hand << endl;
    }

    return 0;
}
