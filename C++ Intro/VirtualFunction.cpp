#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <cstring>
using namespace std;
class Person
{
public:
    virtual void getdata() = 0;
    virtual void putdata() = 0;

protected:
    string name;
    int age, sum = 0;
};
class Professor : public Person
{
    int publications;
    static int cur;

public:
    void getdata()
    {
        cin >> this->name;
        cin >> this->age;
        cin >> this->publications;
    }
    void putdata()
    {
        cout << name << " " << age << " " << publications << " " << cur << endl;
        cur++;
    }
};
int Professor ::cur = 1;
class Student : public Person
{
public:
    static int cur_id;
    int *a = new int[6];
    int sum = 0;
    void getdata()
    {
        cin >> this->name;
        cin >> this->age;
        for (int i = 0; i < 6; i++)
        {
            cin >> a[i];
            sum += a[i];
        }
    }
    void putdata()
    {
        cout << this->name << " " << this->age << " " << this->sum << " " << this->cur_id << endl;
        cur_id++;
    }
};

int Student ::cur_id = 1;

int main()
{

    int n, val;
    cin >> n; //The number of objects that is going to be created.
    Person *per[n];

    for (int i = 0; i < n; i++)
    {

        cin >> val;
        if (val == 1)
        {
            // If val is 1 current object is of type Professor
            per[i] = new Professor;
        }
        else
        {
            per[i] = new Student; // Else the current object is of type Student
        }
        per[i]->getdata(); // Get the data from the user.
    }

    for (int i = 0; i < n; i++)
        per[i]->putdata(); // Print the required output for each object.

    return 0;
}
