#include <iostream>
#include <string>
#include <vector>

int main() {
    // Declarando o vetor de seleções
    std::vector<std::string> selecoes(8);

    // Preenchendo o vetor com valores digitados pelo usuário
    std::cout << "Digite os nomes das seleções:\n";
    for (int i = 0; i < 8; i++) {
        std::cout << "Seleção " << (i + 1) << ": ";
        std::cin >> selecoes[i];
    }

    // Exibindo os nomes das seleções em ordem inversa
    std::cout << "Nomes das seleções em ordem inversa:\n";
    for (int i = 7; i >= 0; i--) {
        std::cout << selecoes[i] << std::endl;
    }

    return 0;
}
