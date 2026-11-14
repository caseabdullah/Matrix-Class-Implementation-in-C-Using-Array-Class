#include <iostream>
using namespace std;
#include "Matrix.h"
int main()
{
    Matrix a{3,3};
    for (int i = 1; i <= 3; i++)
    {
        for (int j = 1; j <= 3; j++)
        {
            a.at(i, j)=1;
        }
    }
    a.at(2, 2) = 6;
    a.display();
    cout << a.isIdentity();
    a.Subtract(a).display();
    return 0;
}