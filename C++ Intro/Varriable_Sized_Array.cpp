#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int num_of_array, num_of_query;
    cin >> num_of_array >> num_of_query;
    int **arr = new int *[num_of_array];
    for (int i = 0; i < num_of_array; i++)
    {
        int ele;
        cin >> ele;
        int *within = new int[ele];
        for (int i = 0; i < ele; i++)
        {
            int data;
            cin >> data;
            within[i] = data;
        }
        *(arr + i) = within;
    }
    for (int i = 0; i < num_of_query; i++)
    {
        int index, selected;
        cin >> index >> selected;
        cout << arr[index][selected] << endl;
    }
}