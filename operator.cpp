#include <iostream>

using namespace std;
/*tinh tong, hieu, tich, thuong cua 2 so nguyen*/
/*
    - tong 2 so nguyen = 1 so ?     nguyen      int
    - hieu 2 so nguyen = 1 so ?     nguyen      int
    - tich 2 so nguyen = 1 so ?     nguyen      int
    - thuong 2 so nguyen = 1 so ?   thuc        float/double
*/
int main()
{
    int a=10,b=3;
	int c= a%b; //phep chia lay du
    int d=a/b;  //phep chia lay nguyen
    //posfix increment: in ra man hinh roi moi tang gia tri cua bien
    //prefix: tang roi moi in gia tri cua bien = ++a;
    //decrement
	cout<<"a % b= "<<c<<endl;
    cout<<"a / b= "<<d<<endl;
    cout<<++a<<endl;
    cout<<b--<<endl;
    return 0;
}
