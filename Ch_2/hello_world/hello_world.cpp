/*
 * The MIT License
 * 
 * Permission is hereby granted, free of charge, to any person obtaining a copy
 * of this software and associated documentation files (the "Software"), to deal
 * in the Software without restriction, including without limitation the rights
 * to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 * copies of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in
 * all copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 * OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
 * THE SOFTWARE.
 */

/* 
 * Learning Material from "Programming: Principles and Practices Using C++"
 * 
 * hello_word.cpp
 * 
 * An early C++ program teaching #include and simple i/o
 */

#include "../lib/std_lib_facilities.h"

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