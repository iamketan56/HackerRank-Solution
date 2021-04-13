#include <bits/stdc++.h>
using namespace std;
int sockMerchant(int n, vector<int> ar)
{
    map<int, int> m;
    for (int i = 0; i < n; i++)
    {
        map<int, int>::iterator it = m.find(ar[i]);
        if (it != m.end())
        {
            it->second++;
        }
        else
        {
            m.insert(make_pair(ar[i], 1));
        }
    }
    int counter = 0;
    for (auto i : m)
    {
        counter = counter + (i.second) / 2;
    }
    return counter;
}
int main()
{
    vector<int> v = {10, 20, 20, 10, 10, 30, 50, 10, 20};
    cout << sockMerchant(v.size(), v);
}