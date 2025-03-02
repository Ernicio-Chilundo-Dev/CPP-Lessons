#include <iostream>
#include <cstdlib>

using namespace std;

void fim(){
    cout << "Ernicio jermias chilundo";
}

int main(){

    for(int i=0;i<10;i++){
        if(i<5){
            cout << i<<endl;
        }else{
            exit(EXIT_SUCCESS);
            cout << i<<endl;
        }
    }

    return 0;
}