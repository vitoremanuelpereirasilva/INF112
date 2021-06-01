#include "Exception.h"
const char* Exception::what() const throw(){
    return "Erro na leitura/abertura do arquivo.";
}