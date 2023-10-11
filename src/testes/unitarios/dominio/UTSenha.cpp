
#include "UTSenha.hpp"
#include <string>

const std::string UTSenha::VALOR_VALIDO   = "K3sS,Lx";   // Defini��o de constante para evitar n�mero m�gico.
const std::string UTSenha::VALOR_INVALIDO = "senhainvalida";   // Defini��o de constante para evitar n�mero m�gico.

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
        if (senha->getSenha() != UTSenha::VALOR_VALIDO){ // Valor v�lido inserido e n�o armazenado: Falha
            estado = FALHA;
        }
        estado = SUCESSO; // Valor v�lido inserido, sem exce��es e armazenado: Sucesso
    }
    catch(std::invalid_argument &excecao){              // Valor v�lido inserido retornou uma exce��o: Falha
        estado = FALHA;
    }
};

void UTSenha::testarCenarioFalha(){
    try{
        senha->setSenha(UTSenha::VALOR_INVALIDO); // Valor inv�lido inserido, n�o deve ser armazenado
        estado = FALHA; // Se armazenado: Falha
    }
    catch(std::exception &excecao){ // Se retornar exce��o: Sucesso
        if (senha->getSenha() == UTSenha::VALOR_INVALIDO){ // Retornou exce��o e mesmo assim foi armazenado: Falha
            estado = FALHA;
        } else {
            estado = SUCESSO; // Valor inv�lido inserido, retornou exce��o e n�o foi armazenado: Sucesso
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
