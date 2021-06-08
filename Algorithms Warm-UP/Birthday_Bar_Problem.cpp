#include <bits/stdc++.h>
using namespace std;

int birthday(vector<int> s, int d, int m)
{
    int countset = 0;
    for (int i = 0; i < s.size(); i++)
    {
        int j = i;
        int sum = 0;
        while ((j != i + m) && j < s.size())
        {
            sum += s[j];
            j++;
        }

        if (sum == d)
        {
            countset++;
        }
    }
    return countset;
}
int main()
{
    short n;
    cin >> n;

    vector<int> v;
    for (int i = 0; i < n; i++)
    {
        int data;
        cin >> data;
        v.push_back(data);
    }
    short m;
    short d;
    cin >> d >> m;
    cout << birthday(v, d, m);
}
