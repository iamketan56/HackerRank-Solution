#include <bits/stdc++.h>
using namespace std;

void dayOfProgrammer(int year)
{
    string s = "";
    int months[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    if (year >= 1700 && year <= 1917)
    {
        if (year % 4 == 0)
        {
            months[1]++;
        }
    }
    else
    {
        if ((year % 400 == 0) || ((year % 4 == 0) && !(year % 100 == 0)))
        {
            months[1]++;
        }
    }
    int day = 0;
    int i = 0;
    while (day + months[i] <= 256)
    {

        day += months[i];

        i++;
    }

    // 31 + 28 + 31 + 30 + 31 + 30 + 31 + 31 =
    int date = 256 - day;
    if (year == 1918)
    {
        date += 13;
    }
    cout << date << ".0" << i + 1 << "." << year;
}
int main()
{
    int year;
    cin >> year;
    dayOfProgrammer(year);
}