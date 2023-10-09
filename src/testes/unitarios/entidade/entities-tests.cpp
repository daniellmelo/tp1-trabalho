#include "entities-tests.hpp"

#include "../../../domains/Codigo.hpp"
#include "../../../domains/Email.hpp"
#include "../../../domains/Senha.hpp"
#include "../../../domains/Limite.hpp"
#include "../../../domains/Texto.hpp"
#include "../../../domains/Coluna.hpp"

//Testes de unidade da classe Conta
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

//Testes de unidade da classe Quadro
void UTQuadro::setUp(){
    Codigo codigo(CODIGO_VALIDO);
    Texto nome(NOME_VALIDO);
    Texto descricao(DESCRICAO_VALIDA);
    Limite limite(LIMITE_VALIDO);

    quadro = new Quadro(codigo, nome, descricao, limite);
	estado = SUCESSO;
}

void UTQuadro::tearDown(){
    delete quadro;
}

void UTQuadro::testarCenario(){
	if(
        quadro->getCodigo() !=  CODIGO_VALIDO ||
        quadro->getNome() != NOME_VALIDO ||
        quadro->getDescricao() != DESCRICAO_VALIDA ||
        quadro->getLimite() != LIMITE_VALIDO
    )
        estado = FALHA;
}

int UTQuadro::run(){
	setUp();
	testarCenario();
	tearDown();

	return estado;
};

//Testes de unidade da classe Cartao
void UTCartao::setUp(){
    Codigo codigo(CODIGO_VALIDO);
    Texto nome(NOME_VALIDO);
    Texto descricao(DESCRICAO_VALIDA);
    Coluna coluna(COLUNA_VALIDA);

    cartao = new Cartao(codigo, nome, descricao, coluna);
	estado = SUCESSO;
}

void UTCartao::tearDown(){
    delete cartao;
}

void UTCartao::testarCenario(){
	if(
        cartao->getCodigo() !=  CODIGO_VALIDO ||
        cartao->getNome() != NOME_VALIDO ||
        cartao->getDescricao() != DESCRICAO_VALIDA ||
        cartao->getColuna() != COLUNA_VALIDA
    )
        estado = FALHA;
}

int UTCartao::run(){
	setUp();
	testarCenario();
	tearDown();

	return estado;
};
