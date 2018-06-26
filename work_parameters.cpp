#include "work_parameters.h"
#define _DEBUG


WorkParam::WorkParam() {

    #ifdef _DEBUG
	cout << "Default Work_param constructor was called" << endl;
    #endif

    volume = 50;
    language = "ENGLISH";
    playback_speed = "1,0x";
}

WorkParam::WorkParam(int volume, string language, string playback_speed) {

    #ifdef _DEBUG
	cout << "Work_param constructor (int, enum Language, enum Playback_speed) was called" << endl;
    #endif

    this->volume = volume;
    this->language = language;
    this->playback_speed = playback_speed;
}


void WorkParam::display() {
    
    cout << "Language: " << language << endl;
    cout << "Playback speed: " << playback_speed << endl;
    cout << "Volume: " << volume << endl;
}


WorkParam::WorkParam(const WorkParam & work_param) {

    #ifdef _DEBUG
	cout << "Work_param copy constructor was called" << endl;
    #endif

    volume = work_param.volume;
    language = work_param.language;
    playback_speed = work_param.playback_speed;

}

WorkParam::~WorkParam() {

    #ifdef _DEBUG
	cout << "Work_param destructor was called" << endl;
    #endif

}


int WorkParam::getVolume(){

    return volume;
}

string WorkParam::getLanguage() {

   
    return language;
}

string WorkParam::getPlaybackSpeed(){

    return playback_speed;
}


void WorkParam::changePlaybackSpeed(string new_speed) {

    playback_speed = new_speed;

}

void WorkParam::changeLanguage(string new_language){

    language = new_language;

}

void WorkParam::changeVolume(int new_volume) {

    volume = new_volume;

}


WorkParam WorkParam::operator ++ (int) {

    #ifdef _DEBUG
	cout << "\n**Postincrementation operator was called**" << endl;
    #endif

    WorkParam copied = *this;
    volume++;

    return copied;
}

WorkParam WorkParam::operator -- () {

    #ifdef _DEBUG
	cout << "\n**Predecrementation operator was called**" << endl;
    #endif

    --volume;
    return *this;
}


ostream& operator << ( ostream &s, WorkParam &work_param) {
    
    s << work_param.playback_speed << endl << work_param.language << endl << work_param.volume << endl;
    return s;
}

istream& operator >> ( istream &s, WorkParam &work_param) {
    
    s >> work_param.playback_speed >> work_param.language >> work_param.volume;
    return s;
    
}


