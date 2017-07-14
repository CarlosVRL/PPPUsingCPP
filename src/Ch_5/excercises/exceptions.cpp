/**
 * From Section 5.6
 * 
 * The C++ exception mechanism
 */

#include <iostream>

using namespace std;

class Bad_area{}; // An empty class demonstrating the `throw` mechanism

//------------------------------------------------------------------------------
// Error-prone function
//------------------------------------------------------------------------------
int area(int x, int y)
{
    if (x <= 0 || y <= 0) throw Bad_area{};
    return x * y;
}

//------------------------------------------------------------------------------
// Main
//------------------------------------------------------------------------------
int main()
{
try{
    int x = -1;
    int y = 2;
    
    int area1 = area(x,y);
    
    (void)area1;
}
catch (Bad_area) {
    cout << "Oops! bad arguments to area()\n";
}

    return 0;
}