/**
 * Calculator program
 * 
 * Adopted from Ch. 6
 */

#include "../../inc/std_lib_facilities.h"

class Token {
public:
    char kind;
    double value;
};

Token get_token(); // function to read a token from cin

vector<Token> tok; // we'll put the tokens here


int main()
{
    cout << "Please enter expression "
            "(we can handle +,-,*, and /): ";
    int lval = 0;
    int rval;
    char op;
    int res;
    cin >> lval; // read left-most operand

    if (!cin) error("no first operand");
            
            //>> op >> rval; // read something like 1 + 3
    
    if (op == '+')
        res = lval + rval;
    else if (op == '-')
        res = lval - rval;
    
    cout << "Result: " << res << '\n';
    keep_window_open();
    return 0;
}