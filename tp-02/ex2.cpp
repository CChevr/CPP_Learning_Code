#include "Histogram.h"
#include <iostream>
#include<string>

int main() {
    std::string chaine;
    std::string conc;
    Histogram h;

    do 
    {
        std::cin >> chaine;
        conc += chaine;
    } while(chaine != "QUIT");


    h.analyze(conc);
    h.print();

    Histogram h1, h2;
    Histogram h3 { Histogram { h1 } };

    return 0;
}