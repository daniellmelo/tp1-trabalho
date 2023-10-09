#include "../../../domains/Codigo.hpp"

class CodigoTeste {
private:
    const static char CODIGO_VALIDO   = 'a';
    const static char CODIGO_INVALIDO = 'b';
    Codigo *codigo;
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
