#include <iostream>
#include <cmath>
#define PI 3.14159265
double randToGra(int a)
{
#define PI 3.14159265
    return a * PI / 180;
}
using namespace std;

int main()
{
    // Sin,Son,Tan = Seno, Cosseno e Tangente
    int ang = 45;
    cout << "Cosseno de " << ang <<"..: "<< cos(ang * PI / 180) << endl;
    cout << "Seno " << ang <<"........: "<< sin(ang * PI / 180) << endl;
    cout << "Tangente " << ang<<".....: " << tan(ang * PI / 180) << endl;

    cout <<"\n\n";

    // Asin, Asen, Atan = Arco cosseno, Arco seno, Arco tangente
    cout<<"Arco cosseno de "<<ang<<"..: "<<acos(randToGra(ang))<<endl;
    cout <<"Arco seno de "<<ang<<"....: "<<asin(randToGra(ang))<<endl;
    cout <<"Arco tangente de "<<ang<<": "<<atan(randToGra(ang))<<endl;

    //atan2 = Calcula o arco tangente usando dois paramentros representantes de x e y
    double x = -10.0;
    double y = 10.0;
    cout << "Arco tangente de x = -10 e y=10: "<<atan2(x,y)*180/PI<<endl;

    cout <<endl;
    
    //exp = funcao exponencial
    double x2 = 10;
    cout << "O valor exponencial de "<<x2<<": "<<exp(x2)<<endl;

    cout <<endl;

    //log = Retorna logaritmo natural de um numero
    double x3 = 10;
    cout <<"O logaritmo de "<<x3<<": "<<log(x3)<<endl;

    // pow = calcula a potencia de um numero base elevando a um expoente
    double x4 = 10;
    cout << "10 elevando a 2: "<<pow(x4,2)<<endl;
    cout <<endl;

    //sqrt = Calcula a raiz quandrada de um numero
    double x5 = 9;
    cout << "A raiz a quandrada de 9: "<<sqrt(x5)<<endl;
    cout <<endl;

    //cbrt (c++11) = Calcula a raiz cubica de numero
    double x6 = 27;
    cout <<"Raiz cubica de 27: "<<cbrt(x6)<<endl;
    cout <<endl;


    return 0;
}