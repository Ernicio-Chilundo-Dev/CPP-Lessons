#include <iostream>
#include <cstring>
using namespace std;

int main(){
    char txt1[50]="Curso de programacao!";
    char txt2[50];
    strcpy(txt2,txt1);
    cout << txt2<<endl;
    return 0;
}