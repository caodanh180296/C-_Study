#include <iostream>
#include <time.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>

using namespace std;

struct Diem{
    double x;
    double y;
};
double KhoangCach(Diem a, Diem b);
{
    return sqrt(pow(a.x-b.x,2)+pow(a.y-b.y.2));
}

double DoDaiCacDiem(Diem []arrDiem, n);


int main(int argc, char** argv){
    Diem a;
    a.x=9;
    a.y=2;
    Diem b;
    b.x=0;
    b.y=4;
    double kc=KhoangCach(a,b);
    cout<<"Khoang cach tu A den B"<<kc<<endl;


}