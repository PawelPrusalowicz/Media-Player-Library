#include "bluray.h"
#include <cmath>
#define _DEBUG

int Bluray::number_of_objects = 0;


Bluray::Bluray() {

    #ifdef _DEBUG
	cout << "Default Bluray constructor was called" << endl;
    #endif
    
    name = "DefaultBluray";
    model = "DefaultBlurayModel";
    price = 99.99;
    production_year = 2000;
    number_of_discs = 3;
    createDiscs(3);

    number_of_objects++;                            // number of blurays (static int)
    
};


Bluray::Bluray(string name, string type, string disc_kind, string model, float price, int production_year, int new_number_of_discs)
{

    #ifdef _DEBUG
	cout << "Bluray constructor (string, float, int) was called" << endl;
    #endif

    this->name = name;

    this->type = type;
    this->disc_kind = disc_kind;
    this->model = model;
    this->price = price;
    this->production_year = production_year;
    this->number_of_discs = new_number_of_discs;

    createDiscs(number_of_discs);

    number_of_objects++;


};


Bluray::Bluray(const Bluray &bluray) : PlayerFromDisc() {

    #ifdef _DEBUG
	cout << "Bluray copy constructor was called" << endl;
    #endif

    model = bluray.model;
    price = bluray.price;
    production_year = bluray.production_year;
    number_of_discs = bluray.number_of_discs;
    drive = bluray.drive;
    work_param = bluray.work_param;
    discs = bluray.discs;

    number_of_objects++;

};


Bluray::~Bluray() {
    
    #ifdef _DEBUG
    cout << "Bluray destructor was called" << endl;
    #endif

    number_of_objects--;
};


void Bluray::createDiscs(int number) {
    
    Disc disc;
    
    for(int i = 0; i < number ; i++)
    {
        discs.push_back(disc);
    }
    
    //number_of_discs += number;

};

void Bluray::destroyDiscs() {

    discs.clear();
};


float Bluray::getPrice() {

    return price;
};


int Bluray::countObjects() {

    return number_of_objects;
};

void Bluray::display() {                // prints all information about Bluray
    
    PlayerFromDisc::display();
    
    cout << "---Variables from class Bluray---" << endl;
    cout << "Model: " << model << endl;
    cout << "Price: " << price << endl;
    cout << "Production year: " << production_year << endl;
    cout << "--Work parameters--" << endl;
    work_param.display();
    cout << "--Drive--" << endl;
    drive.display();
    cout << "--Discs--" << endl << "Number of discs: " <<  number_of_discs << endl;
    for (int i=0; i<number_of_discs; i++ ) {
        cout << "Disc " << i+1 << endl;
        discs[i].display();
    }
    
};


string Bluray::returnInformation() {

    //Rounding the float price to set precision of .00
    stringstream stream;
    stream << fixed << setprecision(2) << price;
    string price_rounded = stream.str();

    string information = "Bluray - " + PlayerFromDisc::returnInformation() + "\nModel:\t\t" + model + "\nPrice:\t\t"
                + price_rounded + "\nProduction year:\t" + to_string(production_year)
                + "\nNumber of discs:\t" + to_string(number_of_discs);
    return information;
};


void Bluray::changeModelName(string new_name) {

    model = new_name;
};

void Bluray::changePrice(float new_price){

    price = new_price;
};


void Bluray::changeProductionYear(int new_production_year){

    production_year = new_production_year;
}

void Bluray::save(fstream& file, bool print_flag_in_file) {
    
    #ifdef _DEBUG
        cout << "Bluray object was saved" << endl;
    #endif

    if (print_flag_in_file == true)
        file << "xxxBlurayxxx" << endl;
    
    PlayerFromDisc::save(file, false);
    
    file << *this;
    file << work_param;
    file << drive;
    
    for (int i=0; i<number_of_discs; i++ )
        file << discs[i];
    
}
void Bluray::load(fstream& file) {
    
    if (file.good() == false) {
        
       cout << "Error in the file!" << endl;
    }
    else {
        
        #ifdef _DEBUG
            cout << "Bluray object was loaded" << endl;
        #endif
        
        PlayerFromDisc::load(file);
        file >> *this;
        file >> work_param;
        file >> drive;
        
        discs.clear();

        createDiscs(number_of_discs);

        for (int i=0; i<number_of_discs; i++ )
                file >> discs[i];
        
    }

}


Bluray &Bluray::operator = (const Bluray &bluray) {

    #ifdef _DEBUG
	cout << "\n**Assign operator was called**" << endl;
    #endif

    if ( &bluray != this) {                     // so that it doesn't change it's own values

        model = bluray.model;
        price = bluray.price;
        production_year = bluray.production_year;
        number_of_discs = bluray.number_of_discs;

        discs = bluray.discs;

        work_param = bluray.work_param;
        drive = bluray.drive;
    }

    return *this;
}



Bluray & Bluray::operator += (const Bluray &bluray) {

    #ifdef _DEBUG
	cout << "\n**Add Assign operator was called**" << endl;
    #endif

    if ( bluray.number_of_discs > 0 )
        discs.insert( discs.end(), bluray.discs.begin(), bluray.discs.end() );          // adding elements of vector

    model = model + bluray.model;
    price = price + bluray.price;
    production_year = 2018;
    number_of_discs = number_of_discs + bluray.number_of_discs;

    return *this;
}


Bluray Bluray::operator + (const Bluray bluray) {

    #ifdef _DEBUG
	cout << "\n**Add operator was called**" << endl;
    #endif

    Bluray sum;
    sum.model = model + bluray.model;
    sum.price = bluray.price + price;
    sum.discs = discs;
    
    if ( bluray.number_of_discs > 0 )
        sum.discs.insert( sum.discs.end(), bluray.discs.begin(), bluray.discs.end() );          // adding elements of vector
    
    sum.number_of_discs = number_of_discs + bluray.number_of_discs;
    
    return sum;
}


void Bluray::operator [] (int index) {

    #ifdef _DEBUG
	cout << "\n**Index operator was called**" << endl;
    #endif


    if (index<0)
        cout << "Wrong number" << endl;

    else if (index >= number_of_discs)
        cout << "There are not that many discs in this bluray" << endl;

    else
        cout << discs[index].getDiscTitle() << endl;                     // returns the disc[index] title

}


Bluray::operator int()
{
    #ifdef _DEBUG
	cout << "\n**Conversion operator was called**" << endl;
    #endif

    float changed_price = round(price);                   // rounding ( using cmath)
    return ((int)changed_price);
}



ostream &operator << (ostream &out, Bluray &bluray)
{
    #ifdef _DEBUG
	cout << "\n**Stream operator was called**" << endl;
    #endif

    out << bluray.model << endl << bluray.price << endl << bluray.production_year << endl << bluray.number_of_discs << endl;
    return out;
}
    
istream& operator >> ( istream &s, Bluray &bluray)
{

    s >> bluray.model >> bluray.price >> bluray.production_year >> bluray.number_of_discs;
    return s;
        
}
    
