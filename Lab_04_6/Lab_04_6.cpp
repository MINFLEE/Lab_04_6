// Lab_04_6.cpp
// Котович Максим Михайлович
// Лабораторна робота № 4.6
// Вкладені цикли.
// Варіант 20

#include <iostream>
#include <cmath>

using namespace std;

int main() 
{
    double P, S;
    int i, k;

    P = 1;
    i = 5;
    while (i <= 25) 
    {
        S = 0;
        k = 1;
        while (k <= i) 
        {
            S *= k;
            k++;
        }
        P += sqrt(i * i + S) / i;
        i++;
    }
    cout << P << endl;

    P = 1;
    i = 5;
    do 
    {
        S = 0;
        k = 1;
        do 
        {
            S *= k;
            k++;
        } while (k <= i);
        P += sqrt(i * i + S) / i;
        i++;
    } while (i <= 25);
    cout << P << endl;

    P = 1;
    for (i = 5; i <= 25; i++) 
    {
        S = 0;
        for (k = 1; k <= i; k++) 
        {
            S *= k;
        }
        P += sqrt(i * i + S) / i;
    }
    cout << P << endl;

    P = 1;
    for (i = 25; i >= 5; i--) 
    {
        S = 0;
        for (k = i; k >= 1; k--) 
        {
            S *= k;
        }
        P += sqrt(i * i + S) / i;
    }
    cout << P << endl;

    return 0;
}
