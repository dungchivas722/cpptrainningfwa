#include "Controller.h"
/*
Nhập đường dẫn thư mục : .....
1 - Xem danh sách các tệp tin đa phương tiện trong thư mục hiện tại và tất cả các thư mục con (âm thanh và video).
     (Tùy chọn) Phân trang, mỗi trang 25 tệp tin.
     Hiển thị tổng số trang và trang hiện tại.
        Nhập số trang để xem.: ...
        Nhập 'n' để xem trang tiếp theo, 'p' để xem trang trước, 'q' để thoát.: ()
2 - Liệt kê tên các danh sách phát hiện có trong thư mục hiện tại.
3 - Xem một danh sách phát
    Nhập tên danh sách :...
4 - Tạo một danh sách phát mới.
    Nhập tên danh sách :...
    Nhập tên bài hát :...
        1 - Nhập tiếp
        2 - Dừng
5, Sửa tên playlist.
    Nhập tên danh sách :...
6 - Thêm bài hát vào playlist.
    Nhập tên bài hát :...
7 - Xóa bài hát khỏi playlist.
    Nhập tên bài hát :...
8 - Sửa bài hát trong playlist.
    Nhập tên bài hát :...
        1-n : Sửa các metadata
9 - Xóa một danh sách phát.
    Nhập tên danh sách :...
10 - Mở bài hát. (Tùy chọn) Mở tệp tin từ ứng dụng của bạn (bằng trình phát phương tiện Windows bên ngoài).
    Nhập tên bài hát :...
0 - Thoát
*/
int main()
{
    Controller controller;
    controller.runMenu();
    return 0;
}