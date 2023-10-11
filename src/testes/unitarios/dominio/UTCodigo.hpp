#pragma once
#include "../../../domains/Codigo.hpp"

class UTCodigo {
private:
    const static std::string VALOR_VALIDO;   // Defini??????o de constante para evitar n???mero m???gico.
    const static std::string VALOR_INVALIDO;   // Defini??????o de constante para evitar n???mero m???gico.
    Codigo *codigo;                         // Refer???ncia para unidade em teste.
    int estado;                             // Estado do teste.
    void setUp();                           // M???todo para criar unidade em teste.
    void tearDown();                        // M???todo para destruir unidade em teste.
    void testarCenarioSucesso();            // Cen???rio de teste.
    void testarCenarioFalha();              // Cen???rio de teste.

public:
    const static int SUCESSO =  0;          // Defini??????o de constante para reportar resultado de teste.
    const static int FALHA   = -1;          // Defini??????o de constante para reportar resultado de teste.
    int run();                              // M???todo para executar teste.
};


