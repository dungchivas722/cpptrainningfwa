#include "Controller.h"

enum Menu{
    EXIT = 0,
    LIST_MEDIA = 1,
    LIST_NAME_PLAYLIST   = 2,
    LIST_IN_PLAYLIST = 3,
    CREATE_PLAYLIST = 4,
    DELETE_PLAYLIST = 5,
    FIX_NAME_PLAYLIST = 6,
    ADD_MEDIA_PLAYLIST = 7,
    REMOVE_MEDIA_PLAYLIST = 8,
    FIX_METADATA_MEDIA_PLAYLIST = 9
};


Controller::Controller() {}

Controller::~Controller(){
}

void Controller::runMenu(){
    
    // In ra menu
    string path = this->model.getPath();
    this->view.printMenu();
    int choice;
    
    do {
        cout << "Nhap lua chon: ";
        cin >> choice;
        switch (choice)
        {
        case EXIT:
            break;
        case LIST_MEDIA:
            this->view.printListMedia(this->model.getListMedia(path));
            break;
        case LIST_NAME_PLAYLIST:
            this->view.printListNamePlaylist(this->model.getListNamePlaylist());
            break;
        case LIST_IN_PLAYLIST:
            this->view.printListInPlaylist(this->model.getListInPlaylist(this->enterNamePlaylist()));
            break;
        case CREATE_PLAYLIST:
            this->createPlaylist();
            break;
        case DELETE_PLAYLIST:
            this->deletePlaylist();
            break;
        case FIX_NAME_PLAYLIST:
            this->fixNamePlaylist();
            break;
        case ADD_MEDIA_PLAYLIST:
            this->addMediaPlaylist();
            break;
        case REMOVE_MEDIA_PLAYLIST:
            this->removeMediaPlaylist();
            break;
        case FIX_METADATA_MEDIA_PLAYLIST:
            this->fixMetadataMediaPlaylist();
            break;
        default:
            break;
        }
    } while (choice != EXIT);
}

string Controller::enterNamePlaylist(){
    string name;
    cout << "Nhap ten playlist: ";
    cin >> name;
    return name;
}

string Controller::enterMediaPlaylist(){
    string name;
    cout << "Nhap ten media: ";
    cin >> name;
    return name;
}

void Controller::deletePlaylist(){
    this->model.deletePlaylist(this->enterNamePlaylist());
}

void Controller::fixNamePlaylist(){
    this->model.fixNamePlaylist(this->enterNamePlaylist());
}

void Controller::createPlaylist(){
    this->model.createPlaylist(this->enterNamePlaylist());
}

void Controller::addMediaPlaylist(){
    this->model.addMediaPlaylist(this->enterNamePlaylist(), this->enterMediaPlaylist());
}

void Controller::removeMediaPlaylist(){
    this->model.removeMediaPlaylist(this->enterNamePlaylist(), this->enterMediaPlaylist());
}

void Controller::fixMetadataMediaPlaylist(){
    this->model.fixMetadataMediaPlaylist(this->enterNamePlaylist(), this->enterMediaPlaylist());
}
