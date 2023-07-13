#ifndef SOUND_H
#define SOUND_H

#include <iostream>
#include <string>
using namespace std;

class Sound
{
private:
    string Track_name,Album, Artis, Genre, Publisher; 
    int Publish_Year, Duration;
public:
    Sound();
    ~Sound();
    string getTrack_name();
    string getAlbum();
    string getArtist();
    string getGenre();
    string getPublisher();
    int getPublish_Year();
    int getDuration();
    void setTrack_name(string Track_name);
    void setAlbum(string Album);
    void setArtist(string Artist);
    void setGenre(string Genre);
    void setPublisher(string Publisher);
    void setPublish_Year(int Publish_Year);
    void setDuration(int Duration);

};



#endif