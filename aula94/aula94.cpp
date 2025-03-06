#include <iostream>
#include <deque> //Fila dupla
// PRINCIPAIS DIFERENCAS
//  Ele implimenta o iterator
/*Pode ser acessodo em ambos os lados
    pode incluir ou retirar elementos tanto no inicio quanto no final
*/
using namespace std;
void linha(int tam, string txt);
void impd(deque<int> d);
int main()
{
    deque<int> dq1;
    deque<int> dq2(10, 5); // 10 numerais 5
    deque<int> dq3(dq2);
    deque<int> dq4 = {1, 2, 3, 4, 5, 6, 7, 8, 9};

    for (auto it = dq4.begin(); it != dq4.end(); it++)
    {
        cout << *it << " ";
    }

    linha(50, "Capacidade");
    cout << "Tamanho atual: " << dq4.size() << endl;
    cout << "Capacidade maxima: " << dq4.max_size() << endl;
    dq4.resize(15, 10); // Altera o tamanho para 15 e preenche os novos espacos com o numeral 10
    cout << "Capacidade alterada: " << dq4.size() << endl;
    dq4.resize(20); // Altera o tamanho para 20 e preenche os novos espacos com o numeral 0
    cout << "Capacidade alterada novamente: " << dq4.size() << endl;
    impd(dq4);

    // FUNCOES DE ACESSO

    linha(60, "AVESSO");
    cout << "Terceiro elemento: " << dq4[2] << endl;
    cout << "Quarto elemento: " << dq4.at(3) << endl;
    cout << "Primeiro elemento: " << dq4.front() << endl;
    cout << "Ultimo elemento: " << dq4.back() << endl;

    return 0;
}

void linha(int tam, string txt)
{
    cout << "\n\n-- " << txt << " ";
    for (int i = 0; i < tam; i++)
    {
        cout << "-";
    }
    cout << "\n\n";
}

void impd(deque<int> d)
{
    for (auto x : d)
    {
        cout << x << " ";
    }
}