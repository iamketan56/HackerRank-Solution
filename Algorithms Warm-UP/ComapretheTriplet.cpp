#include <iostream>
#include <vector>
using namespace std;
vector<int> comapreTriplet(vector<int> a, vector<int> b)
{
    vector<int> res = {0, 0};
    for (int i = 0; i < a.size(); i++)
    {
        if (a[i] > b[i])
        {
            res[0]++;
        }
        else if (a[i] == b[i])
        {
            continue;
        }
        else
        {
            res[1]++;
        }
    }
    return res;
}
int main()
{
    vector<int> a = {5, 6, 7};
    vector<int> b = {3, 6, 10};
    vector<int> res = comapreTriplet(a, b);
    for (int i = 0; i < res.size(); i++)
    {
        cout << res[i] << " ";
    }
}