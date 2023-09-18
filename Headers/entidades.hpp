#ifndef ENTIDADES_H
#define ENTIDADES_H

#include <string>

using namespace std;

class Conta {
private:
    string email;
    string nome;
    string senha;

public:
    string getEmail();
    string getNome();
    string getSenha();

    void setEmail(string novoEmail);
    void setNome(string novoNome);
    void setSenha(string novaSenha);
};


class Quadro {
    private:
        int codigo;
        string nome;
        string descricao;
        int limite;
    public:
        int getCodigo();
        string getNome();
        string getDescricao();
        int getLimite();

        void setCodigo(int novoCodigo);
        void setNome(string novoNome);
        void setDescricao(string novaDescricao);
        void setLimite(int novoLimite);
};

class Cartao {
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
        void setDescricao(string novaDescricao);
        void setColuna(string novaColuna);
};

#endif