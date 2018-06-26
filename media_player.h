#ifndef media_player_h
#define media_player_h

#include <iostream>
#include <string>
#include <fstream>

#include <QDialog>
#include <QObject>
#include <QPixmap>
#include <QGraphicsScene>
#include <QMessageBox>

using namespace std;
/*
  Media Player is a base and abstract class.
  Classes Player From Disc and Player From Memory inherit from Media Player.
  It contains variables common for all the players and virtual methods.

 */
class MediaPlayer {
    //Q_OBJECT
    
protected:
    //Name of the player.
    string name;

    //Type of the player. For example audio player, video player, ...
    string type;

    //Every media player stores a path to it's picture
    string picture_path;

public:

    //Media Player default constructor.
    MediaPlayer();

    //Virtual destructor of Media Player.
    virtual ~MediaPlayer();

    //Virtual function displaying information about Media player.
    virtual void display();

    //Virtual function returning information about Media Player.
    virtual string returnInformation();

    //Function that sets the picture path
    void setPicturePath ( string location );

    //Function that returns the picture path
    string returnPicturePath();
    
    //Virtual function for writing information into file. Print flag prints information necessary for reading file - that the object being saved is of current class.
    virtual void save(fstream& file, bool print_flag_in_file) = 0;

    //Virtual function for reading the object from file.
    virtual void load(fstream& file);


    
    //Stream operator is friends with the class Media Player to get access to private and protected variables.
    friend ostream& operator << ( ostream &s, MediaPlayer &media_player);

    //Stream operator is friends with the class Media Player to get access to private and protected variables.
    friend istream& operator >> ( istream &s, MediaPlayer &media_player);

};

#endif /* media_player_h */
