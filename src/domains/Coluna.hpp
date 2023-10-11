#pragma once

#include "./Dominio.hpp"

/// @file Coluna.hpp
/// @brief Este arquivo cont&eacute;m a declara&ccedil;&atilde;o da classe Coluna.
///

/// @class Coluna
/// @brief Classe que representa uma coluna.
///
/// Esta classe representa uma coluna, que pode ser validada de acordo com algum crit&eacute;rio definido.
class Coluna: public virtual Dominio{ //222035625
private:
    std::string m_coluna; ///< A coluna.
public:
    Coluna(std::string coluna);
    /// @brief Define uma nova coluna.
    ///
    /// @param novaColuna A nova sequ&ecirc;ncia de caracteres a ser definida como coluna.
    void setColuna(std::string novaColuna);

    /// @brief Obt&eacute;m a coluna atual.
    ///
    /// @return Uma string representando a coluna atual.
    std::string getColuna() const;

private:
    /// @brief Fun&ccedil;&atilde;o para validar a coluna.
    ///
    /// Esta fun&ccedil;&atilde;o &eacute; usada internamente para validar a coluna de acordo com algum crit&eacute;rio.
    ///
    /// @param coluna A sequ&ecirc;ncia de caracteres a ser validada como coluna.
    /// @return true se a coluna for v&aacute;lida, false caso contr&aacute;rio.
    void validar(std::string codigo);
};
