#include <stdio.h>
#include <ctype.h>
#include "MyFunctions/functions.h"

int main() {
    // to store the execution time of code
    double time_spent = 0.0; //degisken
    clock_t begin = clock();
    // çalışma zamanını ölçmek istediğimiz fonsiyonu burada çağırıyoruz 

    int sayi=0;
    printf("lutfen bir ile 100 arasi sayi giriniz");
    scanf("%d \n", &sayi);
    int sayi2 = tutulanSayi(sayi, 100, 1);
    printf("%d\n", sayi2);

    clock_t end = clock();
 
    // (end - begin) den çıkartdığımızda çalışma zamanını buluruz.
    // saniye ye çevirmek için CLOCKS_PER_SEC değişkenine böleriz
    time_spent += (double)(end - begin) / CLOCKS_PER_SEC;
    printf("The elapsed time is %f seconds", time_spent);

    return 0;
}
