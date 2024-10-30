// Do³¹czenie bibliotek
#include <stdio.h>
#include <stdlib.h>
// Funkcja g³ówna
int main()
{
    // Zdefiniowanie zmiennych
    float a;
    float b;
    char op;
    float wynik;

    // Pobranie danych od u¿ytkownika
    printf("Podaj liczbe a: ");
    scanf("%f", &a);

    printf("Podaj liczbe b: ");
    scanf("%f", &b);

    printf("Podaj operacje (+, -, *, /): ");
    scanf(" %c", &op);

    // Instrukcja switch wykonuj¹ca dzia³anie na liczbach
    switch(op){
        case '+':
            wynik = a + b;
            break;
        case '-':
            wynik = a - b;
            break;
        case '*':
            wynik = a * b;
            break;
        case '/':
            if (b != 0){
                wynik = a / b;
            }
            else {
                printf("Pamietaj cholero, nie dziel przez zero!\n");
            }
            break;
        default:
            printf("Podaj wlasciwa operacje!\n");
    }

    // Wyœwietla wynik jeœli wynik istnieje
    if(wynik){
        printf("Wynik: %.2f\n", wynik);
    }
    // Zatrzymanie konsoli
    system("pause");
    // Zwrócenie 0
    return 0;
}
