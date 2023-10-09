#ifndef ENTITIES_TESTS_HPP
#define ENTITIES_TESTS_HPP

#include "../../../entities/Cartao.hpp"
#include "../../../entities/Quadro.hpp"
#include "../../../entities/Conta.hpp"

using namespace std;

class UTConta {
	private:
		const string NOME_VALIDO = "Maria Silva";
		const string SENHA_VALIDA = "xH?1nFm";
		const string EMAIL_VALIDO = "a.b@example.com";

		Conta *conta;

		int estado;

		void setUp();
		void tearDown();
		void testarCenario();

    public:
		static const int SUCESSO = 0;
		static const int FALHA = -1;

		int run();
};

class UTQuadro {
	private:
		const string CODIGO_VALIDO = "AA00";
		const string NOME_VALIDO = "Meu quadro";
		const string DESCRICAO_VALIDA = "Minha descricao";
		const string LIMITE_VALIDO = "5";

		Quadro *quadro;

		int estado;

		void setUp();
		void tearDown();
		void testarCenario();

    public:
		static const int SUCESSO = 0;
		static const int FALHA = -1;

		int run();
};

class UTCartao {
	private:
		const string CODIGO_VALIDO = "AA00";
		const string NOME_VALIDO = "Meu cartao";
		const string DESCRICAO_VALIDA = "Minha descricao";
		const string COLUNA_VALIDA = "SOLICITADO";

		Cartao *cartao;

		int estado;

		void setUp();
		void tearDown();
		void testarCenario();

    public:
		static const int SUCESSO = 0;
		static const int FALHA = -1;

		int run();
};

#endif // ENTITIES_TESTS_HPP
