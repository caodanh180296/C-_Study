#include <iostream>
using namespace std;
void swap(double *&pa, double *&pb);

int main(int argc, char** argv){
    int i,j;
    double a=5.5;
    double b=6.5;
    swap(a,b);
    cout<<"a="<<a<<"\tb="<<b;
        

}
void swap(double *&pa, double *&pb){
    double temp=*pa;
    *pa=*pb;
    *pb=temp;
}