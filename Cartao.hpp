#ifndef CARTAO_HPP_INCLUDED
#define CARTAO_HPP_INCLUDED

#include <string>

using namespace std;

class Cartao {//domain
    private:
        int codigo;
        string nome;
        string texto;
        string coluna;
    public:
        int getCodigo();
        string getNome();
        string getDescricao();
        string getColuna();

        void setCodigo(int novoCodigo);
        void setNome(string novoNome);
        void setDescricao(string novoDescricao);
        void setColuna(string novoColuna);
};


#endif // CARTAO_HPP_INCLUDED
