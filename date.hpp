// file: date.h
// author: Bernt A Oedegaard.
#ifndef DATE H
#define DATE H
#include <iostream>
using namespace std;
class date {
protected:
int year ;
int month ;
int day ;
public:
date();
date(const int& d, const int& m, const int& y);
bool valid(void) const;
int day() const;
int month() const;
int year() const;
void set day (const int& day );
void set month (const int& month );
void set year (const int& year );
date operator ++(); // prefix
date operator ++(int); // postfix
date operator −−(); // prefix
date operator −−(int); // postfix
};
bool operator == (const date&, const date&); // comparison operators
bool operator != (const date&, const date&);
bool operator < (const date&, const date&);
bool operator > (const date&, const date&);
bool operator <= (const date&, const date&);
bool operator >= (const date&, const date&);
ostream& operator << ( ostream& os, const date& d); // output operator
#endif