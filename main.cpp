#include <iostream>

int main() {
    int pvCaseyHudson = 30;
    int pvKojima = 25;

    int attaqueCaseyHudson = 8;
    int attaqueKojima = 5;

    int tour = 1;

    std::cout << "=== Casey Hudson VS Kojima ===" << std::endl;

    // Le combat continue tant que les deux sont en vie
    while (pvCaseyHudson > 0 && pvKojima > 0) {
        std::cout << std::endl << "* Turn " << tour << " *" << std::endl;

        pvKojima = pvKojima - attaqueCaseyHudson;
        std::cout << "Casey Hudson attacks! Kojima has " << pvKojima << " pv left." << std::endl;

        // Kojima est vaincu : il ne peut pas riposter
        if (pvKojima <= 0) {
            break;
        }

        pvCaseyHudson = pvCaseyHudson - attaqueKojima;
        std::cout << "Kojima strikes back! Casey Hudson has " << pvCaseyHudson << " pv left." << std::endl;

        tour = tour + 1;
    }

    std::cout << std::endl;
    if (pvCaseyHudson > 0) {
        std::cout << "Casey Hudson wins!" << std::endl;
    } else {
        std::cout << "Kojima wins!" << std::endl;
    }

    return 0;
}