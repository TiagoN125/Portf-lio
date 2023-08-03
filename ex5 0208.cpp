#include <iostream>
#include <string>
#include <vector> // Incluindo a biblioteca vector

int main() {
    // Declarando o vetor de siglas dos países usando vector
    std::vector<std::string> paises = {"USA", "CHN", "SWE", "USA", "GER", "CAN", "FRA"};

    // Lendo a sigla digitada pelo usuário
    std::string sigla;
    std::cout << "Digite a sigla do país que deseja verificar: ";
    std::cin >> sigla;

    // Verificando se a sigla está presente no vetor
    bool encontrou = false;
    for (const std::string& pais : paises) {
        if (sigla == pais) {
            encontrou = true;
            break;
        }
    }

    // Exibindo o resultado
    if (encontrou) {
        std::cout << "A sigla está presente no vetor." << std::endl;
    } else {
        std::cout << "A sigla NÃO está presente no vetor." << std::endl;
    }

    return 0;
}
