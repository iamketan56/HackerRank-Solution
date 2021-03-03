#include <bits/stdc++.h>
using namespace std;
int main()
{
    int total_num;
    cin >> total_num;
    double positive = 0, negtive = 0, zero = 0;
    int all = total_num;
    while (total_num--)
    {
        int element;
        cin >> element;
        if (element > 0)
        {
            positive++;
        }
        else if (element == 0)
        {
            zero++;
        }
        else
        {
            negtive++;
        }
    }
    cout << fixed << setprecision(6) << (positive / all) << endl;
    cout << fixed << setprecision(6) << (negtive / all) << endl;
    cout << fixed << setprecision(6) << (zero / all) << endl;
}