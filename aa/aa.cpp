#include <iostream>
#include <cmath>

using namespace std;

int digitSum(int x)
{
    int sum = 0;
    while (x > 0)
    {
        sum += x % 10;
        x /= 10;
    }
    return sum;
}

int main()
{
    int testCase;
    cin >> testCase;

    while (testCase--)
    {
        int num;
        cin >> num;

        int max_digit_sum = 0;
        for (int i = 1; i <= sqrt(num); ++i)
        {
            if (num % i == 0)
            {
                max_digit_sum = max(max_digit_sum, digitSum(i));
                if (i != num / i)
                {
                    max_digit_sum = max(max_digit_sum, digitSum(num / i));
                }
            }
        }

        cout << max_digit_sum << endl;
    }

    return 0;
}
