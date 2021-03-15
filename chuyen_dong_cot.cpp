// chuyen doi ma tran hoan vi, dong thanh cot
// Số hoàn thiện, 6 có ước số là 1,2,3, và tổng ước số bằng nó
#include <iostream>
#include <time.h>
#include <stdlib.h>

using namespace std;

int main(int argc, char** argv){
    srand(time(NULL));
    int m,n, i,j;
    cout<<"Nhap so dong:";
    cin>>m;
    cout<<"Nhap so cot: ";
    cin>>n;
    int M[m][n];
    for(i=0; i<m;i++){
        for(j=0; j<n; j++){
            M[i][j]=rand()%100;
        }
    }
    cout<<"Ma tran sau khi nhap:\n";
    for( i=0; i<m;i++){
        for( j=0; j<n; j++){
            cout<<M[i][j]<<"\t";
        }
        cout<<endl;
    }
    // Giai thuat hoan vi

    int MT[n][m];
    for(i=0; i<m;i++){
        for(j=0; j<n; j++){
            MT[j][i]=M[i][j];
        }
        
    }
     cout<<"Ma tran sau khi hoan vi:\n";
    for(i=0; i<n;i++){
        for(j=0; j<m; j++){
            cout<<MT[i][j]<<"\t";
        }
        cout<<endl;
    }
   
    return 0;
}