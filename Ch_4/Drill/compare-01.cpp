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
    // Task 3: Augment the program so that it writes the line
    // the numbers are almost equal after (only) if they are equal
    
    // Initialize empty array
    vector<int> numbers;
    
    // Temporary integer container (from input)
    int temp;
    
    // While loop conditional variable
    string go = "";
    
    // Reads input until "|" is entered at repeat prompt
    while (go != "|")
    {
        // Read integer to vector
        cout << "Give me an int: ";
        cin >> temp;
        numbers.push_back(temp);
        
        // Read another integer to vector
        cout << "Give me another int: ";
        cin >> temp;
        numbers.push_back(temp);
        
        // Print both input integers to screen
        cout << "You gave me: " << numbers[0] << " and " << numbers[1] << endl;
        
        // Sort the vector and print sorted
        sort(numbers.begin(),numbers.end());
        
        // Case: Values are relative
        if (numbers[0] == numbers[1])
        {
            cout << "the numbers are equal" << endl;
        } else
        {
            cout << "the smaller value us: " << numbers[0] << endl;
            cout << "the larger value is: " << numbers[1] << endl;
        }
        
        // Clear vector for next loop
        numbers.clear();
        
        // Recursion
        cout << "Enter '|' to exit, or enter any other character to continue: ";
        cin >> go;
    }
    
    return 0;
}