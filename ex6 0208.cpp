#include <iostream>
#include <vector>

int main() {
    // Declarando o vetor de gols marcados pela seleção
    std::vector<int> gols = {3, 2, 1, 4, 2};

    // Calculando o total de gols marcados pela seleção
    int total_gols = 0;
    for (int gol : gols) {
        total_gols += gol;
    }

    // Exibindo o total de gols marcados pela seleção
    std::cout << "Total de gols marcados pela seleção: " << total_gols << std::endl;

    return 0;
}
