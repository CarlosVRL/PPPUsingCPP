/**
 * Determine if a word is a palindrome
 * 
 * Adopted from section 18.7.1 (using string)
 */

#include <iostream>
#include <string>

using namespace std;

/**
 * Checks if a word is a palindrome (case-sensitive)
 * 
 * @param s word to be checked
 * @return true if palindrome
 */
bool is_palindrome(const string& s)
{
    int first = 0;
    int last = s.length()-1;
    
    while (first < last) // loop  until middle or surpass
    {
        if (s[first]!=s[last]) return false;
        ++first;    // move first index forward
        --last;     // move last index backwards
    }
    
    return true;
}

int main(int argc, char* argv[])
{
    if (argc != 2)
    {
        cout << "Usage: ./palindromes-01 word\n";
        return 1;
    }
    
    string word = argv[1];
    
    cout << "Checking \"" << word << "\" for palindrome...\n";
    
    if (is_palindrome(word))
        cout << "Yes: '\"" << word << "\" is a palindrome!\n";
    else
        cout << "No: \"" << word << "\" is not a palindrome!\n";
    
    return 0;
}