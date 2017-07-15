#include <iostream>
#include <vector>

using namespace std;

int main()
{
    char ch = 'a';
    int i = 0;
    int *ptr = NULL;
    
    cout << "the size of char is " << sizeof(char) 
                            << ':' << sizeof(ch)   << endl;
    cout << "the size of int is "  << sizeof(int) 
                            << ':' << sizeof(i)    << endl;
    cout << "the size of int* is " << sizeof(int*) 
                            << ':' << sizeof(int*) << endl;
    
    vector<int> v1000(1000); // holds 1000 elements of type int
    vector<int> v1(1);    // holds 1 element of type int
    
    cout << "the size of vector<int>(1000) is " << sizeof(v1000) << endl; // 24
    cout << "the size of vector<int>(1) is " << sizeof(v1) << endl; // also 24

    return 0;
}