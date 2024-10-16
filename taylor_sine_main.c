#include <stdio.h>
#include <math.h>
#include "taylor_sine.h"


int main () {
    int n = 10;

    double pi = 3.14;
    printf("sin(pi) = %f\n", sin(pi)); //0.001593
    printf("taylor_sine(pi)= %f\n", taylor_sine(pi,n)); //0.001593

    double x1 = -1000;
    printf("sin(x1) = %f\n", sin(x1)); //-0.826880
    printf("taylor_sine(x1)= %f\n", taylor_sine(x1,n)); // 8217824553925791958046095933685836546048.000000

    double x2 = 0;
    printf("sin(x2) = %f\n", sin(x2)); // 0
    printf("taylor_sine(x2)= %f\n", taylor_sine(x2,n)); // 0

    double x3 = 1;
    printf("sin(x3) = %f\n", sin(x3)); //0.841471
    printf("taylor_sine(x3)= %f\n", taylor_sine(x3,n)); //0.841471

    double x4 = 1000;
    printf("sin(x4) = %f\n", sin(x4)); //0.826880
    printf("taylor_sine(x4)= %f\n", taylor_sine(x4,n)); //-8217824553925791958046095933685836546048.000000

    return 0;
}