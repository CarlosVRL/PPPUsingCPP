/**
 * A simple vector class
 */

#include <iostream>

class vector {
private:
    int sz;
    double* elem;
    
public:
    // default constructor
    vector(int s)
    {
        this->sz = s;
        this->elem = new double[s]; 
        for (int i=0; i<s; ++i) elem[i] = 0; // default "zero" value
    }
    
    // destructor
    ~vector() { std::cout << "freeing vector...\n"; delete[] elem; }
    
    // public interface functions
    int size() const { return sz; }
    
    // ...   
};

int main() 
{
    int n = 5;
    
    vector v(n);
    
    std::cout << "Vector has: " << v.size() << " elements!\n";
    
    return 0;
}