/* 
 * File:   compare-01.cpp
 * Author: CarlosVRL
 *
 * Created on April 16, 2017, 1:32 PM
 */

#include <iostream>
#include <vector>

using namespace std;

int main()
{
    // Task 1: Write a program that consists of a while-loop that
    // (each time around the loop) reads in two ints and then
    // prints them. Exit the program when a terminating '|' is
    // entered
    
    // Initialize empty array
    vector<int> numbers;
    
    // Temporary integer container
    int temp;
    string go = "";
    
    // Size of array
    int numbers_size;
    
    // Reads input until any non-integer is entered (|)
    while (go != "|")
    {
        // Read integer to local vector
        cout << "Give me an int: ";
        cin >> temp;
        numbers.push_back(temp); // use push back instead
        
        cout << "Give me another int: ";
        cin >> temp;
        numbers.push_back(temp);
        
        // Print both input integers to screen
        cout << "You gave me: " << numbers[numbers.size()-2] << " and " << numbers.back() << endl;
        
        // Recursion
        cout << "Enter '|' to exit, or enter any other character to continue: ";
        cin >> go;
    }
    
    return 0;
}