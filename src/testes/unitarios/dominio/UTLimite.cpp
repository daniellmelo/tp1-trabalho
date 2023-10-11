#include "UTLimite.hpp"
#include "../../../domains/Limite.hpp"
#include <string>

const std::string UTLimite::VALOR_VALIDO   = "10";   // Defini��o de constante para evitar n�mero m�gico.
const std::string UTLimite::VALOR_INVALIDO = "9090";   // Defini��o de constante para evitar n�mero m�gico.

void UTLimite::setUp(){
    limite = new Limite(std::string("5"));
    estado = SUCESSO;
};

void UTLimite::tearDown(){
    delete limite;
};

void UTLimite::testarCenarioSucesso(){
    try{
        limite->setLimite(UTLimite::VALOR_VALIDO);
        if (limite->getLimite() != UTLimite::VALOR_VALIDO){ // Valor v�lido inserido e n�o armazenado: Falha
            estado = FALHA;
        }
        estado = SUCESSO; // Valor v�lido inserido, sem exce��es e armazenado: Sucesso

    }
    catch(std::invalid_argument &excecao){              // Valor v�lido inserido retornou uma exce��o: Falha

        estado = FALHA;
    }
};

void UTLimite::testarCenarioFalha(){
    try{
        limite->setLimite(UTLimite::VALOR_INVALIDO); // Valor inv�lido inserido, n�o deve ser armazenado
        estado = FALHA; // Se armazenado: Falha
    }

    catch(std::exception &excecao){ // Se retornar exce��o: Sucesso
        if (limite->getLimite() == UTLimite::VALOR_INVALIDO){ // Retornou exce��o e mesmo assim foi armazenado: Falha
            estado = FALHA;
        } else {
            estado = SUCESSO; // Valor inv�lido inserido, retornou exce��o e n�o foi armazenado: Sucesso
        }
    }
};

int UTLimite::run(){
    setUp();
    testarCenarioSucesso();
    testarCenarioFalha();
    tearDown();
    return estado;
};
