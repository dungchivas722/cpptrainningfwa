#include "KhuPho.h"

int main() {
    int n;
    cout << "Enter households: ";
    cin >> n;

    KhuPho khuPho;
    khuPho.nhapThongTin(n);
    cout << "Information all households in town:" << endl;
    khuPho.hienThiThongTin();

    return 0;
}
