// Số hoàn thiện, 6 có ước số là 1,2,3, và tổng ước số bằng nó
#include <iostream>
#include <time.h>
#include <stdlib.h>

using namespace std;

int main(int argc, char** argv){
    srand(time(NULL));
    int n;
    cout<<"Nhap so phan tu:";
    cin>>n;
    int M[n];
    for (int i=0; i<n; i++){
        M[i]=rand()%100;
    } 
    for (int i=0; i<n; i++){
        cout<<M[i]<<"\t";
    } 
    for (int i=0; i<n-1;i++)
    {
        for (int j=i+1;j<n;j++){
            if (M[i]>M[j]){
                int tam=M[i];
                M[i]=M[j];
                M[j]=tam;
            }
        }
    }
    cout<<"Mang sau khi sap xep:\n";
    for (int i=0; i<n; i++){
        cout<<M[i]<<"\t";
    } 
   
   
}