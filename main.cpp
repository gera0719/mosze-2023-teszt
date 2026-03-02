#include <iostream>

constexpr int N_ELEMENTS = 100;

int main()
{
    //FIXED: helytelen nev a konstansra valo hivatkozaskor
    int *b = new int[N_ELEMENTS];
    //FIXED: rossz idezojel + lemaradt << std::endl;
    std::cout << "1-100 ertekek duplazasa" << std::endl;
    //FIXED: lemaradt ciklus feltetel
    //FIXED: lemaradt a ciklusvaltozo modositas
    for (int i = 0; i < N_ELEMENTS; i++)
    {
        //FIXED: i+1 i helyett, mivel 0-tol kezdodik a ciklus
        b[i] = (i+1) * 2;
    }
    //FIXED: rossz ciklusfeltetel, igy egyszer sem fut le
    for (int i = 0; i < N_ELEMENTS; i++)
    {
        //FIXED: hianyzik a kiirando ertek + std::endl;
        std::cout << "Ertek:" << b[i] << std::endl;
    }    
    std::cout << "Atlag szamitasa: " << std::endl;
    //FIXED: atlag nincs inicializalva
    int atlag = 0;
    //FIXED: , helyett ; a ciklusfeltetel utan
    for (int i = 0; i < N_ELEMENTS; i++)
    {
        //FIXED: hianyzik a pontosvesszo
        atlag += b[i];
    }
    //FIXED: igy egesz osztas lesz
    atlag /= (double)N_ELEMENTS;
    std::cout << "Atlag: " << atlag << std::endl;

    //FIXED: memoriafelszabaditas hianyzik -> delete[] b
    delete[] b;
    std::cout << "Teszt" << std::endl;
    return 0;
}
