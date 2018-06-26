#ifndef WORK_PARAMETERS_H_INCLUDED
#define WORK_PARAMETERS_H_INCLUDED

//#include <stdio.h>
#include <iostream>
#include <string>
#include <fstream>

using namespace std;

/*
  Work Parameters is Bluray subclass.
  It contains information about program settings.

 */
class WorkParam {
    
private:
    //Current language used in bluray player.
    string language;

    //Current playback speed in bluray player.
    string playback_speed;

    //Current volume level in bluray player.
    int volume;
    
public:

    //constructors
    
    //Default constructor of  Work Parameters.
    WorkParam();

    //Work Parameters constructor with parameters.
    WorkParam(int volume, string language, string playback_speed);

    //Copy Work Parameters constructor.
    WorkParam(const WorkParam & work_param);

    //Work Parameters destructor.
    ~WorkParam();

    
    //functions
    
    //Function returns current volume level.
    int getVolume();

    //Function returns current language.
    string getLanguage();

    //Function returns current playback speed.
    string getPlaybackSpeed();

    //Function changes current playback speed.
    void changePlaybackSpeed(string new_speed);

    //Function changes current language.
    void changeLanguage(string new_language);

    //Funkcja changes current volume level.
    void changeVolume(int new_volume);

    //Function displays current Work Parameters.
    void display();
    

    //operators
    
    //Postincrementation operator increases volume level by 1.
    WorkParam operator ++ (int);

    //Predecrementation operator decreases volume level by 1.
    WorkParam operator -- ();
    

    //Stream operator is friends with the class Work Parameters to get access to private and protected variables.
    friend ostream& operator << ( ostream &s, WorkParam &work_param);

    //Stream operator is friends with the class Work Parameters to get access to private and protected variables.
    friend istream& operator >> ( istream &s, WorkParam &work_param);

};

#endif // WORK_PARAMETERS_H_INCLUDED
