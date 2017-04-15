/* 
 * File:   form-01.cpp
 * Author: CarlosVRL
 *
 * Created on April 14, 2017, 11:01 PM
 */

#include <iostream>

using namespace std;

int main()
{
    // Response messages
    string msg_prompt_name = 
            "Enter the name of the person you want to write to: ";
    string msg_greet_start =
            "Dear ";
    string msg_greet_end =
            ",\n\n";
    
    // Prompt user to enter first name
    cout << msg_prompt_name;
    string first_name;
    cin >> first_name;
    
    // Greeting message
    cout << msg_greet_start << first_name << msg_greet_end;
    
    return 0;
}

