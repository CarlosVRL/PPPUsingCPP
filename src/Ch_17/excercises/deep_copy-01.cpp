#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    int n = 5;
    
    int x[n] = {42, 42, 42, 42, 42}; // all elements to 42
    
    int y[n] = {}; // all elements zero
    
    cout << "The contents of x are: \n";
    
    for (int i = 0; i < n; ++i )
        cout << x[i] << endl;
    
    cout << "The contents of y are: \n";
    
    for (int i = 0; i < n; ++i )
        cout << y[i] << endl;
    
    cout << "Deep copying x to y... \n";

    //*y = *x; // error: only works for first member
    
    memcpy(y, x, n * sizeof(int)); // OK: y has its own parameters
    
    cout << "The (new) contents of y are: \n";
    
    for (int i = 0; i < n; ++i )
        cout << y[i] << endl;    
    
    // testing independent values change
    x[0] = 11;
    y[0] = 22;
    
    cout << "New x[0] = " << x[0] << endl;
    cout << "New y[0] = " << y[0] << endl;
    
    cout << "The contents of x are: \n";
    
    for (int i = 0; i < n; ++i )
        cout << x[i] << endl;
    
    cout << "The contents of y are: \n";
    
    for (int i = 0; i < n; ++i )
        cout << y[i] << endl;
    
    return 0;
}