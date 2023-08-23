#include <iostream> //Grupo 2 - Maxwell Ferreira, João Carlos, Vitor Botelho, Vitor Lucas, Fabio Ribeiro, Tiago Nunes e Danilo Medina
#include <string>
#include <vector>
#include <random>

using namespace std;

struct Question {
    string questionText;
    vector<string> options;
    int correctOption;
    int points;
};

int fazerPergunta(const Question &pergunta) {
    cout << pergunta.questionText << endl;
    for (size_t i = 0; i < pergunta.options.size(); ++i) {
        cout << i + 1 << ". " << pergunta.options[i] << endl;
    }

    int escolhaUsuario;
    cout << "Digite o numero da opcao correta: ";
    cin >> escolhaUsuario;

    if (escolhaUsuario == pergunta.correctOption) {
        cout << "Resposta correta! +" << pergunta.points << " pontos." << endl;
        return pergunta.points;
    } else {
        cout << "Resposta incorreta! Nenhum ponto." << endl;
        return 0;
    }
}

int main() {
    vector<Question> perguntasFaceis = {
        {"Qual o operador de incremento em C++? ", {"++", " += ", " --", " -="}, 1, 1},
         {"O que e o operador ternario em C++?",
     {"1. Um operador usado para realizar operacoes ternarias", 
      "2. Um operador que trabalha apenas com numeros inteiros", 
      "3. Um operador que substitui o if-else em certas situacoes", 
      "4. Um operador utilizado para comparar tres valores"},
     3, 1},
    {"O que e a sobrecarga de funcoes em C++?",
     {"1. Um recurso que permite usar a mesma funcoo para diferentes tipos de dados", 
      "2. Um recurso que permite uma funcao retornar multiplos valores", 
      "3. Um recurso que torna as funcoes mais complexas", 
      "4. Um recurso que permite que funcoes sejam chamadas a partir de varias classes"},
     1, 1},
    {"Qual a diferenca entre uma classe e um objeto em C++?",
     {"1. Classes sao usadas para declarar variaveis, enquanto objetos definem metodos", 
      "2. Classes sao tipos de dados, enquanto objetos sao instancias desses tipos", 
      "3. Classes sao usadas apenas em programacao orientada a objetos, enquanto objetos sao usados em programacao procedural", 
      "4. Classes sao construidas a partir de objetos preexistentes"},
     2, 1},
    
    };

    vector<Question> perguntasFaceisGrupoB = {
        {"Como voce declara um vetor em C++", {" variavel[] = valor;", "Vetor {valores}; ", "array valores;", "tipo nome[tamanho]"}, 4, 1},
        {"Qual operador e usado para acessar o endereco de uma variavel?", {" *", " &", " /", " %"}, 2, 1},
        {"Qual das seguintes declaracoes e usada para imprimir no console?",
         {"1. print()", "2. console.log()", "3. cout <<", "4. printf()"},
         3, 1},
         {"Qual e a sintaxe correta para comentarios em C++?",
         {"1. // Este e um comentario", "2. /* Este e um comentario */", "3. # Este e um comentario", "4. <!-- Este e um comentario -->"},
         1, 1},
    };

    vector<Question> perguntasFaceisGrupoC = {
       {"Qual das seguintes opcoes e usada para declarar uma variavel em C++?",
         {"1. variable x;", "2. int x;", "3. x = 5;", "4. declare x;"},
         2, 1},
       {"O que e uma variavel em C++?",
         {"1. Uma funcao que retorna um valor", "2. Um tipo de dado numerico", "3. Um conteiner de armazenamento", "4. Um operador matematico"},
         3, 1},
         {"Qual das seguintes opcoes e usada para criar um loop infinito em C++?",
         {"1. while (true)", "2. for (;;)", "3. do-while (1)", "4. loop()"},
         2, 1},
         {"Qual e o tipo de dado usado para armazenar caracteres individuais? ", {" int", " double", " char", " string"}, 3, 1},
    };

    vector<string> nomesEquipes = {"Equipe A", "Equipe B", "Equipe C"};
    vector<int> pontuacoesEquipes(nomesEquipes.size(), 0);

    for (size_t i = 0; i < nomesEquipes.size(); ++i) {
        cout << "Equipe: " << nomesEquipes[i] << endl;

        vector<Question> perguntasEquipe;
        if (i == 1) {
            perguntasEquipe = perguntasFaceisGrupoB;
        } else if (i == 2) {
            perguntasEquipe = perguntasFaceisGrupoC;
        } else {
            perguntasEquipe = perguntasFaceis;
        }

        for (size_t j = 0; j < perguntasEquipe.size(); ++j) {
            int pontosGanhos = fazerPergunta(perguntasEquipe[j]);
            pontuacoesEquipes[i] += pontosGanhos;
        }

        cout << "Pontuacao total da " << nomesEquipes[i] << ": " << pontuacoesEquipes[i] << " pontos." << endl;
        cout << "-------------------------" << endl;
    }

    int pontuacaoMaxima = 0;
    int indiceVencedor = -1;
    for (size_t i = 0; i < pontuacoesEquipes.size(); ++i) {
        if (pontuacoesEquipes[i] > pontuacaoMaxima) {
            pontuacaoMaxima = pontuacoesEquipes[i];
            indiceVencedor = i;
        }
    }

    cout << "A equipe vitoriosa e: " << nomesEquipes[indiceVencedor] << " com " << pontuacaoMaxima << " pontos!" << endl;

    return 0;
}
