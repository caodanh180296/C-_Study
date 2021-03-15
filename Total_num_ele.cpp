// Số hoàn thiện, 6 có ước số là 1,2,3, và tổng ước số bằng nó
#include <iostream>
using namespace std;

int main(int argc, char** argv){
   int n;
   cout<<"Nhap n";
   cin>>n;
   int sum=0;
   do{
       int sd=n%10;
       n=n/10;
       sum=sum+sd;
   }
   while(n>0);
   cout<<"Vay tong cac chu so="<<sum;   
   
   return 0;
}