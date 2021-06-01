#define TAMANHO 100

struct ListaVetorInteiros {
	// Dados
	int *_elementos;
	int _num_elementos_inseridos;

	// Construtor
	ListaVetorInteiros();
	// Destrutor
	~ListaVetorInteiros();
	// Insere um inteiro na lista
	void inserir_elemento(int elemento);
	// Imprime a lista
	void imprimir();
	
	void remover_primeiro();

	void remover_ultimo();
	
	void inverter();
};
