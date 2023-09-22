#ifndef EMAIL_HPP_INCLUDED
#define EMAIL_HPP_INCLUDED

#include "Validador.hpp"
#include <string>

class Email : virtual public Validador{
    private:
        std::string value;
        bool validar(std::string);
    public:
        void setEmail(std::string);
        std::string getEmail();
};



#endif // EMAIL_HPP_INCLUDED
