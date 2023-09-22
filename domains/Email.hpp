#ifndef EMAIL_HPP_INCLUDED
#define EMAIL_HPP_INCLUDED
class Email {
    private:
        string value;
        void validar(string);
    public:
        void setEmail(string);
        string getEmail();
};



#endif // EMAIL_HPP_INCLUDED
