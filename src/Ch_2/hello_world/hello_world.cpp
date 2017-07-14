/* 
 * hello_world.cpp
 * 
 * Traditional C++ program with simple I/O
 */

#include <iostream>

#include "../../inc/std_lib_facilities.h"

using namespace std;

int main() {
    
    cout << "Hello,  World!\n";	// Outputs string to standard output device
    keep_window_open();		// User-input stall prompt, waits for character
    return 0;			// Standard successful return value
}
