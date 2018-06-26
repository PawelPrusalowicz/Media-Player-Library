#ifndef from_memory_h
#define from_memory_h
#include "media_player.h"
#include <vector>

using namespace std;

/*
  Player From Memory is a derived class inheriting from Media Player.
  It adds variables and implements its own versions of virtual methods.

 */
class PlayerFromMemory : public MediaPlayer {
    
protected:
    //File formats compatible with the player, for exaple mpeg4, mp3, flv, ...
    string file_formats;
    
public:
    //Default Player From Memory constructor.
    PlayerFromMemory();

    //Player From Memory constructor with parameters
    PlayerFromMemory(string name, string type, string file_formats);

    //Player From Memory destructor.
    ~PlayerFromMemory();
    
    //Virtual function for writing information into file. Print_flag prints information necessary for reading file - that the object being saved is of current class.
    void save(fstream& file, bool print_flag_in_file);

    //Virtual cascade function for reading the object from file.
    void load(fstream& file);

    //Virtual cascade function displaying information about Player From Memory.
    void display();

    //Virtual function returning information about Player From Memory.
    string returnInformation();
    

    //Stream operator is friends with the class Player From Memory to get access to private and protected variables.
    friend ostream& operator << ( ostream &s, PlayerFromMemory &from_memory);

    //Stream operator is friends with the class Player From Memory to get access to private and protected variables.
    friend istream& operator >> ( istream &s, PlayerFromMemory &from_memory);
};

#endif /* from_memory_h */
