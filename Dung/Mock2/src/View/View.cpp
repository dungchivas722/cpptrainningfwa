#include "View.h"
#include <iostream>
#include <string>
#include <vector>
#include <filesystem>
#include <taglib/tag.h>
#include <taglib/fileref.h>
#include <iostream>
#include <string>
View::View() {
}

View::~View() {
}
void View::printTest()
{
    int choice;
    std::cout << "------------------TEST------------------" << std::endl;
    std::string filePath = "/Users/user/Desktop/nhac.mp3";
    std::cout << "Test thư viện tĩnh taglib.a với đường dẫn chỉ định" << std::endl;
    std::cout << "Path test: " << filePath << std::endl;
    TagLib::FileRef fileRef(filePath.c_str());
    TagLib::Tag* tag = fileRef.tag();

    std::string title = tag->title().toCString(true);
    std::string artist = tag->artist().toCString(true);
    std::string album = tag->album().toCString(true);
    std::string genre = tag->genre().toCString(true);
    int year = tag->year();

    std::cout << "title: " << title << std::endl;
    std::cout << "artist: " << artist << std::endl;
    std::cout << "album: " << album << std::endl;
    std::cout << "genre: " << genre << std::endl;
    std::cout << "year: " << year << std::endl;
    std::cout << "Nhap lua chon nghe bai hat: " << std::endl;
    std::cin >> choice;
    if (choice == 1)
    {
        std::cout << "Bat dau nghe bai hat" << std::endl;
        
    }
    else
    {
        std::cout << "Thoat" << std::endl;
    }

    std::cout << "------------------TEST------------------" << std::endl;
}



void View::printMenu(){
    cout << "------------------MENU------------------" << endl;
    cout << "1. Xem danh sach file" << endl;
    cout << "2. Xem danh sach playlist" << endl;
    cout << "3. Xem danh sach file trong playlist" << endl;
    cout << "4. Tao playlist" << endl;
    cout << "5. Xoa playlist" << endl;
    cout << "6. Sua ten playlist" << endl;
    cout << "7. Them file vao playlist" << endl;
    cout << "8. Xoa file khoi playlist" << endl;
    cout << "9. Sua thong tin file trong playlist" << endl;
    cout << "0. Thoat" << endl;
}

void View::printListMedia(vector<string> listMedia){
    cout << "Danh sach file: " << endl;
        for (std::vector<std::string>::size_type i = 0; i < listMedia.size(); i++){
    {
        cout << listMedia[i] << endl;
    }
        }
}

void View::printListNamePlaylist(vector<Playlist> listNamePlaylist){
    cout << "Danh sach playlist: " << endl;
        for (std::vector<std::string>::size_type i = 0; i < listNamePlaylist.size(); i++){
    {
        cout << listNamePlaylist[i].getName() << endl;
    }
        }
}

void View::printListInPlaylist(vector<Playlist> listInPlaylist){
    cout << "Danh sach file trong playlist: " << endl;
        for (std::vector<std::string>::size_type i = 0; i < listInPlaylist.size(); i++){
    {
        cout << listInPlaylist[i].getName() << endl;
    }
        }
}
