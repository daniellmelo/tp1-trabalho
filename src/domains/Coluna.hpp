#pragma once

#include "Validador.hpp"

/// @file Coluna.hpp
/// @brief Este arquivo cont&eacute;m a declara&ccedil;&atilde;o da classe Coluna.
///

/// @class Coluna
/// @brief Classe que representa uma coluna.
///
/// Esta classe representa uma coluna, que pode ser validada de acordo com algum crit&eacute;rio definido.
class Coluna : virtual public Validador {
private:
    std::string coluna; ///< A coluna.

    /// @brief Fun&ccedil;&atilde;o privada para validar a coluna.
    ///
    /// Esta fun&ccedil;&atilde;o &eacute; usada internamente para validar a coluna de acordo com algum crit&eacute;rio.
    ///
    /// @param coluna A sequ&ecirc;ncia de caracteres a ser validada como coluna.
    /// @return true se a coluna for v&aacute;lida, false caso contr&aacute;rio.
    bool validar(std::string coluna);

public:
    /// @brief Define uma nova coluna.
    ///
    /// @param novaColuna A nova sequ&ecirc;ncia de caracteres a ser definida como coluna.
    void setColuna(std::string novaColuna);

    /// @brief Obt&eacute;m a coluna atual.
    ///
    /// @return Uma string representando a coluna atual.
    std::string getColuna() const;
};
