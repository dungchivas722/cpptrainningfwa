#ifndef MODEL_H
#define MODEL_H

#include <iostream>
#include <string>
#include <vector>
#include <fstream>
#include <taglib/tag.h>
#include <taglib/fileref.h>
using namespace std;

class Playlist
{
public:
    string name;
    vector <string> listTitlePlaylist; 
    Playlist();
    ~Playlist();
    string getName();
    void setName(string name);
    vector <string> getListInPlaylist();
    void setListInPlaylist(vector <string> listInPlaylist);
};

class Model
{
private:
    vector <string> listMedia;
    vector <Playlist> listPlaylist;
public:
    
    Model();
    ~Model();

    string getPath();

    void createPlaylist(string name);
    void deletePlaylist(string name);
    void fixNamePlaylist(string name);
    void addMediaPlaylist(string name, string media);
    void removeMediaPlaylist(string name, string media);
    void fixMetadataMediaPlaylist(string name, string media);

    vector <string> getListMedia(string path);
    vector<Playlist> getListNamePlaylist();
    vector<Playlist> getListInPlaylist(string name);


};


#endif