#ifndef DEVICE_H_INCLUDED
#define DEVICE_H_INCLUDED

#pragma once
#include <iostream>
#include <string>
#include <fstream>
#include "work_parameters.h"

using namespace std;

/*
  Drive is Bluray subclass.
  It contains information about drive device in bluray.

 */
class Drive {

private:

    //Drive name.
    string name;

    //Maximal read speed.
    int max_read_speed;

    //Maksymalna write speed.
    int max_write_speed;
    
public:

    //constructors
    
    //Default Drive constructor.
    Drive();

    //Drive constructor with parameters.
    Drive(string name, int max_read_speed, int max_write_speed);

    //Drive copy constructor.
    Drive(const Drive &d);

    //Drive destructor.
    ~Drive();

    //functions
    
    //Function returns Drive name.
    string getName();

    //Funkcja returns Maximal read speed.
    int getMaxReadSpeed();

    //Funkcja returns Maximal write speed.
    int getMaxWriteSpeed();

    //Function displays information about Drive.
    void display();

    //operators
    
    //Comparison operator returns true if maximal read speeds are the same.
    bool operator == (const Drive &drive);

    //Greater than operator returns true if first drive reads information faster.
    bool operator > (const Drive &drive);

    //Less than operator returns true if first drive reads information slower.
    bool operator < (const Drive &drive);
    
    //Stream operator is friends with the class Drive to get access to private and protected variables.
    friend ostream& operator << ( ostream &s, Drive &drive);

    //Stream operator is friends with the class Drive to get access to private and protected variables.
    friend istream& operator >> ( istream &s, Drive &drive);

};


#endif // DEVICE_H_INCLUDED
