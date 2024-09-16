#include <iostream>

constexpr int N_ELEMENTS = 100;

int main()
{
    int *b = new int [N_ELEMENTS];  //NELEMENTS módosítása
    std::cout << "1-100 ertekek duplazasa"; //; hianya
    for (int i = 0;i<N_ELEMENTS;i++)    //ciklus befejezése
    {
        b[i] = i * 2;
    }
    for (int i = 0; i<N_ELEMENTS; i++)  //Hiányos for ciklus
    {
        std::cout << "Ertek:"<<b[i]<<std::endl; //Hiányos kiíratás
    }    
    std::cout << "Atlag szamitasa: " << std::endl;
    int atlag=0;    //Átlag 0-zása
    for (int i = 0; i < N_ELEMENTS; i++)    //; hiányzott
    {
        atlag += b[i];
    }
    atlag /= N_ELEMENTS;
    std::cout << "Atlag: " << atlag << std::endl;
    return 0;
}
