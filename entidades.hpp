#ifndef ENTIDADES_H
#define ENTIDADES_H

#include <string>

using namespace std;

class Conta { //domain
private:
    string email;
    string nome;
    string senha;

public:
    Conta(string email, string nome, string senha);
    string getEmail() const;
    string getNome() const;
    string getSenha() const;

    void setEmail(string novoEmail);
    void setNome(string novoNome);
    void setSenha(string novoSenha);
};


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

#endif
