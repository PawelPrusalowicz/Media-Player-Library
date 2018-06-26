#include "media_player.h"
#define _DEBUG



MediaPlayer::MediaPlayer() {
    
    #ifdef _DEBUG
        cout << "Default Media player constructor was called" << endl;
    #endif
    name = "DefaultMediaPlayer";
    type = "MoviePlayer"; 

    
}

MediaPlayer::~MediaPlayer() {
    
    #ifdef _DEBUG
        cout << "Media player destructor was called" << endl;
    #endif
}

void MediaPlayer::display() {
    cout << "---Variables from class Media Player---" << endl;
    cout << "Name: \n" << name << endl << "\nType:" << type << endl;
}

string MediaPlayer::returnInformation() {

    string information = "Name:\t\t"+ name + "\nType:\t\t" + type;
    return information;
}

void MediaPlayer::save(fstream& file, bool print_flag_in_file) {
    
#ifdef _DEBUG
    cout << "Media player object was saved" << endl;
#endif
    
    file << *this;
}

void MediaPlayer::load(fstream& file) {
    
    if (file.good() == false) {
        
        cout << "Can't read the file properly!" << endl;
    }
    else {
        
    #ifdef _DEBUG
            cout << "Media Player object was loaded" << endl;
    #endif

        file >> *this;

    }
}


ostream& operator << ( ostream &s, MediaPlayer &media_player) {
    
    s << media_player.picture_path << endl << media_player.name << endl << media_player.type << endl;
    return s;
}

istream& operator >> ( istream &s, MediaPlayer &media_player) {
    
    s >> media_player.picture_path >> media_player.name >> media_player.type;
    return s; 
}

void MediaPlayer::setPicturePath ( string new_location )
{
    picture_path = new_location;

}


string MediaPlayer::returnPicturePath()
{
    return picture_path;
};

