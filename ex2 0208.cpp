#include <iostream>
#include <vector>
#include <string>

int main() {
    // Declarando o vetor de títulos dos países
    std::vector<int> titulos = {3, 2, 0, 1, 0, 4, 0, 2};

    // Declarando um vetor de nomes dos países
    std::vector<std::string> paises = {
        "Estados Unidos", "Alemanha", "Noruega", "Suécia",
        "Brasil", "Japão", "Canadá", "Inglaterra"
    };

    // Exibindo os países que nunca venceram o torneio
    std::cout << "Países que nunca venceram a Copa do Mundo Feminina:\n";
    for (size_t i = 0; i < titulos.size(); i++) {
        if (titulos[i] == 0) {
            std::cout << paises[i] << std::endl;
        }
    }

    return 0;
}
