#include <iostream>
#include <vector>

int main() {
    // Declarando o vetor de espectadores presentes em cada jogo
    std::vector<int> espectadores = {45000, 60000, 75000, 30000, 90000, 55000, 80000, 100000, 35000, 40000};

    // Contando o número de jogos com público superior a 50.000 espectadores
    int jogos_mais_de_50_mil = 0;
    for (int espectador : espectadores) {
        if (espectador > 50000) {
            jogos_mais_de_50_mil++;
        }
    }

    // Exibindo o resultado
    std::cout << "Número de jogos com público superior a 50.000 espectadores: " << jogos_mais_de_50_mil << std::endl;

    return 0;
}