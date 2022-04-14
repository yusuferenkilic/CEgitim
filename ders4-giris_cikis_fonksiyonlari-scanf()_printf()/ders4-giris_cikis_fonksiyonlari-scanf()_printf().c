#include <stdio.h>
#include <conio.h>

int main()
{
    //----------------------  printf()  ----------------------//
    /*
    char isim[10] = "Yusuf";
    char soyisim[10] = "Eren";
    char sehir[10] = "Samsun";
    int sayi = 6457;
    printf("%s\t" , isim);
    printf("%s\n" , soyisim);
    printf("%s\n" , sehir);
    printf("%d" , sayi);
    */

    /*
    \b	Backspace - bir karakteri siler
    \f	Form feed
    \n	Newline - alt satıra geçer
    \r	Return - önceki değerlerin çıktısını vermez
    \t	Horizontal tab
    \v	Vertical tab
    \\	Backslash - slash yazmak için kullanılır
    \'	Single quotation mark - tek tırnak yazmak için kullanılır
    \"	Double quotation mark - çift tırnak yazmak için kullanılır
    \?	Question mark - soru işareti yazmak için kullanılır
    \0	Null character - boş karakter bırakmak için kullanılır
    */


    //----------------------  scanf()  ----------------------//
    
    char isim[15];
    char soyad[15];
    printf("Adiniz : ");
    scanf("%s" , &isim);
    printf("Soyadiniz : ");
    scanf("%s" , &soyad);

    printf("Adiniz ve Soyadiniz : %s %s" , isim , soyad);

    getch();
}