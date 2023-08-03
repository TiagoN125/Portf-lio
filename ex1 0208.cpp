#include <iostream>
#include <vector>
#include <algorithm> // Para usar a função sort

int main() {
    // Declarando o vetor de países
    std::vector<std::string> paises = {"Estados Unidos", "Alemanha", "Noruega", "Japão", "Suécia"};

    // Ordenando o vetor em ordem alfabética
    std::sort(paises.begin(), paises.end());

    // Exibindo os países em ordem alfabética
    std::cout << "Países vencedores da Copa do Mundo Feminina (em ordem alfabética):\n";
    for (const std::string& pais : paises) {
        std::cout << pais << std::endl;
    }

    return 0;
}
