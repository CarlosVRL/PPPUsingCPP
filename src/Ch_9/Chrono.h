#ifndef CHRONO_H
#define CHRONO_H

#include <iostream>

namespace Chrono {
    
enum Month {
    jan=1, feb, mar //...
};
    
class Date {
public:
    class Invalid {}; // to throw as exception
    
    Date(int y, Month m, int d); // check for valid date & initialize
    Date();                      // default constructor
    // the default copy operations are fine
    
    // non-modifying operations:
    int day() const { return d; }
    Month month() const { return m; }
    int year() const { return y; }
    
    // modifying operations
    void add_day(int n);
    void add_month(int n);
    void add_year(int n);
    
private:
    int y;
    Month m;
    int d;
};
    
bool is_date(int y, Month m, int d); // true for valid date
bool leapyear(int y);

bool operator==(const Date& a, const Date& b);
bool operator!=(const Date& a, const Date& b);

//std::ofstream& operator<<(std::ostream& os, const Date& d);
//std::istream&  operator>>(std::istream& is, Date& dd);

} /* end namespace Chrono */

#endif /* CHRONO_H */

