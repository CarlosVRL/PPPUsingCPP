/**
 * \file Chrono.cpp
 */
#include <iostream>

#include "Chrono.h"

namespace Chrono {
// member functions definitions:
    
Date::Date(int yy, Month mm, int dd)
    :y{yy}, m{mm}, d{dd}
{
        // validate
}
}

// Included a main() to test out the class
int main()
{
    std::cout << "Hello, Worlds!\n";
    
    return 0;
}