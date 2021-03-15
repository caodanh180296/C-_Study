// Doan so 7 lan
#include <iostream>
#include <time.h>
#include <stdlib.h>

using namespace std;

int main(int argc, char** argv){
   srand(time(NULL)); // ra different random num
   while(true){
    int somay=1+rand()%100 // max rand()%100 la ra 99
   cout<<"Chuong trinh doan so\n";    
   bool iswin=false;
   int solandoan=0;
   do{
    count<<"May da doan so [1..100], doan di\n";
    int songuoi;
    cin>>songuoi;
    solandoan++;
    cout<<"Bandoanlanthu "<<solandoan<<endl;

    if(songuoi==somay){
        cout<<"Good,so may"<<somay<<endl;
        iswin=true;
        break;
    }
    else if (songuoi>somay){
        cout<<"ban doan sai, so nguoi>somay"<<endl;
    }
    else  (songuoi<somay){
        cout<<"ban doan sai, so nguoi<somay"<<endl;
    }
    if(solandoan==7)
        break;
    } while(true)
    if(iswin!=true)
    {
        cout<<"Game Over\n";
        cout<<"So cua may="<<somay<<endl;
    }
    cout<<"Choi tiep ko(c/k):";
    char c;
    cin>>c;
    if(c=='k')
        break;
}
cout<<"Good Bye"<<end;
   return 0;
}