#define TAMANHO 20
#define NOME "Vitor"

struct Aluno{
    char *nome_aluno;
	int *matricula_aluno;
    double *notas_aluno;
	double media_notas_aluno;
	int num_notas_inseridas;
	
	Aluno();
	~Aluno();
	
	void adicionarNota(double nota);

	void CalcularMediaAluno();

	void imprimeInformacoesAluno();

	
};
