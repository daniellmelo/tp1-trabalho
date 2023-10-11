#pragma once
#include "../../../domains/Limite.hpp"
#include <string>

class UTLimite { //222035625
private:
    const static std::string VALOR_VALIDO;
    const static std::string VALOR_INVALIDO;
    Limite *limite;
    int estado;
    void setUp();
    void tearDown();
    void testarCenarioSucesso();
    void testarCenarioFalha();

public:
    const static int SUCESSO =  0;
    const static int FALHA   = -1;
    int run();
};


