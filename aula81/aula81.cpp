#include <iostream>
#include <cctype>
using namespace std;

int main(){

    char str[]=">>Ernicio - Jermias<<";
    int i,c;
    i =0;
    while((str[i])){
        c=str[i];
        putchar(toupper(c));//toLower()
        i++;
    }


    // cout << "Os"<< i <<"primeiros numeros sao alfamerico"<<endl;

    return 0;
}