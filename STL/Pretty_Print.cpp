#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int T;
    cin >> T;
    cout << setiosflags(ios::uppercase);
    cout << setw(0xf) << internal;
    while (T--)
    {
        double A;
        cin >> A;
        double B;
        cin >> B;
        double C;
        cin >> C;

        /* Enter your code here */
        long long data = long(A);
        cout << hex << showbase << left << nouppercase << data << endl;
        cout << fixed << setw(15) << setprecision(2) << showpos << right << setfill('_');
        cout << B << endl;
        cout << setprecision(9) << noshowpos << right << uppercase << scientific;
        cout << C << endl;
    }
}