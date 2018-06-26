#ifndef BLURAY_H_INCLUDED
#define BLURAY_H_INCLUDED

#include <iostream>
#include <string>
#include <vector>
#include <fstream>

#include "drive.h"
#include "disc.h"
#include "work_parameters.h"

#include "from_disc.h"

#include <iomanip> // setprecision
#include <sstream> // stringstream

using namespace std;


/*
  Bluray is a derived class, inheriting from Player From Disc.
  It adds variables and implements its own versions of virtual methods.
  It contains subobjects : Work Parameters, Drive and a vector of Discs.
  Number of created objects is being counted.

 */

class Bluray : public PlayerFromDisc {

private:

    //Name of the model of bluray player.
    string model;

    //Price of bluray
    float price;

    //Production year of bluray.
    int production_year;

    //Number of discs in bluray.
    int number_of_discs;

    //Subclass Work Parameters with information about current settings.
    WorkParam work_param;

    //Subclass Drive with information about the device.
    Drive drive;

    //Vector of subobjects of class Disc.
    vector <Disc> discs;
    
    //Static number of created Bluray objects.
    static int number_of_objects;

public:
    
    
    //constructors
    
    //Default Bluray constructor. Subobjects are created. Number of created objects is increased by one.
    Bluray();

    //Constructor with parameters of class Bluray. Subobjects are created. Number of created objects is increased by one.
    Bluray(string name, string type, string disc_kind, string model, float price, int production_year, int new_number_of_discs);

    //Copy Constructor of class Bluray. Number of created objects is increased by one.
    Bluray(const Bluray &b);

    //Destructor of class Bluray. The number of created objects is decreased.
    ~Bluray();


    //functions
    
    //Function returns the price of bluray.
    float getPrice();

    //Function changes the name of bluray.
    void changeModelName(string new_name);

    //Function changes the price of bluray.
    void changePrice(float new_price);

    //Function changes production year of bluray.
    void changeProductionYear(int new_production_year);

    //Function adds the given number of default discs to vector of discs.
    void createDiscs(int number);

    //Function deletes all the elements from disc vector
    void destroyDiscs();
    
    //Virtual function returning information about Bluray.
    string returnInformation();

    //Virtual function for displaying information about the object.
    void display();

    //Cascaded function for writing information into file. Print flag prints information necessary for reading file - that object being saved is of current class.
    void save(fstream& file, bool print_flag_in_file);

    //Cascaded function for reading the object from file.
    void load(fstream& file);

    //static function
    
    //Static function that counts the existing Bluray objects.
    static int countObjects();


    //operators
    
    //Assign operator for blurays.
    Bluray &operator = (const Bluray &bluray);

    //Add assign operator for two blurays. Adds second bluray to the first.
    Bluray &operator += (const Bluray &bluray);

    //Add Operator for blurays. Returns sum of blurays.
    Bluray operator + (const Bluray bluray);

    //Operator [] returns title of the disc[index].
    void operator [] (int index);

    //Conversion operator returns rounded price (float to int conversion).
    operator int();

    //Stream operator is friends with the class Bluray to get access to private and protected variables.
    friend ostream &operator << (ostream &out, Bluray &bluray);

    //Stream operator is friends with the class Bluray to get access to private and protected variables.
    friend istream& operator >> (istream &s, Bluray &bluray);
};



#endif // BLURAY_H_INCLUDED
