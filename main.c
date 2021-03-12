#include <stdio.h>
#include <math.h>


void mantissa(signed int n){
    int mantis, exponent;
    double output;
    exponent = n >>12;
    if (exponent !=0){
    mantis = n & 0b0001111111111;
        if (n & 0b0000100000000000){
        
        mantis |= 1<<11;
        mantis &= ~(1<<12);
        }
        else{
        mantis |= 1<<12;
        mantis &= ~(1 << 11);
        }
    output = (double)mantis*pow(2, exponent-25);
    }
    else{
        mantis = n & 0b0000111111111111;
        output = (double)mantis*pow(2, -24);
    }
	printf("output %.15f", output);
}

int main(){
	mantissa(10.99999999);
	return 0; 
}