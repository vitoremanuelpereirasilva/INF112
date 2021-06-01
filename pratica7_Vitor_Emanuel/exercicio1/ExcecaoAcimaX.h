#ifndef EXCECAO_ACIMA_X_H
#define EXCECAO_ACIMA_X_H
#include <iostream>
#include <exception>
class ExcecaoAcimaX : public std::exception
{
public:
    virtual const char *what() const throw();
};


#endif