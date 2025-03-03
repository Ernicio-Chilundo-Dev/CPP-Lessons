#include <iostream>
#include <ctime>
#include <cmath>
using namespace std;

int numeros_primos(int n)
{
    int i, j;
    int freq = n - 1;
    for (i = 2; i <= n; i++)
    {
        for (j = sqrt(i); j > 1; --j)
        {
            if (i % j == 0)
            {
                --freq;
                break;
            }
        }
    }
    return freq;
}

int main()
{
    // int primo;
    // clock_t t1,t2,t3;
    // t1 = clock();
    // primo = numeros_primos(100000);
    // t2 = clock();
    // t3 =difftime(t2,t1);

    // cout << "Qtde de primos de 0 - 1000000 e: " << primo << endl;
    // cout << "Tempo de CPU: " << ((float)t3)/CLOCKS_PER_SEC<< endl;

    // funcao time
    struct tm *infoTempo;
    time_t t;
    char buffer[80];
    time(&t);
    infoTempo = localtime(&t);

    // cout << "segundos desde 00:00 de 1 de janeiro de 1970: "<<t<<endl;
    // cout <<asctime(infoTempo)<<endl;
    // cout << ctime(&t);
    strftime(buffer, 80, "%d/%m/%Y", infoTempo);
    cout << buffer << endl;

    return 0;
}