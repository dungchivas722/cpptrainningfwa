#ifndef MODEL_H
#define MODEL_H

#include <iostream>
#include <string>
#include <vector>
#include "Sound.h"
#include "Video.h"
using namespace std;

class Playlist
{
private:
    string name;
public:
    Playlist(); 
    ~Playlist();
    string checkFile();
    void addSound();
    void addVideo();
};

class MediaFile
{
private:
    string path;
public:
    MediaFile();
    ~MediaFile();
    string getMediaFile();
    void setMediaFile(string path);
};

class Model
{
private:
    vector <Playlist> listPlaylist;
    vector <MediaFile> listMediaFile;
public:
    Model();
    ~Model();
    void addPlaylist(string name);
    void addMediaFile(string name, string path);
    void showListPlaylist();
    void showListMediaFile();
    void deletePlaylist(string name);
    void deleteMediaFile(string name);
    void fixPlaylist(string name);
    void fixMediaFile(string name);
};


#endif