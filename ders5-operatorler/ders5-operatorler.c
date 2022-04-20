#include <stdio.h>
#include <conio.h>

int main()
{
    //1. Aritmetik Operatörler (Arithmetic Operators) + - / * % ... "%" mod anlamına gelir 
    //2. Artış ve Azaltma Operatörleri (Increment and Decrement Operators) ++a a++
    //3. İlişkisel Operatörler (Relational Operators) == != >= <=
    //4. Mantıksal Operatörler (Logical Operators) & || !=  ...  & = ve , || = veya , != ya da

    //1.
    /*
    const int a = 15;
    const int b = 20;
    int c;

    c = a + b;
    printf("%d\n" , c);

    c = a - b;
    printf("%d\n" , c);

    c = a * b;
    printf("%d\n" , c);

    c = a / b;
    printf("%d\n" , c);

    c = b % a;
    printf("%d\n" , c);
    */

    /*
    int a;
    int b;
    printf("Bir Sayi Girin : ");
    scanf("%d" , &a);
    b = a % 2;
    printf("%d\n" , b);
    */

    //2.
    /*
    int a = 15;
    printf("%d\t" , ++a);
    printf("%d\t" , a++);
    printf("%d" , a);
    */

    //3.
    /*
    int a = 15;
    int b = 10;
    b = b + a;
    printf("%d\n" , b);
    b = b + a; //bu ve altındaki kod aynı anlama gelir - b yi a kadar artır
    printf("%d\n" , b);
    b += a; 
    printf("%d" , b);
    //b += a } b yi a kadar artır
    //b -= a } b den a yı çıkar
    //b *= a } b yi a ile çarp
    //b /= a } b yi a ya böl
    //b %= a
    */

    /*
    int a = 15;
    int b = 10;
    printf("%d" , a == b); //a eşit midir b'ye sorusunu sorar ve önerme doğruysa 1, yanlışsa 0 çıktısını verir
    printf("%d" , a != b); //a eşit değil midir b'ye
    printf("%d" , a <= b); //a küçük müdür b'den
    printf("%d" , a >= b); //a büyük müdür b'den
    */

    //4.
    /*
    int a = 15;
    int b = 10;
    int c = 5;
    printf("%d" , (a <= b) & (c == b));
    printf("%d" , (a >= b) & (c == b));
    printf("%d" , (a >= b) & (c != b));

    printf("%d" , (a >= b * c) || (c != b));
    */

    getch();
}