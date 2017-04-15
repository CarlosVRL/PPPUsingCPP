/* 
 * hello_word.cpp
 * 
 * Traditional C++ program with simple i/o
 */

#include "../../lib/std_lib_facilities.h"

/*
 * Note that the early exercises (Ch 1-5) can also be completed
 * by replacing the source line above with the equivalent:
 * 
 * #include<iostream>
 * #include<string>
 * #include<vector>
 * #include<algorithm>
 * #include<cmath>
 * using namespace std;
 * inline voide keep_window_open() { char ch; cin>>ch; }
 * 
 */

int main() {
    cout << "Hello, World!\n";	// Outputs string to standard output device
    keep_window_open();		// Your guess is as good as mine
    return 0;			// Standard successful return value
}
