#include <stdio.h>
#include <fstream>

#include "from_memory.h"
#define _DEBUG

using namespace std;

PlayerFromMemory::PlayerFromMemory() {
    #ifdef _DEBUG
        cout << "Default From_memory constructor was called" << endl;
    #endif
    
    name = "DefPlayerFromMemory";
    file_formats = "MP4,FLV,AVI";
    
}

PlayerFromMemory::PlayerFromMemory( string name, string type, string file_formats) {

    this->name = name;
    this->type = type;
    this->file_formats = file_formats;

}

PlayerFromMemory::~PlayerFromMemory() {
    
    #ifdef _DEBUG
        cout << "Player_From_Memory destructor was called" << endl;
    #endif
}


void PlayerFromMemory::save(fstream& file, bool print_flag_in_file) {
    
    #ifdef _DEBUG
        cout << "Player from memory object was saved" << endl;
    #endif
    
    if (print_flag_in_file == true)
        file << "xxxPlayerFromMemoryxxx" << endl;
    
    MediaPlayer::save(file, true);
    file << *this;
    
}

void PlayerFromMemory::load(fstream& file) {
    
    if (file.good() == false) {
        
        cout << "Can't read the file properly!" << endl;
    }
    else {
        
        #ifdef _DEBUG
            cout <<  "Player from memory object was loaded" << endl;
        #endif
        
        MediaPlayer::load(file);
        file >> *this;
    }
    
}

void PlayerFromMemory::display() {
    
    MediaPlayer::display();
    cout << "---Variables from class Player From Memory---" << endl;
    cout << "Name: " << name << endl << "File formats: " << file_formats <<  endl;
}

string PlayerFromMemory::returnInformation() {

    string s = "Player from memory\n\n" + MediaPlayer::returnInformation() + "\nFile formats:\t\t" + file_formats;
    return s;
}

ostream& operator << ( ostream &s, PlayerFromMemory &from_memory) {
    
    s << from_memory.file_formats << endl;
    return s;
}

istream& operator >> ( istream &s, PlayerFromMemory &from_memory) {
    
    s >> from_memory.file_formats;
    return s;
    
}
