#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <set>
#include <algorithm>
using namespace std;
int main()
{
    int query;
    cin >> query;
    set<int> s;
    while (query--)
    {

        int choice, num;
        cin >> choice >> num;
        if (choice == 1)
        {
            s.insert(num);
        }
        else if (choice == 2)
        {
            s.erase(num);
        }
        else
        {
            if (s.find(num) != s.end())
            {
                cout << "YES" << endl;
            }
            else
            {
                cout << "NO" << endl;
            }
        }
    }
}
