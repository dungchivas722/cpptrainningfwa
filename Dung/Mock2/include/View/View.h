#ifndef VIEW_H
#define VIEW_H

#include <iostream>
#include <string>
#include <vector>
#include "Model.h"
using namespace std;

class View
{  
public:
    View();
    ~View();
    
    void printMenu(); // in ra menu

    // in ra danh sach file, playlist
    void printListMedia(vector<string> listMedia);
    void printListNamePlaylist(vector<Playlist> listNamePlaylist);
    void printListInPlaylist(vector<Playlist> listInPlaylist);

    // in ra thong bao file, playlist
    // update sau
    void printTest();

};

#endif