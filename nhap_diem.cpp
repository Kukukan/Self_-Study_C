#include <iostream>

int main()
{
    float diem;
   

    do
    {
        /* code */
        std::cout<<"Nhap so diem cua ban: ";
        std::cin>>diem;
    } while (diem<0 || diem>10);
    
    if (diem>=9)
    {
        /* code */
        std::cout<<"Ban la hoc sinh xuat sac\n";
    }
    else if (diem>=8 && diem <9)
    {
        /* code */
        std::cout<<"Ban la hoc sinh gioi\n";
    }
    else if (diem>=6.5 && diem<8)
    {
        /* code */
        std::cout<<"Ban la hoc sinh kha\n";
    }
    else if (diem>=5 && diem<6.5)
    {
        /* code */
        std::cout<<"Ban la hoc sinh trung binh\n";
    }
    else if (diem>=3.5 && diem<5)
    {
        /* code */
        std::cout<<"Ban la hoc sinh yeu\n";
    }
    else if (diem<3.5)
    {
        /* code */
        std::cout<<"Ban la hoc sinh kem\n";
    }
    
    return 0;
}