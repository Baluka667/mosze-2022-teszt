#include <iostream>

constexpr int N_ELEMENTS = 100;

int main()
{
    int *b = new int[N_ELEMENTS];//NELEMENTS volt irva N_ELEMENTS HELYETT
    std::cout << "1-100 ertekek duplazasa"<<endl;// stringet "" koze teszunk es "<<endl;" hianya
    for (int i = 0; i<N_ELEMENTS; i++)//" i<N_ELEMENTS; i++" hianya
    {
        b[i] = (i+1) * 2;//mivel 0- indult az elso adat mielott megszorozzuk hozza kell adni 1-et
    }
    for (int i = 0; i<N_ELEMENTS; i++) // "<N_ELEMENTS" hianya
    {
        std::cout << "Ertek:"<<b[i]<<std::endl;// "<<b[i]<<std::endl;" hianya
    }    
    std::cout << "Atlag szamitasa: " << std::endl;
    int atlag;
    for (int i = 0; i < N_ELEMENTS; i++)//pontos vesszo helyett szimpla vesszo
    {
        atlag += b[i];// pontos vesszo hianya
    }
    atlag /= N_ELEMENTS;
    std::cout << "Atlag: " << atlag << std::endl;
    return 0;
    std::cout << "valami" << std::endl;   
}
