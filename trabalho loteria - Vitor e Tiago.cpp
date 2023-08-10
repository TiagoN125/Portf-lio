#include <iostream>
using namespace std;

int main()
{
    int firstrandomnumber, secondrandomnumber, thirdrandomnumber, fourthrandomnumber, fiverandomnumber;
    int firstguessnumber, secondguessnumber, thirdguessnumber, fourthguessnumber, fiveguessnumber;

    srand((unsigned)time(NULL));

    cout << endl << "Por favor, insira seu primeiro palpite: ";
    cin >> firstguessnumber;
    cout << "Por favor, insira seu segundo palpite: ";
    cin >> secondguessnumber;
    cout << "Por favor, insira seu terceiro palpite: ";
    cin >> thirdguessnumber;
    cout << "Por favor, insira seu quarto palpite: ";
    cin >> fourthguessnumber;
    cout << "Por favor, insira seu quinto palpite: ";
    cin >> fiveguessnumber;

    firstrandomnumber = rand() % 10;
    secondrandomnumber = rand() % 10;
    thirdrandomnumber = rand() % 10;
    fourthrandomnumber = rand() % 10;
    fiverandomnumber = rand() % 10;

    cout << endl << "Seu primeiro numero aleatorio e: " << firstrandomnumber << "." << endl;
    cout << "Seu segundo numero aleatorio e: " << secondrandomnumber << "." << endl;

    if (firstguessnumber == firstrandomnumber && secondguessnumber == secondrandomnumber)
    {
        cout << endl << "Isso e uma correspondência exata, você ganhou o grande premio de $10.000!" << endl;
    }
    else if ((firstguessnumber == firstrandomnumber || secondguessnumber == firstrandomnumber) &&
             (firstguessnumber == secondrandomnumber || secondguessnumber == secondrandomnumber))
    {
        cout << endl << "Voce acertou os digitos, ganhou $3.000." << endl;
    }
    else if (firstguessnumber == firstrandomnumber || secondguessnumber == firstrandomnumber ||
             firstguessnumber == secondrandomnumber || secondguessnumber == secondrandomnumber)
    {
        cout << endl << "Voce acertou um digito, ganhou $1.000." << endl;
    }
    else
    {
        cout << endl << "Nenhum deles estava correto, você perdeu." << endl;
    }

    return 0;
}
