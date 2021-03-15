// Số hoàn thiện, 6 có ước số là 1,2,3, và tổng ước số bằng nó
#include <iostream>
using namespace std;

int main(int argc, char** argv){
  int h;
  cout<<"Moi ban nhap chieu cao:";
  cin>>h;
  for(int i=0;i<h;i++){
      for(int j=0; j<h;j++)
      {
          if((j==0&&i<=h/2) ||(j==h-1&&i>=h/2) ||i==j||i==h/2){
              cout<<"*";
          }
          cout<<" ";
      }
      cout<<"\n";
  }
   
   return 0;
}