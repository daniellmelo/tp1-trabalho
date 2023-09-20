#ifndef QUADRO_HPP_INCLUDED
#define QUADRO_HPP_INCLUDED

#include <string>

using namespace std;

class Quadro { // 222035625
    private:
        string nome;
        string descricao;
        int codigo;
        int limite;

    public:
        Quadro(int codigo, string nome, string descricao, int limite);
        string getNome() const;
        string getDescricao() const;
        int getCodigo() const;
        int getLimite() const;

        void setCodigo(int novoCodigo);
        void setNome(string novoNome);
        void setDescricao(string novoDescricao);
        void setLimite(int novoLimite);
};

#endif // QUADRO_HPP_INCLUDED
