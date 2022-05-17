#include <stdio.h>
#include <conio.h>

int main()
{
    int bolunen;
    int bolen;
    int bolum;
    int kalan;

    printf("Bir sayi girin : ");
    scanf("%d" , &bolunen);

    printf("Bir sayi girin : ");
    scanf("%d" , &bolen);

    bolum = bolunen / bolen;
    kalan = bolunen % bolen;

    printf("Bolum = %d\n" , bolum);
    printf("Kalan = %d" , kalan);

    getch();
}