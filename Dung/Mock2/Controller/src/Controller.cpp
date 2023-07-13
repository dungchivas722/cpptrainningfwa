#include "Controller.h"

Controller::Controller(){
    this->view = View();
    this->model = Model();
}

Controller::~Controller(){
}

void Controller::runMenu(){
/*
Nhập đường dẫn thư mục : .....
 1 - Xem danh sách các tệp tin đa phương tiện trong thư mục hiện tại và tất cả các thư mục con (âm thanh và video).
     (Tùy chọn) Phân trang, mỗi trang 25 tệp tin.
     Hiển thị tổng số trang và trang hiện tại.
        Nhập số trang để xem.: ...
        Nhập 'n' để xem trang tiếp theo, 'p' để xem trang trước, 'q' để thoát.: ()
2 - list của playlist:
    1 - Liệt kê danh sách các danh sách phát.
    2 - Xem một danh sách phát
        Nhập tên danh sách :...
    3 - Tạo một danh sách phát mới.
        Nhập tên danh sách :...
        Nhập tên bài hát :...
            1 - Nhập tiếp
            2 - Dừng
    4 - Cập nhật danh sách phát. ( xửa file )
        Nhập tên danh sách :...
            1, Sửa tên playlist.
            2, Sửa bài hát trong playlist.
                1 - Thêm bài hát vào playlist.
                    Nhập tên bài hát :...
                2 - Xóa bài hát khỏi playlist.
                    Nhập tên bài hát :...
                3 - Sửa bài hát trong playlist.
                    Nhập tên bài hát :...
                        1-n : Sửa các metadata
    5 - Xóa một danh sách phát.
        Nhập tên danh sách :...
3 - (Tùy chọn) Mở tệp tin từ ứng dụng của bạn (bằng trình phát phương tiện Windows bên ngoài).
[ADVANCE]
    1 - Mở bài hát.
        Nhập tên bài hát :...
*/
}