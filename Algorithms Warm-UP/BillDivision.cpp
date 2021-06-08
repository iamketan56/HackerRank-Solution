#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, k;
    cin >> n >> k;

    vector<int> v;
    for (int i = 0; i < n; i++)
    {
        int data;
        cin >> data;
        v.push_back(data);
    }
    int sharegiven;
    cin >> sharegiven;

    int sum = accumulate(v.begin(), v.end(), 0);
    sum = sum - v[k];

    if (sum / 2 == sharegiven)
    {
        cout << "Bon Appetit";
    }
    else
    {
        cout << sharegiven - (sum / 2);
    }
}