#include "date.hpp"
///////////////////////////// construction //////////
date::date(const int& d, const int& m, const int& y) {
day = d;
month = m;
year = y; // this assumes year is given fully, not Y2K corrections
};
///////////////////////////// inline definitions //////////
date::date(){ year = 0; month = 0; day = 0;};
int date::day() const { return day ; };
int date::month() const { return month ; };
int date::year() const { return year ; };
void date::set day (const int& day) { date::day = day; };
void date::set month(const int& month) { date::month = month; };
void date::set year (const int& year) { date::year = year; };
bool date::valid() const {
// This function will check the given date is valid or not.
// If the date is not valid then it will return the value false.
// Need some more checks on the year, though
if (year <0) return false;
if (month >12 | | month <1) return false;
if (day >31 | | day <1) return false;
if ((day ==31 &&
( month ==2 | | month ==4 | | month ==6 | | month ==9 | | month ==11) ) )
return false;
if ( day ==30 && month ==2) return false;
if ( year <2000){
if ((day ==29 && month ==2) && !((year −1900)%4==0)) return false;
};
if ( year >2000){
if ((day ==29 && month ==2) && !((year −2000)%4==0)) return false;
};
return true;
};
