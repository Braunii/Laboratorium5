// Do��czenie bibliotek
#include <stdio.h>
#include <stdlib.h>
// Funkcja g��wna
int main()
{
    // Definicja zmiennej
    int wiek;
    // Pobranie wieku od u�ytkownika
    printf("Podaj swoj wiek: ");
    scanf("%d", &wiek);
    // Warunek sprawdzaj�cy kategori� wiekow� u�ytkownika
    if (wiek >= 0 && wiek <= 12){
        printf("Jestes dzieckiem!\n");
    }
    else if (wiek >= 13 && wiek <= 17){
        printf("Jestes nastolatkiem!\n");
    }
    else if (wiek >= 18){
        printf("Jestes dorosly!\n");
    }
    else {
        printf("Podaj prawidlowy wiek!\n");
    }
    // Zatrzymanie konsoli
    system("pause");
    // Zwr�cenie 0
    return 0;
}
