/* 
 * File:   compare-01.cpp
 * Author: CarlosVRL
 *
 * Created on April 16, 2017, 1:32 PM
 */

#include <iostream>     // std::cout, cin
#include <algorithm>    // std::sort
#include <vector>       // std::vector

using namespace std;

int main()
{
    // Task 2: Change the program to write out the smaller value is:
    // followed by the smaller of the numbers and the larger value is:
    // followed by the larger value
    
    // Initialize empty array
    vector<int> numbers;
    
    // Temporary integer container (from input)
    int temp;
    
    // While loop conditional variable
    string go = "";
    
    // Reads input until any non-integer is entered (|)
    while (go != "|")
    {
        // Read integer to vector
        cout << "Give me an int: ";
        cin >> temp;
        numbers.push_back(temp); // use push back instead
        
        // Read another integer to vector
        cout << "Give me another int: ";
        cin >> temp;
        numbers.push_back(temp);
        
        // Print both input integers to screen
        cout << "You gave me: " << numbers[numbers.size()-2] << " and " << numbers.back() << endl;
        
        // Sort the vector and print sorted
        sort(numbers.begin(),numbers.end());
        
        // Case: Values are relative
        cout << "the smaller value us: " << numbers[0] << endl;
        cout << "the larger value is: " << numbers[1] << endl;
        
        // Clear vector for next loop
        numbers.clear();
        
        // Recursion
        cout << "Enter '|' to exit, or enter any other character to continue: ";
        cin >> go;
    }
    
    return 0;
}