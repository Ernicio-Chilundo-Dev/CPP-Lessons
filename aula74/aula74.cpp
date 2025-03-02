#include <iostream>
#include <cstdlib>

using namespace std;

void fim()
{
    cout << "Ernicio jermias chilundo";
}

int comparacao(const void* a, const void*b){
    return (*(int*)a - *(int*)b);
}

int main()
{

    // atexit(fim);
    // for (int i = 0; i < 10; i++)
    // {
    //     if (i < 5)
    //     {
    //         cout << i << endl;
    //     }
    //     else
    //     {
    //         // exit(EXIT_SUCCESS);
    //         cout << i << endl;
    //     }
    // }


    // const char* p;
    // p=getenv("PATH");

    // cout << p<<endl;

    // const char* nome = "Ernicio";

    // for(int i=0;i<10;i++){
    //     cout << i<<endl;
    // }

    // _Exit(EXIT_SUCCESS);

    // system("cls");
    // system("dir");
    // cout <<nome<<endl;
    // system("pause");

    int vetor[]={1,4,6,54,4,8,7,9,5};
    int pes =7;
    int *pos;
    qsort(vetor,10,sizeof(int),comparacao);

    for(int i=0;i<10;i++){
        cout << vetor[i]<<endl;
    }

    pos=(int*)bsearch(&pes,vetor,10,sizeof(int),comparacao);
    cout << "Elemento: "<<pes<<" esta na posicao: "<<*pos<<endl;
    return 0;
}