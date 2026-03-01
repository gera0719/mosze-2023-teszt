#include <iostream>

constexpr int N_ELEMENTS = 100;

int main()
{
    //HIBA: helytelen nev a konstansra valo hivatkozaskor
    int *b = new int[NELEMENTS];
    //HIBA: rossz idezojel + lemaradt << std::endl;
    std::cout << '1-100 ertekek duplazasa'
    //HIBA: lemaradt ciklus feltetel
    //HIBA: lemaradt a ciklusvaltozo modositas
    for (int i = 0;)
    {
        //HIBA: i+1 i helyett, mivel 0-tol kezdodik a ciklus
        b[i] = i * 2;
    }
    //HIBA: rossz ciklusfeltetel, igy egyszer sem fut le
    for (int i = 0; i; i++)
    {
        //HIBA: hianyzik a kiirando ertek + std::endl;
        std::cout << "Ertek:"
    }    
    std::cout << "Atlag szamitasa: " << std::endl;
    //HIBA: atlag nincs inicializalva
    int atlag;
    //HIBA: , helyett ; a ciklusfeltetel utan
    for (int i = 0; i < N_ELEMENTS, i++)
    {
        //HIBA: hianyzik a pontosvesszo
        atlag += b[i]
    }
    //HIBA: igy egesz osztas lesz
    atlag /= N_ELEMENTS;
    std::cout << "Atlag: " << atlag << std::endl;

    //memoriafelszabaditas hianyzik -> delete[] b

    return 0;
}
