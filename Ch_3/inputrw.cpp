// Training Library
#include "../lib/std_lib_facilities.h"

int main() 
{    
    // Prompt user to enter name
    cout << "Please enter your first name: \n";
 
    // Setup variable, then read input into it
    string first_name;
    cin >> first_name;
    
    /*
     * cin refers to the standard input stream,
     * defined in the standard library
     * 
     * The >> operator ("get from") specifies where cin 'goes'
     */
    
    // Do something with the input
    cout << "Hello, " << first_name << "!\n;";
    
    return 0;
}