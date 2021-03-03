#include <iostream>
#include <vector>
using namespace std;

vector<int> gradingStudents(vector<int> grades)
{
    vector<int> res;
    for (int i = 0; i < grades.size(); i++)
    {
        if (grades[i] >= 38 && grades[i] / 5 != 0)
        {
            int div = grades[i] / 5;
            div++;
            if (div * 5 - grades[i] < 3)
            {
                grades[i] = div * 5;
            }
            else
            {
                continue;
            }
        }
    }
    return grades;
}

int main()
{
    vector<int> grade = {73, 67, 38, 33};
    vector<int> res = gradingStudents(grade);
    for (int i = 0; i < res.size(); i++)
    {
        cout << res[i] << " ";
    }
}