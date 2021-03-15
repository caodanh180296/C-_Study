#include <iostream>
using namespace std;

int main(int argc, char** argv){
    int i,j;
    int **p =new int*[5];
    for(int i =0; i<5; i++){
        p[i]=new int[7]; //*(p+i)=new int[7]
    
    }
    for (int i=0; i<5;i++){
        for (j=0; j<7; j++){
            p[i]p[j]=i+j; // *(*(p+i)+j)=i+j
        }
    }

    for (int i=0; i<5;i++){
        for (j=0; j<7; j++){
           count<<*(*(p+i)+j)<<"\t"<<endl;
        }
    }
    // HUY BO NHO

    for (int i=0; i<5;i++){
        delete *(p+i);
        *(p+i)=NULL;        
    }
    delete p;
    p=NULL;
    return 0;

}