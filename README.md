# myCproject - Algoritma analizi dersinde yazdığım kodları içermektedir.
## fonksiyonlar **MyFunctions/functions.h** header dosyasından çağrılmakta ve 'main.c' dosyasında kullanılmaktadır.

`double time_spent = 0.0; //degisken
 clock_t begin = clock();
 // çalışma zamanını ölçmek istediğimiz fonsiyonu burada çağırıyoruz
 
 clock_t end = clock();
 
 // (end - begin) den çıkartdığımızda çalışma zamanını buluruz.
 // saniye ye çevirmek için CLOCKS_PER_SEC değişkenine böleriz
 time_spent += (double)(end - begin) / CLOCKS_PER_SEC;

 printf("The elapsed time is %f seconds", time_spent);`
