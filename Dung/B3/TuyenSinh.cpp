#include "TuyenSinh.h"

TuyenSinh::~TuyenSinh() {} // Can vi co smart pointer

void TuyenSinh::themThiSinh() {
    int loaiThiSinh;
    cout << "Choice Candidate (1. grade A, 2. grade B, 3. grade C): ";
    cin >> loaiThiSinh;

    string soBaoDanh;
    cout << "Enter SBD: ";
    getline(cin>>ws, soBaoDanh);

    for (auto& thiSinh : danhSachThiSinh) { // auto là kiểu dữ liệu tự động từ con trỏ unique_ptr có kiểu dữ liệu là ThiSinh c++11 trở đi :)) hơi rối
        if (thiSinh->getSoBaoDanh() == soBaoDanh) {
            std::cout << "Enter again..." << std::endl;
            return;
        }
    }

    unique_ptr<ThiSinh> thisinh ; // unique_ptr khi khởi tạo tự động là null, nên không cần gán giá trị ban đầu 
    bool choicecorrect = true;
    do
    {
        switch (loaiThiSinh) {
        case THI_SINH_KHOI_A:
            thisinh = make_unique<ThiSinhKhoiA>(soBaoDanh); 

            /* note : smart pointer chỉ hỗ trợ cho phiên bản c++14 trở lên , nếu dùng c++11 thì dùng new hoặc
            file c_cpp_properties.json - file này các a :)) đừng pull về nó dành cho macos, nếu dùng windows thì
            trong .vscode cho dự án để chuyển phiên bản c++14, file setting.json để liên kết
            các tệp có phần mở rộng với cpp*/

            break;
        case THI_SINH_KHOI_B:
            thisinh = make_unique<ThiSinhKhoiB>(soBaoDanh);
            break;
        case THI_SINH_KHOI_C:
            thisinh = make_unique<ThiSinhKhoiC>(soBaoDanh);
            break;
        default:
            cout << "Error choice, choice again" << endl;
            choicecorrect = false;
            break;
        }
    } 
    while (!choicecorrect);
    thisinh->nhapThongTin();
    danhSachThiSinh.push_back(std::move(thisinh));
}

void TuyenSinh::hienThiThongTin() {
    if (danhSachThiSinh.empty()) {
        cout << "List candidate empty" << endl;
        return;
    }

    cout << "List candidate:" << endl;
    for (auto& ts : danhSachThiSinh) {
        ts->hienThiThongTin();
        cout << "-------------------" << endl;
    }
}

void TuyenSinh::timKiemTheoSoBaoDanh() {
    if (danhSachThiSinh.empty()) {
        cout << "List candidate empty" << endl;
        return;
    }

    string soBaoDanh;
    cout << "Enter SBD for search: ";
    cin >> soBaoDanh;

    bool found = false;
    for (const auto& ts : danhSachThiSinh) {
        if (ts->getSoBaoDanh() == soBaoDanh) {
            ts->hienThiThongTin();
            found = true;
            break;
        }
    }

    if (!found) {
        cout << "not found candidate with SBD: " << soBaoDanh << endl;
    }
}
// chỉ để test github thôi :))