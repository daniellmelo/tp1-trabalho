#pragma once
#include "../../../entities/Conta.hpp"
#include <string>

class UTConta {//190063882
	private:
		const std::string NOME_VALIDO = "Maria Silva";
		const std::string SENHA_VALIDA = "xH?1nFm";
		const std::string EMAIL_VALIDO = "a.b@example.com";

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
