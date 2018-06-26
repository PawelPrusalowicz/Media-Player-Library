#ifndef DISC_H_INCLUDED
#define DISC_H_INCLUDED

#include <iostream>
#include <string>
#include <fstream>
#pragma once

#define _DEBUG

using namespace std;

/*
  Disc is Bluray's subclass, stored in a vector.
  It contains information about disc stored in bluray.

 */
class Disc {

private:
    
    //Disc title.
    string title;

    //Used space of the disc.
    float used_space;

    //Kind of disc - BLURAY, DVD, CD..
    string kind;

    //Resolution of the File - HD, FULLHD, ULTRAHD, 4K,...
    string resolution;

public:

    //constructors
    
    //Default Disc constructor.
    Disc();

    //Disc constructor with parameters.
    Disc( string title, float used_space, string kind, string resolution );

    //Disc copy constructor.
    Disc (const Disc& d);

    //Disc destructor.
    ~Disc();


    //functions
    
    //Function displays information about Disc.
    void display();

    //Function returns title of the disc.
    string getDiscTitle();

    //Function returns used space of the disc.
    float getUsedSpace();

    //Function returns kind of the disc.
    string getDiscKind();

    //Function resolution title of the disc.
    string getResolution();

    //Function changes the title of the disc.
    void changeDiscTitle(string new_title);

 
    //Stream operator is friends with the class Disc to get access to private and protected variables.
    friend ostream& operator << ( ostream &s, Disc &disc);

    //Stream operator is friends with the class Disc to get access to private and protected variables.
    friend istream& operator >> ( istream &s, Disc &disc);

};

#endif // DISC_H_INCLUDED
