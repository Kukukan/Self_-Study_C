#include <iostream>

using namespace std;
bool KtNto(int n)
{
    int i;
    if(n<2)
    {
        return false;
    }
    for(i=2;i*i<=n;i++)
    {
        if(n%i==0)
        {
            return false;
        }
    }
    return true;
}
int main()
{
    int num;
    do
    {
        /* code */
        cin>>num;
        if(KtNto(num))
        {
            cout<<"So vua nhap la so nguyen to"<<endl;
        }
        else
        {
            cout<<"So vua nhap khong phai la so nguyen to!\nVui long nhap lai!!!"<<endl;
        }
    } while (!(KtNto(num)));
    
    return 0;
}