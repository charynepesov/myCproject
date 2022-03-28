//
// Created by nepes on 3/17/2022.
//
#include <stdlib.h>
#include <stdio.h>
#include <time.h>       // for clock_t, clock(), CLOCKS_PER_SEC
#include <unistd.h>     // for sleep()
#include <math.h>

#ifndef MYCPROJECT_FUNCTIONS_H
#define MYCPROJECT_FUNCTIONS_H

#endif //MYCPROJECT_FUNCTIONS_H

//n inci sıradaki fibonacci sayısını hesaplar
int fibonacci(int n) {
    if (n <= 1) return n;
    else return fibonacci(n-1) + fibonacci(n-2);
}
/* 0 1 1 2 3, 5 8 13 21 34 */
int fibonacciIterative(int n) {
    if(n <= 1) return n;
    int fibo = 0, sayi1 = 0, sayi2 = 1;
    for(int i=0; i < n-2; i++) {
        fibo = sayi1 + sayi2;
        sayi1 = sayi2;
        sayi2 = fibo;
    }
    return fibo;
}

/* Recursive olarak ebob bulma*/
int ebob(int x, int y) { 
    if (x == y) return x;
    if (x > y) return ebob(x - y, y);
    return ebob(x, y - x);
}

//int sayiUret(int number) {
//    int numberArray[number];
//    for (int i = 0; i < number; i++) {
//        numberArray[i] = rand();
//    }
//    return numberArray;
//}

int max_diff(int n[]) {
    int min = n[0];
    int max = n[0];
    for(int i = 1; i < 1000; i++) {
        if(n[i] < min) min = n[i];
        else if (n[i] > max) max = n[i];
    }
    return max - min;
}

int max_diff2(int n[]) {
    int m = 0;
    for(int i=1; i < 999; i++) {
        for(int j=i+1; j<1000; j++) {
            if(abs(n[i]-n[j]) > m) m = abs(n[i]-n[j]);
        }
    }
}

int tutulanSayi(int n, int buyuk, int kucuk) {
    if(n == buyuk) return buyuk;
    if(n == kucuk) return kucuk;
    if(n >= buyuk/2) {
        return tutulanSayi(n, buyuk, buyuk/2);
    }
    else if(n <= buyuk/2){
        return tutulanSayi(n, buyuk/2, kucuk);
    }
}

int theBiggestOfTwoNumbers(int a, int b) {
    if(a > b) return a;
    else return b;
}
