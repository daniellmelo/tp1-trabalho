#include "UTConta.hpp"
#include "../../../entities/Conta.hpp"
#include "../../../domains/Email.hpp"
#include "../../../domains/Texto.hpp"
#include "../../../domains/Senha.hpp"


void UTConta::setUp(){
    Email email(EMAIL_VALIDO);
    Texto nome(NOME_VALIDO);
    Senha senha(SENHA_VALIDA);

    conta = new Conta(email, nome, senha);
	estado = SUCESSO;
}

void UTConta::tearDown(){
	delete conta;
}

void UTConta::testarCenario(){
	if(
        conta->getEmail() != EMAIL_VALIDO ||
        conta->getNome() != NOME_VALIDO ||
        conta->getSenha() != SENHA_VALIDA
    )
        estado = FALHA;
}

int UTConta::run(){
	setUp();
	testarCenario();
	tearDown();

	return estado;
};
