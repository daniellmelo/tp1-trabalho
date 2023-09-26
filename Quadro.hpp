#pragma once

#include <string>
#include "domains/Texto.hpp"
#include "domains/Codigo.hpp"
#include "domains/Limite.hpp"


class Quadro { // 222035625
    private:
        Texto  m_nome;
        Texto  m_descricao;
        Codigo m_codigo;
        Limite m_limite;

    public:
        Quadro(Codigo codigo, Texto nome, Texto descricao, Limite limite);
        std::string getNome() const;
        std::string getDescricao() const;
        std::string getCodigo() const;
        std::string getLimite() const;

        void setCodigo(std::string novoCodigo); // configurar para converter o int em string
        void setNome(std::string novoNome);
        void setDescricao(std::string novoDescricao);
        void setLimite(std::string novoLimite);// configurar para converter o int em string
};

