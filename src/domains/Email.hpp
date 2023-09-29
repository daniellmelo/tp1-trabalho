#pragma once

#include <string>

#include "Validador.hpp"

class Email{
    public:
        Email(std::string email);
    public:
        std::string m_email;
    public:
        void setEmail(std::string novoEmail);
        std::string getEmail() const;
     private:
        void validar(std::string);
};