#include <iostream>
#include <vector>

int main() {
    // Declarando o vetor de datas dos jogos
    std::vector<int> datas = {2, 5, 9, 12, 17, 22};

    // Invertendo a ordem das datas no vetor
    std::vector<int> datas_invertidas;
    for (int i = datas.size() - 1; i >= 0; i--) {
        datas_invertidas.push_back(datas[i]);
    }

    // Exibindo o vetor resultante com as datas invertidas
    std::cout << "Vetor de datas invertidas:\n";
    for (int data : datas_invertidas) {
        std::cout << data << " ";
    }
    std::cout << std::endl;

    return 0;
}
