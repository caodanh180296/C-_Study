// Số hoàn thiện, 6 có ước số là 1,2,3, và tổng ước số bằng nó
#include <iostream>
using namespace std;

int main(int argc, char** argv){
   int n;
   cout<<"Nhap so phan tu:";
   cin>>n;
   int M[n];
   for(int i=0;i<n;i++){
       cout<<"M["<<i<<"]=";
       cin>>M[i];
   }
   cout<<"Mang sau khi nhap:\n";
   for (int i=0;i<n;i++){
       cout<<M[i]<<"\t";
   }
   int max=M[0];
   for(int i=1;i<n;i++){
       if(M[i]>max){
           max=M[i];
       }
   }
   cout<<"Max="<<max<<endl;
  int min=M[0];
   for(int i=1;i<n;i++){
       if(M[i]<min){
           min=M[i];
       }
   }
   cout<<"min="<<min<<endl;
    int sum=0;
     for(int i=1;i<n;i++){
       sum=sum+M[i];
       }
   cout<<"sum="<<sum<<endl;
   
   return 0;
}