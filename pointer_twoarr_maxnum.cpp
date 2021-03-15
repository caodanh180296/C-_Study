#include <iostream>
#include <time.h>
#include <stdlib.h>

using namespace std;
int i,j;

void NhapMaTran(int **&M, int n);
void XuatMaTran(int **M, int n);
int Max(int **M, int n);

int main(int argc, char** argv){
     int **M;
     int n=5;
     NhapMatran(M,n);
     cout<<"Ma tran sau khi nhap:\n";
     XuatMaTran(M,n);
     int m= Max(M,n);
     cout<<"Max="<<m<<endl;
     return 0;

}
void NhapMaTran(int **&M, int n){
    srand(time(NULL));
    M=new int*[n];
    for(i=0; i<n; i++){
        *(M+i)=new int[n];
    }
    for (i=0;i<n;i++){
        for(j=0; j<n;j++){
            *(*(M+i)+j)=-50+rand()%151;
        }
    }
}
void XuatMaTran(int **M, int n){
    for (i=0;i<n;i++){
        for(j=0; j<n;j++){
           cout<<*(*(M+i)+j)<<"\t";
        }
        cout<<endl;
    }
}
int Max(int **M, int n){
    int m=*(*(M+0)+0);
    for (i=0;i<n;i++){
        for(j=0; j<n;j++){
           if(m<*(*(M+i)+j))
           {
               m= *(*(M+i)+j);
           }
        }
        
    }


}