#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
#include <unistd.h>
#include "MyFunctions/functions.h"


int main() {
    // to store the execution time of code
    double time_spent = 0.0;






    
    int sayi1,sayi2;
    printf("İki faklı sayi girin");
    scanf("%d %d", &sayi1, &sayi2);

    clock_t begin = clock();
    
    int sonuc = ebob(sayi1, sayi2);
    printf("ebob(%d,%d) = %d\n", sayi1, sayi2, sonuc);

    clock_t end = clock();

    // calculate elapsed time by finding difference (end - begin) and
    // dividing the difference by CLOCKS_PER_SEC to convert to seconds
    time_spent += (double)(end - begin) / CLOCKS_PER_SEC;

    printf("The elapsed time is %f seconds", time_spent);

    return 0;
}
