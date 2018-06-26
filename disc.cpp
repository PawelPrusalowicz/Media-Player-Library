#include "disc.h"
#define _DEBUG

Disc::Disc() {

    #ifdef _DEBUG
	cout << "Default Disc constructor was called" << endl;
    #endif

    title = "DefaultDisc";
    kind = "DVD";
    used_space = 2.7;
    resolution = "FULLHD";
};


Disc::Disc(string title, float used_space, string kind, string resolution) { 

    #ifdef _DEBUG
	cout << "Disc constructor (string, float, enum Disc_kind, enum Resolution) was called" << endl;
    #endif

    this->title = title;
    this->used_space = used_space;
    this->kind = kind;
    this->resolution = resolution;

};

Disc::Disc(const Disc &disc) {

    #ifdef _DEBUG
	cout << "Disc copy constructor was called" << endl;
    #endif

    title = disc.title;
    used_space = disc.used_space;
    kind = disc.kind;
    resolution = disc.resolution;

};

Disc::~Disc() {

    #ifdef _DEBUG
	cout << "Disc destructor was called" << endl;
    #endif
};


void Disc::display() {
    
    cout << "Title: " << title << endl;
    cout << "Used space: " << used_space << endl;
    cout << "Kind: " << kind << endl;
    cout << "Resolution: " << resolution << endl;
    
};

string Disc::getDiscTitle() {

    return title;
 };


float Disc::getUsedSpace() {

    return used_space;
};


string Disc::getDiscKind() {

    return kind;

};

string Disc::getResolution() {

    return resolution;
};

void Disc::changeDiscTitle(string new_title) {

    title = new_title ;
};

ostream& operator << ( ostream &s, Disc &disc)    {
    
    s << disc.title << endl << disc.used_space << endl << disc.kind << endl << disc.resolution << endl;
    return s;
};

istream& operator >> ( istream &s, Disc &disc) {
    
    s >> disc.title >> disc.used_space >> disc.kind >> disc.resolution;
    return s;
    
};

