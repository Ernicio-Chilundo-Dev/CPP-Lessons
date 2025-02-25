#ifndef CLASES_H_INCLUDE
#define CLASSES_H_INCLUDE

class Base1{
    public:
    void impBase1();
};

void Base1::impBase1(){
    std::cout <<"Tmp class Base1"<<std::endl;
}

class Base2{
    public:
    void impBase2();
};

void Base2::impBase2(){
    std::cout << "Tmp class Base2"<<std::endl;
}

class Cfb:public Base1, public Base2{

};

#endif