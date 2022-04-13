#include <stdio.h>
#include <conio.h>

int main()
{
    
    //----------------------SAYI DEĞİŞKELERİ----------------------//
    /*
    int sayi1 = 10; //sadece bu olsaydı *10* yazardı
    sayi1 = 15; //burada *10* değerini *15'e* eşitlediği için *15* değeri yazılır
    sayi1 = -99; //burada da *15* değerini *-99* değerine eşitliyor ve çıktı olarak *-99* değerini veriyor
    //kodlar yukarıdan aşağıya doğru okunduğu için bu durumlar oluşuyor
    printf("%d" , sayi1); //%d ekranda int değerini göreceğimiz anlamına gelir
    */

    /*
    float sayi2 = 10;
    sayi2 = 15;
    sayi2 = -99.15;
    printf("%f" , sayi2); //float değeri okutacağımız için %f yazıyoruz
    */

    /*
    double sayi3 = 10;
    sayi3 = 15;
    sayi3 = -99.15; 
    printf("%lf" , sayi3); //double değeri görmek için %f yazsak da olur %lf yazsak da olur
    */

    /*
    double sayi4 = 10;
    sayi4 = 15;
    sayi4 = -99.1531789564267627;
    printf("%.10lf" , sayi4); //%.10 , noktadan sonraki 10 basamağı göster demektir
    */


    //----------------------YAZI DEĞİŞKELERİ----------------------//
    /*
    char yazi1 = 'A'; //tek karakter yazdırılacak ise tek tırnak ('') içerisinde yazılırlar
    printf("%c" , yazi1); //char değişkeni yazdırılacağı için *%c* kullanılır
    */

    /*
    char yazi2[] = "Yusuf"; //birden fazla harf için dizi oluşturduk
    printf("%s" , yazi2); //ekranda char değeri değil string değeri görmek istediğimiz için *%c* yi *%s* olarak değiştiriyoruz
    */

    /*
    char yazi3[10] = "Yusuf"; //10 basamaklı bir dizin oluşturur ve girilen değerleri yazar. 
    printf("%s" , yazi3);
    */

    /*
    char isim1[10] = "faruk"; //char değerlerinde bütün değişim yapılamıyor. İlk satırda 10 karakterli bir dizin oluşturuldu ve içerisine "faruk" yazıldı.
    isim1[0] = 'F'; //İkinci satırda ise 10 karakterli dizin olan isim değişkeninin 0. karakteri olan 'f' harfini 'F' olarak değiştirmiştir.
    printf("%s" , isim1);
    */

    /*
    printf("Yusuf\nEren"); //buradaki "\n" , 'new line' anlamına gelir ve alt satıra geçerek yazıcağını yazmaya devam eder.
    printf("Yusuf\tEren"); //"\t" ise 'TAB' kadar boşluk bırak anlamına geliyor. Yaklaşık 3-4 space mesafesi kadar
    */


    //----------------------    SABİTLER    ----------------------//
    /*
    const int a = 15;
    //a = 40; kod burada hata verecektir çünkü değerin başına const ifadesini eklediğimiz zaman o değer artık değiştirlemez, salt okunur oluyor.
    printf("%d" , a); 
    */


    getch();
    return 0;
}