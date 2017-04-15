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

/*
 * Drill 2
 *
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 * /

#include "../lib/std_lib_facilities.h"

int main()
{
    cout << "Please enter your first name and age\n";
    string first_name;
    int age;
    
    cin >> first_name;
    cin >> age;
    
    cout << "Hello, " << first_name << " (age "<< age << ")\n";
    
    return 0;
}
 */