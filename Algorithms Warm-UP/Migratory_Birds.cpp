#include <bits/stdc++.h>
using namespace std;

int migratoryBirds(vector<int> arr)
{
    int hash[6] = {0};
    int n = arr.size();
    for (int i = 0; i < arr.size(); i++)
    {
        hash[arr[i]]++;
    }
    return (max_element(hash, hash + 6) - hash);
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
    cout << migratoryBirds(v);
}