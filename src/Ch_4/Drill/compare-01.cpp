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
    // Initialize empty array
    vector<double> numbers;
    
    // Temporary integer container (from input)
    double temp;
    
    // While loop conditional variable
    string go = "";
    
    // Reads input until "|" is entered at repeat prompt
    while (go != "|")
    {
        // Read integer to vector
        cout << "Give me a double: ";
        cin >> temp;
        numbers.push_back(temp);
        
        // Read another integer to vector
        cout << "Give me another double: ";
        cin >> temp;
        numbers.push_back(temp);
        
        // Print both input integers to screen
        cout << "You gave me: " << numbers[0] << " and " << numbers[1] << endl;
        
        // Sort the vector and print sorted
        sort(numbers.begin(),numbers.end());
        
        
        if (numbers[0] == numbers[1]) // values are equal
        {
            cout << "the numbers are equal" << endl;
        }
        else // values are relative
        {
            cout << "the smaller value us: " << numbers[0] << endl;
            cout << "the larger value is: " << numbers[1] << endl;
            
            if ((numbers[1]-numbers[0])<(1.0/100))
            {
                cout << "the numbers are almost equal" << endl;
            }
        }
        
        // Clear vector for next loop
        numbers.clear();
        
        // Recursion
        cout << "Enter '|' to exit, or enter any other character to continue: ";
        cin >> go;
    }
    
    return 0;
}