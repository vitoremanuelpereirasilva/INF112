class aquecedor
{
private:
    /* data */
    double temp_max;
    double temp_min;
    double fator;
public:
    aquecedor();
    aquecedor(double temp_ini);
    aquecedor(double temp_ini, double fat);
    
    void aquecer();
    void resfriar();
    void imprimetemp();

    double getfator();
    void setfator(double fat);
};


