#include "UTLimite.hpp"
#include "../../../domains/Limite.hpp"
#include <string>

const std::string UTLimite::VALOR_VALIDO   = "10";   // Definição de constante para evitar número mágico.
const std::string UTLimite::VALOR_INVALIDO = "9090";   // Definição de constante para evitar número mágico.

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
        if (limite->getLimite() != UTLimite::VALOR_VALIDO){ // Valor válido inserido e não armazenado: Falha
            estado = FALHA;
        }
        estado = SUCESSO; // Valor válido inserido, sem exceções e armazenado: Sucesso

    }
    catch(std::invalid_argument &excecao){              // Valor válido inserido retornou uma exceção: Falha

        estado = FALHA;
    }
};

void UTLimite::testarCenarioFalha(){
    try{
        limite->setLimite(UTLimite::VALOR_INVALIDO); // Valor inválido inserido, não deve ser armazenado
        estado = FALHA; // Se armazenado: Falha
    }

    catch(std::exception &excecao){ // Se retornar exceção: Sucesso
        if (limite->getLimite() == UTLimite::VALOR_INVALIDO){ // Retornou exceção e mesmo assim foi armazenado: Falha
            estado = FALHA;
        } else {
            estado = SUCESSO; // Valor inválido inserido, retornou exceção e não foi armazenado: Sucesso
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
