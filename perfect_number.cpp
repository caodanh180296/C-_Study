// Số hoàn thiện, 6 có ước số là 1,2,3, và tổng ước số bằng nó
#include <iostream>
using namespace std;

int main(int argc, char** argv){
    int n;
    cout<<"Nhap n:";
    cin>>n;
    int i=1;
    int sum_uoc=0;
    while(i<n){
        if(n%i ==0 )// 1 sô bị chia hết là ước số
        {
            sum_uoc+=1;
        }
        i++;        
    }
    if(sum_uoc==m)
        cout<<n<"La so hoan thien";
    else
        cout<<n<"So ko hoan thien";
    
}