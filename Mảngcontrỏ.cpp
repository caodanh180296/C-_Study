#include <iostream>
using namespace std;

int main(int argc, char** argv){
    int *p[5]; // khai báo mảng con trỏ thì các phần tử của nó cũng là con trỏ, nên phải khai báo bộ nhớ
    for(int i=0; i<5;i++){
        p[i]=new int; // nếu ko cấp phát bộ nhớ sẽ bị lỗi vì mảng con trỏ
        *p[i]=i*2;
    }
    for(int i=0;i<5;i++){
        cout<<p[i]<<"coketqua"<<*p[i]<<endl;
    }
    return 0;

}