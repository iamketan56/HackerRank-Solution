#include <iostream>
#include <vector>
using namespace std;
void countApplesAndOranges(int s, int t, int a, int b, vector<int> apples, vector<int> oranges)
{
    int countofapple = 0;
    int countofOrange = 0;
    for (int i = 0; i < apples.size(); i++)
    {
        if (a + apples[i] >= s && a + apples[i] <= t)
        {
            countofapple++;
        }
    }

    for (int i = 0; i < oranges.size(); i++)
    {
        if (b + oranges[i] >= s && b + oranges[i] <= t)
        {
            countofOrange++;
        }
    }
    cout << countofapple << endl;
    cout << countofOrange;
}
int main()
{
    vector<int> apple;
    vector<int> orange;
    int s, t;
    cin >> s >> t;
    int a, b;
    cin >> a >> b;
    int m, n;
    cin >> m >> n;
    for (int i = 0; i < m; i++)
    {
        int ele;
        cin >> ele;
        apple.push_back(ele);
    }
    for (int i = 0; i < n; i++)
    {
        int ele;
        cin >> ele;
        orange.push_back(ele);
    }
    countApplesAndOranges(s, t, a, b, apple, orange);
}