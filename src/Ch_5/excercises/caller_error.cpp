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
    cout << errmsg << endl;
    exit(1);
}

int area(int a, int b)
{
    // area is logical to calculate
    return a * b;
}

int framed_area(int a, int b) // calculate area within a "frame"
{
    return area(a-2,b-2);
}

int main(void)
{   
    /**
     * In this paradigm, the two functions area() and framed_area()
     * are assumed to be immutable (e.g., in some library).
     *
     * In this example, we guard against invalid access in main().
     */
    int x = -1;
    int y = 2;
    int z = 4;

    // protecting the call of area()
    if (x <= 0 || y <= 0) error("error: non-positive argument");
    
    int area1 = area(x,y);
    
    // protecting the call of framed_area()
    if (1 <= 2 || z <= 2) error("error: non-positive argument");
    if (y <= 2 || z <= 2) error("error: non-positive argument");
    
    int area2 = framed_area(1,z);
    int area3 = framed_area(y,z);
    
    double ratio = (double) (area1 / area3);
    
    // suppress unused variable warnings from compiler
    (void)area1;
    (void)area2;
    (void)area3;
    (void)ratio;
    
    return 0;
}
