// tinh S=x^1/1!+x^2/2!....

#include <iostream>
#include <math.h>
using namespace std;

int main(int argc, char**argv){
    double x;
    int n;
    double s=0;
    cout<<"Nhap x:";
    cin>>x;
    cout<<"Nhap n:";
    cin>>n;
    for (int i=1; i<=n;i++){
        double tu=pow(x,i);
        int mau=1; //Hoặc đưa mẫu khai báo ra ngoài, 1 vòng lặp, mẫu= mẫu*i
        for(int j=1; j<=i;j++) //Chạy phía mẫu cho tới i để nhân giai thừa
        {
            mau=mau*j;
        }
        s=s+tu/mau;
    }
    cout<<"s{"<<x<<","<<n<<")="<<s;
    
    return 0;
}