#include "Model.h"
#include <filesystem>
namespace fs = std::filesystem;

Playlist::Playlist(){
}

Playlist::~Playlist(){
}

string Playlist::getName(){
    return name;
}

void Playlist::setName(string name){
    this->name = name;
}

vector <string> Playlist::getListInPlaylist(){
    return listTitlePlaylist;
}

void Playlist::setListInPlaylist(vector <string> listInPlaylist){
    this->listTitlePlaylist = listInPlaylist;
}

Model::Model(){
}

Model::~Model(){
}

string Model::getPath(){
    string path;
    cout << "Nhap duong dan: ";
    cin >> path;
    return path;
}

void Model::createPlaylist(string name){
    Playlist playlist;
    playlist.setName(name);
    this->listPlaylist.push_back(playlist);
}

void Model::deletePlaylist(string name){
    for (int i = 0; i < this->listPlaylist.size(); i++){
        if (this->listPlaylist[i].getName() == name){
            this->listPlaylist.erase(this->listPlaylist.begin() + i);
            break;
        }
    }
}

void Model::fixNamePlaylist(string name){
    string newName;
    cout << "Nhap ten moi: ";
    cin >> newName;
    for (int i = 0; i < this->listPlaylist.size(); i++){
        if (this->listPlaylist[i].getName() == name){
            this->listPlaylist[i].setName(newName);
            break;
        }
    }
}

void Model::addMediaPlaylist(string name, string media){
    for (int i = 0; i < this->listPlaylist.size(); i++){
        if (this->listPlaylist[i].getName() == name){
            this->listPlaylist[i].listTitlePlaylist.push_back(media);
            //  update truong hop
            break;
        }
    }
}

void Model::removeMediaPlaylist(string name, string media){
    for (int i = 0; i < this->listPlaylist.size(); i++){
        if (this->listPlaylist[i].getName() == name){
            for (int j = 0; j < this->listPlaylist[i].listTitlePlaylist.size(); j++){
                if (this->listPlaylist[i].listTitlePlaylist[j] == media){
                    this->listPlaylist[i].listTitlePlaylist.erase(this->listPlaylist[i].listTitlePlaylist.begin() + j);
                    break;
                }
            }
            break;
        }
    }
}

void Model::fixMetadataMediaPlaylist(string name, string media){
    // update sau
}

vector<string> Model::getListMedia(string directoryPath) {
    vector<string> fileList;

    for (const auto& entry : fs::directory_iterator(directoryPath)) {
        if (entry.is_regular_file()) {
            const string& filePath = entry.path().filename().string();
            fileList.push_back(filePath);
        }
    }

    return fileList;
}

vector<Playlist> Model::getListNamePlaylist(){
    return this->listPlaylist;
}

vector<Playlist> Model::getListInPlaylist(string name){
    vector <Playlist> listInPlaylist;
    for (int i = 0; i < this->listPlaylist.size(); i++){
        if (this->listPlaylist[i].getName() == name){
            listInPlaylist.push_back(this->listPlaylist[i]);
            break;
        }
    }
    return listInPlaylist;
}




