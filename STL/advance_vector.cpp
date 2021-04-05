#include <bits/stdc++.h>
using namespace std;
bool great(int x, int y)
{
    return x > y;
}
int main()
{
    vector<int> v = {1, 23, 4, 5, 6, 8};
    sort(v.begin(), v.end()); // n(logn)
    bool ispresent = binary_search(v.begin(), v.end(), 3);
    // cout << ispresent << " " << endl;

    v.push_back(25);
    v.push_back(25);
    v.push_back(25);
    v.push_back(25);
    v.push_back(25);
    v.push_back(25);
    v.push_back(25);
    v.push_back(30);
    //1 4 5 6 8 23 25 25 25 25 25 25 30
    sort(v.begin(), v.end());
    vector<int>::iterator it = lower_bound(v.begin(), v.end(), 25); // log(n)
    vector<int>::iterator it2 = upper_bound(v.begin(), v.end(), 25);
    // cout << *it << " " << *it2 << endl;
    // cout << it2 - it << " ";

    sort(v.begin(), v.end(), great);

    for (auto x : v)
    {
        cout << x << " ";
    }
}