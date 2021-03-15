// Số hoàn thiện, 6 có ước số là 1,2,3, và tổng ước số bằng nó
#include <iostream>
using namespace std;

int main(int argc, char** argv){
    int n;
    cout<<"Nhap so phan tu:";
    cin>>n;
    int M[n];
    int i=0;
    while(i<n){
        cout<<"Nhap M["<<i<<"]=";
        cin>>M[i];
        if(i>0 && M[i]<=M[i-1])
            continue;
        i++;
    }
    cout<<"Du lieu ban vua nhap:\n";
    for(int i=0;i<n;i++)
        cout<<M[i]<<"\t";
    return 0;
}