#include <iostream>
#include <time.h>
#include <stdlib.h>

using namespace std;

void swap(int *&pa, int *&pb);
void NhapMang(int *&a, int n);
void XuatMang(int *a, int n);
void SapGiam(int *&a, int n);
int i,j;
int main(int argc, char** argv){
   int *a;
   int n=10;
   NhapMang(a,n);
   cout<<"Mang sau khi nhap:\n";
   XuatMang(a,n);
   SapGiam(a,n);
   cout<<"Mang sau khi sap:\n"<<endl;
   XuatMang(a,n);
   return 0;        

}
void NhapMang(int *&a, int n)
{   
    srand(time(NULL));
    a= new int[n];
    for(int i=0; i<n;i++){
        *(a+i)=rand()%101;
    }
}
void XuatMang(int *a, int n){
    for(int i=0; i<n;i++){
        cout<<*[a+i]<<"\t";
    }
}
void SapGiam(int *&a, int n){
    for(int i=0; i<n-1;i++){
        for(int j=i+1;j<n;j++){
            if(*(a+i) < *(a+j)){
                int *a1=(a+i);
                int *a2=(a+j);
                swap(a1,a2);
                //swap(*(a+i), *(a+j));
            }
        }
    }
}
void swap(int *&pa, int *&pb){
    int temp=*pa;
    *pa=*pb;
    *pb=temp;
}