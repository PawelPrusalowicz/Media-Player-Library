#include "drive.h"
#define _DEBUG

Drive::Drive() {

    #ifdef _DEBUG
	cout << "Default Drive constructor was called" << endl;
    #endif

    name = "DefaultDrive";
    max_read_speed = 24;
    max_write_speed = 8;
};


Drive::Drive(string name, int max_read_speed, int max_write_speed) {

    #ifdef _DEBUG
	cout << "Drive constructor (string, int, int) was called" << endl;
    #endif

    this->name = name;
    this->max_read_speed = max_read_speed;
    this->max_write_speed = max_write_speed;
};

Drive::Drive(const Drive &drive) {

    #ifdef _DEBUG
	cout << "Drive copy constructor was called" << endl;
    #endif

    name = drive.name;
    max_read_speed = drive.max_read_speed;
    max_write_speed = drive.max_write_speed;


};

Drive::~Drive() {

    #ifdef _DEBUG
	cout << "Drive destructor was called" << endl;
    #endif
};


string Drive::getName() {

    return name;
};


int Drive::getMaxReadSpeed() {

    return max_read_speed;
};


int Drive::getMaxWriteSpeed() {

    return max_write_speed;
};

void Drive::display() {
    
    cout << "Name: " << name << endl;
    cout << "Max read speed: " << max_read_speed << endl;
    cout << "Max write speed: " << max_write_speed << endl;
};


bool Drive::operator == (const Drive &drive)
{
    #ifdef _DEBUG
	cout << "\n**Equal to operator was called**" << endl;
    #endif

	if (max_read_speed == drive.max_read_speed)
    return true;

    else
    return false;
};


bool Drive::operator < (const Drive &drive)
{
    #ifdef _DEBUG
	cout << "\n**Less than operator was called**" << endl;
    #endif

	if (max_read_speed < drive.max_read_speed) {

    return true;

    }

    else
    return false;
};


bool Drive::operator > (const Drive &drive)
{
     #ifdef _DEBUG
	cout << "\n**Greater than operator was called**" << endl;
    #endif

	if (max_read_speed > drive.max_read_speed)
    return true;

    else
    return false;
};


ostream& operator << ( ostream &s, Drive &drive)    {
    
    s << drive.name << endl << drive.max_read_speed << endl << drive.max_write_speed << endl;
    return s;
};

istream& operator >> ( istream &s, Drive &drive) {
    
    s >> drive.name >> drive.max_read_speed >> drive.max_write_speed;
    return s;
    
};

