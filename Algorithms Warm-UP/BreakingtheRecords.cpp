#include <bits/stdc++.h>
using namespace std;
vector<int> breakingRecords(vector<int> scores)
{
    vector<int> v = {0, 0};
    int min = scores[0];
    int max = scores[0];

    for (int i = 1; i < scores.size(); i++)
    {
        if (scores[i] > max)
        {
            v[0]++;
            max = scores[i];
        }
        if (scores[i] < min)
        {
            v[1]++;
            min = scores[i];
        }
    }
    return v;
}
int main()
{
    int n;
    cin >> n;

    vector<int> v;
    for (int i = 0; i < n; i++)
    {
        int data;
        cin >> data;
        v.push_back(data);
    }

    vector<int> v2 = breakingRecords(v);
    for (int i = 0; i < v2.size(); i++)
    {
        cout << v2[i] << " ";
    }
}