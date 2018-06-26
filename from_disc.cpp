#include <stdio.h>
#include "from_disc.h"
#define _DEBUG

using namespace std;

PlayerFromDisc::PlayerFromDisc() {
    
    #ifdef _DEBUG
        cout << "Default Player_From_Disc constructor was called" << endl;
    #endif
    
    name = "DefaultPlayerFromDisc";
    version = 2;
    disc_kind = "Bluray";
}

PlayerFromDisc::PlayerFromDisc( string name, string type, string disc_kind) {

    this->name = name;
    this->type = type;
    this->disc_kind = disc_kind;

};

PlayerFromDisc::~PlayerFromDisc() {
    
    #ifdef _DEBUG
        cout << "Player From Disc destructor was called" << endl;
    #endif
}


void PlayerFromDisc::display() {
    
    MediaPlayer::display();
    cout << "---Variables from class Player From Disc---" << endl;
    cout << "Version: " << version << endl << "Disc kind: " << disc_kind << endl;
}

string PlayerFromDisc::returnInformation() {

    string s = "Player from disc\n\n" + MediaPlayer::returnInformation() + "\nDisc kind:\t\t" + disc_kind;
    return s;
};

void PlayerFromDisc::save(fstream& file, bool print_flag_in_file) {
    
    #ifdef _DEBUG
        cout << "Player From Disc object was saved" << endl;
    #endif
    
    if ( print_flag_in_file == true )
        file << "xxxPlayerFromDiscxxx" << endl;
    
    MediaPlayer::save(file, false);
    file << *this;
    
};

void PlayerFromDisc::load(fstream& file) {
    
    if (file.good() == false) {
        
        cout << "There was a problem with the file!" << endl;
    }
    else {
        
        #ifdef _DEBUG
            cout << "Player_From_Disc object was loaded" << endl;
        #endif
        
        MediaPlayer::load(file);
        file >> *this;
        
    }
};



ostream& operator << ( ostream &s, PlayerFromDisc &from_disc)    {
    
    s << from_disc.version << endl << from_disc.disc_kind << endl;
    return s;
};

istream& operator >> ( istream &s, PlayerFromDisc &from_disc) {
    
    s >> from_disc.version >> from_disc.disc_kind;
    return s;
    
};

