#include <iostream> //them 1 thu vien vao doan code cua minh
//#include <bits/stdc++.h> //thu vien tong hop
#include <cmath>
/*
lib: file header
1. <>: them lib cua language, do nguoi lap trinh ra ngon ngu viet: C/c++.
2. "": them lib, nhung day la lib nguoi lap trinh tao ra.
    - khi ma project no co nhieu file khac nhau. moi file do se co 1 lib rieng
    - lib nay se duoc public cho nguoi dung.
    - tao 1 menu hien thi lua chon. tao file lib menu.h (co cac function, cac bien, cac feature cho nguoi dung su dung)
    - nguoi dung se khong duoc su dungcac file .c/.cpp: file danh cho dev
    :: toan tu pham vi
*/

/*Kieu du lieu*/
/*
1. int: integer
2. bien: la 1 cai ten co nghia, dung cai ten nay de truy cap vao bo nho cua may tinh
3. cu phap de khai bao bien
    datatype ten_cua_bien
4. cach dat ten bien
    - tieng anh ko dau
    - khong chua ky tu dac biet, ko bat dau bang chu so
    - khong trung voi cac keyword cua C/C++.
*/
using namespace std;  //thu vien cho phep truy suat den cac ham.
int x; //global variable: bien toan cuc, bien nay co the duoc truy cap o bat cu dau trong chuong trinh nhung phai la sau dong lenh dat bien
int main() //ham thuc thi
{
    short int y; //local variable: bien cuc bo, scope: chi o trong ham ma no duoc khai bao
    /*in 1 dong chu ra man hinh console*/
    cout<<"Noi dung ma minh muon in ra"<<endl; //endline
    cout<<"Hello Developer\n";
    cin>>x; //nhap du lieu
    cout<<x<<endl;
    cout<<M_PI;
    return 0;
}
/*Ex
\n
In ra man hinh 3 dong chu tuy thich
khai bao bien kieu nguyen, thuc va in ra man hinh (nhap du lieu vao)
*/
//void display()
//{
//    x=1;
//    cout<<x<,endl;
//}
