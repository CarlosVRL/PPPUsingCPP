/**
 * Reading a single value
 * 
 * Adopted from Section 10.7
 */

#include <iostream>

using namespace std;

int main(void)
{
    cout << "Please enter an integer in the range 1 to 10 (inclusive):\n";
    int n = 0;
    while(cin>>n && !(1<=n && n<=10))
    {
        cout << "Sorry "
             << n << " is not in the [1:10] range. Please try again:\n";
    }
    
    // use n here
    (void)n;
    
    return 0;
}