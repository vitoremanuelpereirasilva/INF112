#include <iostream>
class Exception: public std::exception{
    public:
    virtual const char *what() const throw();
};