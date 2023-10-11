
#include "UTSenha.hpp"
#include <string>

const std::string UTSenha::VALOR_VALIDO   = "K3sS,Lx";   // Definição de constante para evitar número mágico.
const std::string UTSenha::VALOR_INVALIDO = "senhainvalida";   // Definição de constante para evitar número mágico.

void UTSenha::setUp(){
    senha = new Senha(std::string("xH?1nFm"));
    estado = SUCESSO;
};

void UTSenha::tearDown(){
    delete senha;
};

void UTSenha::testarCenarioSucesso(){
    try{
        senha->setSenha(UTSenha::VALOR_VALIDO);
        if (senha->getSenha() != UTSenha::VALOR_VALIDO){ // Valor válido inserido e não armazenado: Falha
            estado = FALHA;
        }
        estado = SUCESSO; // Valor válido inserido, sem exceções e armazenado: Sucesso
    }
    catch(std::invalid_argument &excecao){              // Valor válido inserido retornou uma exceção: Falha
        estado = FALHA;
    }
};

void UTSenha::testarCenarioFalha(){
    try{
        senha->setSenha(UTSenha::VALOR_INVALIDO); // Valor inválido inserido, não deve ser armazenado
        estado = FALHA; // Se armazenado: Falha
    }
    catch(std::exception &excecao){ // Se retornar exceção: Sucesso
        if (senha->getSenha() == UTSenha::VALOR_INVALIDO){ // Retornou exceção e mesmo assim foi armazenado: Falha
            estado = FALHA;
        } else {
            estado = SUCESSO; // Valor inválido inserido, retornou exceção e não foi armazenado: Sucesso
        }
    }
};

int UTSenha::run(){
    setUp();
    testarCenarioSucesso();
    testarCenarioFalha();
    tearDown();
    return estado;
};
