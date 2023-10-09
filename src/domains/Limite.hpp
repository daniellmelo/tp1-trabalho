#pragma once

#include "./Dominio.hpp"

/// @file Limite.hpp
/// @brief Este arquivo cont&eacute;m a declara&ccedil;&atilde;o da classe Limite.
///

/// @class Limite
/// @brief Classe que representa um limite.
///
/// Esta classe representa um limite, que &eacute; uma sequ&ecirc;ncia de caracteres.
/// Ela fornece m&eacute;todos para definir e obter o limite, bem como para validar sua formata&ccedil;&atilde;o.
class Limite : public Dominio{
private:
    std::string m_limite; ///< O limite.

    /// @brief Fun&ccedil;&atilde;o privada para validar o limite.
    ///
    /// Esta fun&ccedil;&atilde;o &eacute; usada internamente para validar a formata&ccedil;&atilde;o do limite.
    ///
    /// @param limite A sequ&ecirc;ncia de caracteres a ser validada como limite.
    void validar(std::string limite);

public:
    /// @brief Construtor da classe Limite.
    ///
    /// @param limite A sequ&ecirc;ncia de caracteres que representa o limite.
    Limite(std::string limite);

    /// @brief Define um novo limite.
    ///
    /// @param novoLimite A nova sequ&ecirc;ncia de caracteres a ser definida como limite.
    void setLimite(std::string novoLimite);

    /// @brief Obt&eacute;m o limite atual.
    ///
    /// @return Uma string representando o limite atual.
    std::string getLimite() const;
};
