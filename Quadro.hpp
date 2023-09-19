#ifndef QUADRO_HPP_INCLUDED
#define QUADRO_HPP_INCLUDED

#include <string>

using namespace std;

class Quadro { //domain
    private:
        string nome;
        string descricao;
        int codigo;
        int limite;

    public:
        Quadro(int codigo, string nome, string descricao, int limite);
        string getNome() const;        //ok
        string getDescricao() const;   //ok
        int getCodigo() const;         //ok
        int getLimite() const;         //ok

        void setCodigo(int novoCodigo);         //ok
        void setNome(string novoNome);          //ok
        void setDescricao(string novoDescricao);//ok
        void setLimite(int novoLimite);         //ok
};



#endif // QUADRO_HPP_INCLUDED
