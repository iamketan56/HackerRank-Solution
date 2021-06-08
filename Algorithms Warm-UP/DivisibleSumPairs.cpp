#include <bits/stdc++.h>
using namespace std;

int divisibleSumPairs(int n, int k, vector<int> ar)
{
    int countpair = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if ((ar[i] + ar[j]) % k == 0)
            {
                countpair++;
            }
        }
    }
    return countpair;
}
int main()
{
    short n, k;
    cin >> n >> k;

    vector<int> v;
    for (int i = 0; i < n; i++)
    {
        int data;
        cin >> data;
        v.push_back(data);
    }

    cout << divisibleSumPairs(n, k, v);
}