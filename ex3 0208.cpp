#include <iostream>
#include <vector>

int main() {
    // Declarando o vetor de idades
    std::vector<int> idades(10);

    // Lendo as idades dos jogadoras
    std::cout << "Digite as idades das jogadoras: " << std::endl;
    for (int i = 0; i < 10; i++) {
        std::cout << "Jogadora " << (i + 1) << ": ";
        std::cin >> idades[i];
    }

    // Calculando a média das idades
    int soma = 0;
    for (int idade : idades) {
        soma += idade;
    }
    double media = static_cast<double>(soma) / idades.size();

    // Exibindo a média das idades
    std::cout << "A média das idades das jogadoras é: " << media << std::endl;

    return 0;
}
