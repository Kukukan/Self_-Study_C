#include <iostream>
#define PI  3.14    //xu ly o qua trinh pre-processor. How to build process in C
using namespace std;

int main()
{
    double dai,rong,a,r;

    double C_hcn, C_ht, C_hv, S_hcn, S_ht, S_hv;

    cout<<"Nhap chieu dai, rong cua hinh chu nhat: ";
    cin>>dai>>rong;
    cout<<"Nhap canh cua hinh vuong a= ";
    cin>>a;
    cout<<"Nhap ban kinh hinh tron r= ";
    cin>>r;
    C_hcn=(dai+rong)*2;
    C_ht=r*PI;
    C_hv=a*4;

    S_hcn= dai*rong;
    S_ht= PI*r*r;
    S_hv= a*a;

    cout<<"Chu vi va dien tich cua cac hinh lan luot la:"<<endl;
    cout<<C_hcn<<"\t"<<C_ht<<"\t"<<C_hv<<endl;
    cout<<S_hcn<<"\t"<<S_ht<<"\t"<<S_hv<<endl;
    return 0;
}
/*
10 chia 2 bang 5 du 0
/ 5
% 0

tang bien x 1 lan va viet 10 lan nhu the

x = x+1;
x = x+1;
x++;

^: phep xor tu tim hieu
*/