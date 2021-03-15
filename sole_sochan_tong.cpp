#include <iostream>
#include <time.h>
#include <stdlib.h>

using namespace std;

int main(int argc, char** argv){
    srand(time(NULL));
    int n, j, i;
    cout<<"Nhap so phan tu:";
    cin>>n;
    int M[n];
    for (int i=0; i<n;i++){
        M[i]=rand()%100;
    }
    cout<<"Du lieu toan bo mang:\n";
     for (i=0; i<n;i++){
        cout<<M[i]<<"\t";
    }
    int sole=0;
    cout<<"\n Cac so le cua mang:\n";
    for(i=0; i<n; i++)
    {
        if((M[i]%2)!= 0)
        {
            cout<<M[i]<<"\t";
            sole+=1;
        }
    }
    cout<<"Co tong cong so le \t"<<sole<<endl;

    // so nguyen to
    cout<<"\n Cac so nguyen to trong mang:\n";
    for(i=0; i<n; i++)
    {
        int dem=0;
        for(j=1; j<=M[i]; j++){
            if((M[i]%j) == 0){
                dem++;
            }
        }
        if(dem==2){
            cout<<M[i]<<"\t";
        }

             
    }
    return 0;
}