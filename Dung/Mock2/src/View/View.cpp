#include "View.h"
#include <taglib/tag.h>
#include <taglib/fileref.h>

View::View(){
}
View::~View(){
}

void View::printMenu(){
    
    string filePath = "/Users/user/Desktop/nhac.mp3";
    cout <<"Test thư viện tĩnh taglib.a với đường dẫn chỉ định" << endl;
    cout << "Path test: " << filePath << endl;
    TagLib::FileRef fileRef(filePath.c_str());
    TagLib::Tag* tag = fileRef.tag();

     string title = tag->title().toCString(true);
     string artist = tag->artist().toCString(true);
     string album = tag->album().toCString(true);
     string genre = tag->genre().toCString(true);
    int year = tag->year();

     cout << "title: " << title <<  endl;
     cout << "actirst: " << artist <<  endl;
     cout << "album: " << album <<  endl;
     cout << "genre: " << genre <<  endl;
     cout << "year: " << year <<  endl;
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
    for (int i = 0; i < listMedia.size(); i++)
    {
        cout << listMedia[i] << endl;
    }
}

void View::printListNamePlaylist(vector<Playlist> listNamePlaylist){
    cout << "Danh sach playlist: " << endl;
    for (int i = 0; i < listNamePlaylist.size(); i++)
    {
        cout << listNamePlaylist[i].getName() << endl;
    }
}

void View::printListInPlaylist(vector<Playlist> listInPlaylist){
    cout << "Danh sach file trong playlist: " << endl;
    for (int i = 0; i < listInPlaylist.size(); i++)
    {
        cout << listInPlaylist[i].getName() << endl;
    }
}
