#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;
int main()
{
    unordered_map<string, int> m;
    int query;
    cin >> query;

    while (query--)
    {
        int choice, marks;
        cin >> choice;
        string name;
        cin >> name;
        if (choice == 1)
        {
            cin >> marks;

            auto itr = m.find(name);
            if (itr != m.end())
            {
                itr->second += marks;
                m.insert(make_pair(name, itr->second));
            }
            else
            {
                m.insert(make_pair(name, marks));
            }
        }
        else if (choice == 2)
        {
            m.erase(name);
        }
        else
        {
            cout << m[name] << endl;
        }
    }
}
