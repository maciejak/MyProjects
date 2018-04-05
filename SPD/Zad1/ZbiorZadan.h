//
// Created by maciej on 28.02.18.
//

#ifndef ZAD1_ZBIORZADAN_H
#define ZAD1_ZBIORZADAN_H

#include "Zadanie.h"
#include <vector>



class ZbiorZadan {
private:
    std::vector<Zadanie> *WektorZadan;
    std::vector<int> *wekS;
    std::vector<int> *wekC;

    Zadanie& GetElementWektora(int) const;

    void SetElementWektora(int&,Zadanie&);
    void setWektorZadan(std::vector<Zadanie> *WektorZadan);

    void GenerujWektory();
    void S();
    void C();
    int LElem;

    int licznik;
public:
    ZbiorZadan();
    virtual ~ZbiorZadan();

    //zadania na SPD***************

    /// Algorytm sortR polegajacy na sortowaniu zadan ze wzgledu na r, uzyto sortowania babelkowego.
    void sortR();

    /// Algorytm 2 opt
    void alg2opt();

    /// Funkcja celu obliczajaca Cmax dla zbioru zadan
    /// \return Cmax czyli moment skonczenia ostatniego zadania.
    int fCelu();

    /// Algorytm S(Schrage) obliczajacy permutacje czesciowa
    /// \return Zwraca Cmax(to ma sie zmienic bo na razie algorytm dziala na kopiach wektorow.
    int Schrage();

    /// Algorytm S (Schrage z powtorzeniami)
    /// \return Zwraca Cmax tak jak funkcja Schrage().
    int SchragePrmt();


    //************************
    int getLElem() const;
    void setLElem(int LElem);


    /// Funkcja dodajaca gotowe zadanie do wektora(Dodaje kopie juz stworzonego.
    void Dodaj(Zadanie);

    /// Funkcja wypisujaca informacje o zadaniach w formacie:
    /// "r = czas_przygotowania, p = czas_wykonania, q = czas_dostarczenia"
    void wypisz();

    /// Funkcja zamieniajaca miejscami 2 elementy wektora zadan.
    void zamien(int,int);

};





#endif //ZAD1_ZBIORZADAN_H