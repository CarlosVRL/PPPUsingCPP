/**
 * From Section 5.5.1
 * 
 * An example of the caller dealing with run-time errors
 */

/**
 * Error-prone Functions
 */

#include <iostream>
#include <cstdlib>
#include <string>

using namespace std;

// forces a program to terminate
void error(string errmsg)
{
    cout << errmsg  << endl;
    exit(1);
}

int area(int a, int b)
{
    // protecting the  call of area(a,b)
    if (a <= 0 || b <= 0) error("error: non-positive argument");
    
    // area is logical to calculate
    return a * b;
}

int framed_area(int a, int b) // calculate area within a "frame"
{
    if (a <= 2 || b <= 2) error("error: non-positive argument");
    
    return area(a-2,b-2);
}

int main(void)
{    
    int x = -1;
    int y = 2;
    int z = 4;
    
    int area1 = area(x,y);
    int area2 = framed_area(1,z);
    int area3 = framed_area(y,z);
    
    double ratio = (double) (area1 / area3);
    
    return 0;
}
