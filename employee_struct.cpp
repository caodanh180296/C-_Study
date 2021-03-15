// Số hoàn thiện, 6 có ước số là 1,2,3, và tổng ước số bằng nó
#include <iostream>
#include <time.h>
#include <string.h>
#include <stdlib.h>

using namespace std;

struct Diachi{
    char TenDuong[255];
    char Quan[150];
    char TinhThanh[150];
};

struct Nhanvien{
    int Ma;
    char Ten[255];
    int Tuoi;
    DiaChi CoQuan;
    DiaChi NhaRieng;
}

int main(int argc, char** argv){
    NhanVien teo;
    teo.Ma=1;
    strcpy(teo.Ten,"Teo");
    teo.Tuoi=23;
    strcpy(teo.CoQuan.TenDuong,"so 1 Lac Long Quan");
    strcpy(teo.CoQuan.Quan,"Quan 11");  
    strcpy(teo.CoQuan.TinhThanh,"Quan 11"); 
    strcpy(teo.NhaRieng.TenDuong,"so 1 Lac Long Quan");
    strcpy(teo.NhaRieng.Quan,"Quan 11");  
    strcpy(teo.NhaRieng.TinhThanh,"Quan 11"); 
    
    cout<<"Thong Tin cua Teo:"<<endl;
    cout<<"Ma"<<teo.Ma<<endl;    

    NhanVien *pTy=new NhanVien;
    strcpy(pTy->Ten,"Ty");
    strcpy(pTy->NhaRieng.TinhThanh,"HCM");
    cout<<pTy->Ten<<"\t"<<pTy->NhaRieng.TinhThanh<<endl;
   
}