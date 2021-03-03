#include <iostream>
#include <cstring>
using namespace std;
string kangaroo(int x1, int v1, int x2, int v2)
{
    string res;
    if (v1 > v2)
    {
        while (x1 <= x2)
        {
            if (x1 == x2)
            {
                res = "YES";
                return res;
            }
            x1 = x1 + v1;
            x2 = x2 + v2;
        }
    }
    if (v1 < v2)
    {
        while (x1 <= x2)
        {
            if (x1 == x2)
            {
                res = "YES";
                return res;
            }
            x1 = x1 + v1;
            x2 = x2 + v2;
        }
    }
    res = "NO";
    return res;
}
int main()
{
    int x1, x2, v1, v2;
    cin >> x1 >> v1 >> x2 >> v2;
    string res = kangaroo(x1, v1, x2, v2);
    cout << res;
}