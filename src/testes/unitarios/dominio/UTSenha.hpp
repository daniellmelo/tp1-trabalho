#include "../../../domains/Senha.hpp"
#include <string>

class UTSenha { //222035625
private:
    const static std::string VALOR_VALIDO;
    const static std::string VALOR_INVALIDO;
    Senha *senha;
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


