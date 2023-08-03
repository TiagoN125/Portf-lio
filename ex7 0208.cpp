#include <iostream>
#include <vector>

int main() {
    // Declarando os vetores de gols marcados e gols sofridos
    std::vector<int> gols_marcados = {3, 2, 1, 4, 2};
    std::vector<int> gols_sofridos = {1, 2, 2, 3, 1};

    // Calculando e exibindo o saldo de gols em cada partida
    std::cout << "Partida\tGols Marcados\tGols Sofridos\tSaldo de Gols\n";
    for (int i = 0; i < 5; i++) {
        int saldo_gols = gols_marcados[i] - gols_sofridos[i];
        std::cout << (i + 1) << "\t" << gols_marcados[i] << "\t\t" << gols_sofridos[i] << "\t\t" << saldo_gols << "\n";
    }

    return 0;
}