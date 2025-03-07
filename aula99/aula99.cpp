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
    
    //exp = Valor expotencial
    double x2 = 10;
    cout << "O valor expotencial de "<<x2<<": "<<exp(x2)<<endl;


    return 0;
}