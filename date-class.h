/*3.12 ( Date Class) Create a class called Date that includes three pieces
 of information as data members—a month (type int ), a day (type int ) and 
a year (type int ). Your class should have a constructor with three parameters
that uses the parameters to initialize the three data members. For the purpose 
of this exercise, assume that the values provided forthe year and day are correct,
but ensure that the month value is in the range 1–12; if it isn’t, set the month to 1.
Provide a set and a get function for each data member. Provide a member function 
displayDate that displays the month, day and year separated by forward slashes ( / ).
Write a test program that demonstrates class Date ’s capabilities.(c++ how to program)*/
//program display the date .

#include <string>
class date{
    public:
    date ( int month , int day , int year ):
    m(month) {
        if( month > 12 ){
            m = 1 ; //month value is in the range 1–12; if it isn’t, set the month to 1
        }
        if( month < 1 ){
            m = 1 ; //month value is in the range 1–12; if it isn’t, set the month to 1
        }
        d = day ;
        y = year ;
    }
    void setMonth (int initialMonth){
        if(initialMonth>=1){
            m = 1 ; //month value is in the range 1–12; if it isn’t, set the month to 1
        }
        if(initialMonth<=12){
            m = 1 ; //month value is in the range 1–12; if it isn’t, set the month to 1
        }
    }

    void setDay (int initialDay){
        d = initialDay ;
    }

    void setYear (int initialYear){
        y = initialYear ;
    }
 
    int getMonth() const {
        return m ;
    }
    int getDay() const {
        return d ;
    }
    int getYear() const {
        return y ;
    }

    std::string displayDate() const {
        

       return std::to_string(getMonth()) + "/" + std::to_string(getDay())
              + "/"+ std::to_string(getYear());

    }



    private:
    int m ;
    int d ;
    int y ;
};
