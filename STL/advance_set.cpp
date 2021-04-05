#include <bits/stdc++.h>
using namespace std;
int main()
{
    set<int> s;
    s.insert(1);
    s.insert(10);
    s.insert(11);
    s.insert(-1);
    s.insert(4);
    s.insert(27);
    s.insert(21);
    s.insert(19);
    for (auto x : s)
    {
        cout << x << " ";
    }
    cout << endl;
    auto it = s.find(-1);
    if (it != s.end())
    {
        cout << "Present " << *it;
    }
    else
    {
        cout << "Not present";
    }
    cout << endl;
    auto it2 = s.upper_bound(-1); //strictly greater then -1
    auto it1 = s.lower_bound(-1); //strictly less then  or equal to -1

    s.erase(19);
    for (auto x : s)
    {
        cout << x << " ";
    }
}