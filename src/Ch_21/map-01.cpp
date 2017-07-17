/**
 * Simple map use
 * 
 * Adopted from section 21.6.1
 */

#include <iostream>
#include <map>
#include <string>

using namespace std;

int main()
{
    map<string,int> words;  // keep word-frequency pairs
    
    //for (string s; cin >> s; )
    //    ++words[s];         // note: words is subscripted by a string
    
    // iterator access uses pointers to pair objects, i.e., pair<string,int>
    for (map<string,int>::iterator p = words.begin(); p != words.end(); ++p)
        cout << p->first << ": " << p->second << '\n';
    
    return 0;
}