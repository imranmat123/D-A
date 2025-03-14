#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#include <assert.h>
#include <time.h>
#include <math.h>
//1,1,2,3,5,8, 13

int fibi(int n){
    if(n>=3){
        return fibi(n-1) + fibi(n-2);
    }else{
        return 1;
    }

}
//5 = 5x4x3x2x1
//n! = (n-1)*(n-2)

//24 = 4 * 3
//6 = 3 * 2
//2 = 2 * 1
//1 = 1 * 1
//1 = 1 * 1
int fact(int n){
    if(n <= 1){
        return 1;
    }else{
        return (n-1) * fact(n-1);
    }
}

void ReverseAString(char* n){
    if(*n == '\0'){
        return;
    }else{
        ReverseAString(n +1);
        printf("%c", *n);
    }
}

int power(int base, int exponent){

    if(exponent == 1 ){
        return 1;
    } else{
        return base * power(base, exponent -1);
    }
}


int SumDigits(int n){
    if(n % 10 <= 0){
        return n;
    }else{
        int a = n % 10;
        return a + SumDigits(n / 10);
    }
}

int GCD(int a, int b){
    if(b == 0){
        return a;
    }else{
        GCD(b,a%b);
    }
}

void pal(char* a, char* b){

    if(a >= b){
        printf("it is a pal");
        return;
    }else if(*a != *b){
        printf("not a pal");
        return;
    }else{
        pal(&a[+1], &b[-1]);
    }
}

int main() {

    char a[] = "racecar";
    pal(a,&a[6]);

    return 0;
}








