#ifndef from_disc_h
#define from_disc_h

#include "media_player.h"


/*
  Player From Disc is a derived class inheriting from Media Player.
  It adds variables and implements its own versions of virtual methods.

 */
class PlayerFromDisc : public MediaPlayer {
    
protected:
    //Kind of disc compatible with Player from disc. For example : Bluray, DVD, CD
    string disc_kind;

    //Program version.
    int version;
    
public:
    //Default Player From Disc constructor.
    PlayerFromDisc();

    PlayerFromDisc( string name, string type, string disc_kind);

    //Player From Disc Destructor.
    ~PlayerFromDisc();
    
    //Virtual function returning information about Player From Disc.
    string returnInformation();

    //Virtual cascaded function displaying information about Player From Disc.
    void display();

    //Virtual function for writing information into file. Print_flag prints information necessary for reading file - that the object being saved is of current class.
    void save(fstream& file, bool print_flag_in_file);

    //Virtual cascade function for reading the object from file.
    void load(fstream& file);

    
    //Stream operator is friends with the class Player From Memory to get access to private and protected variables.
    friend ostream& operator << ( ostream &s, PlayerFromDisc &from_disc);

    //Stream operator is friends with the class Player From Memory to get access to private and protected variables.
    friend istream& operator >> ( istream &s, PlayerFromDisc &from_disc);
    
};

#endif /* from_disc_h */
