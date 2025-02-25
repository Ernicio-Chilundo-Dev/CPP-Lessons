#include <iostream>
#include <fstream>
using namespace std;

int main(){
    ofstream arquivo;
    arquivo.open("cfbcurso.txt");
    arquivo << "Rica Chilundo\n";
    arquivo << "Cardo Chilundo\n";
    arquivo << "Ardo Chilundo\n";
    arquivo << "Ernicio Chilundo\n";
    arquivo.close();
    return 0;
}