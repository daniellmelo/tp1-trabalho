// -*- coding: utf-8 -*-
#include <iostream>


#include "src\testes\unitarios\dominio\CodigoTeste.hpp"

using namespace std;

int main()
{
    CodigoTeste codigoTeste;

    switch(codigoTeste.run()){
        case CodigoTeste::SUCESSO: cout << "SUCESSO - Conta" << endl;
                                break;
        case CodigoTeste::FALHA  : cout << "FALHA   - Conta" << endl;
                                break;
    }

    return 0;
};

