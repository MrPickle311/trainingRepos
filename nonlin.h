#ifndef __NONLIN_H__
#define __NONLIN_H__
#include <iostream>
//  rozwiazuje rownanie   pf(x)=0 metoda bisekcji
//  a,b to granice przedzialu, w ktorym poszukuje sie pierwiastka
//  UWAGA: musi byc spelniony warunek:
//  pf(a)*pf(b) <= 0 (jesli nie jest spelniony zwracana jest wartosc 0, liczba iteracji wynosi -1)
//  jesli warunek jest spelniony
//    wartosc zwracana = liczba iteracji uzytych dla znalezienia pierwiastka
//    x  = poszukiwany pierwiastek okreslony z dokladnoscia "eps"

using INT = uint_fast32_t; // typ ca³kowity bez znaku szybkiego dostêpu(4 bajtowy)

long double bisec( long double from, long double to, long double (*pf)(long double), long double precision, 
	INT& iterNmbr);

#endif __NONLIN_H__