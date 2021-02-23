#include <bits/stdc++.h>

using namespace std;

vector<int> dynamicArray(int n, vector<vector<int>> queries)
{
    int lastAnswer = 0;
    int i = 0;
    vector<vector<int>> arr(n);
    vector<int> result;
    while (i < queries.size())
    {
        int idx = (queries[i][1] ^ lastAnswer) % n;
        if (queries[i][0] == 1)
        {
            arr[idx].push_back(queries[i][2]);
        }
        else
        {
            int val = (queries[i][2] % arr[idx].size());
            lastAnswer = arr[idx][val];
            result.push_back(lastAnswer);
        }
        i++;
    }
    return result;
}