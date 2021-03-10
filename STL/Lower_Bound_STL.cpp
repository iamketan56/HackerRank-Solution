#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    vector<int> v;
    std::vector<int>::iterator it;
    std::vector<int>::iterator it2;

    int n;
    int q, value;
    int data;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> data;
        v.push_back(data);
    }
    cin >> q;
    while (q--)
    {
        cin >> value;
        it = std::find(v.begin(), v.end(), value);
        if (it != v.end())
        {
            cout << "Yes " << (it - v.begin()) + 1 << endl;
        }
        else
        {
            int flag = 0;
            while (flag != 1)
            {
                it2 = std::find(v.begin(), v.end(), value + 1);
                if (it2 != v.end())
                {
                    cout << "No " << (it2 - v.begin()) + 1 << endl;
                    flag = 1;
                }
                else
                {
                    value++;
                }
            }
        }
    }
}
