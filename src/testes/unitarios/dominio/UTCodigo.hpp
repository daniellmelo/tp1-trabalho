#pragma once
#include "../../../domains/Codigo.hpp"

class UTCodigo { //222035625
private:
    const static std::string VALOR_VALIDO;
    const static std::string VALOR_INVALIDO;
    Codigo *codigo;
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


