#include <iostream>
#include <vector>

int main() {
    // Declarando o vetor de alturas
    std::vector<float> alturas(6);

    // Lendo as alturas das jogadoras
    std::cout << "Digite as alturas das jogadoras (em metros): " << std::endl;
    for (int i = 0; i < 6; i++) {
        std::cout << "Jogadora " << (i + 1) << ": ";
        std::cin >> alturas[i];
    }

    // Encontrando a maior e a menor altura
    float maior_altura = alturas[0];
    float menor_altura = alturas[0];
    for (int i = 1; i < 6; i++) {
        if (alturas[i] > maior_altura) {
            maior_altura = alturas[i];
        }
        if (alturas[i] < menor_altura) {
            menor_altura = alturas[i];
        }
    }

    // Exibindo a maior e a menor altura
    std::cout << "A maior altura é: " << maior_altura << " metros" << std::endl;
    std::cout << "A menor altura é: " << menor_altura << " metros" << std::endl;

    return 0;
}
