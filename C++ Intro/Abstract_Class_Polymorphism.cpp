#include <iostream>
#include <map>
#include <cstring>
using namespace std;
int main()
{
    map<int, int> m;
    int n, value, capacity;
    int key = 1;
    cout << "Enter the number of operation AND capacity of Cache " << endl;
    cin >> n >> capacity;
    int c = 0;
    while (n-- && c <= capacity)
    {
        string operation;
        cin >> operation;
        if (operation == "set")
        {
            cin >> key >> value;
            m[key] = value;
            c++;
        }
        if (operation == "get")
        {
            cin >> key;
            if (m.count(key) > 0)
            {
                cout << m[key] << endl;
            }
            else
            {
                cout << "-1" << endl;
            }
        }
    }
}
