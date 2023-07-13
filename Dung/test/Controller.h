#ifndef CONTROLLER_H
#define CONTROLLER_H

#include <iostream>
#include <string>
#include <vector>
#include "Model.h"
#include "View.h"

class Controller
{
private:
    View view;
    Model model;
public:

    Controller();
    ~Controller();

    void runMenu(); // tạo menu lựa chọn
    string enterNamePlaylist(); // nhập tên playlist
    string enterMediaPlaylist(); // nhập tên media trong playlist

    //  Them sua xoa playlist
    void deletePlaylist();
    void fixNamePlaylist(); 
    void createPlaylist();
    
    // Them sua xoa media trong playlist
    void addMediaPlaylist();
    void removeMediaPlaylist();
    void fixMetadataMediaPlaylist(); 
    
};


#endif