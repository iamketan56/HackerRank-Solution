#include <iostream>
#include <string>
#include <sstream>
#include <exception>
using namespace std;

class BadLengthException
{
private:
    int n;

public:
    BadLengthException()
    {
    }

    BadLengthException(int n)
    {
        this->n = n;
    }
    int what()
    {
        return n;
    }
};
/* Define the exception here */
