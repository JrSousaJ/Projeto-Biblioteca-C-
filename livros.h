struct livros{
	string nome, resenha, ano, editora, tema, fornecedor, autor;
	int num_pg,id;
};
int idlivro;
vector<livros>livro;

void adicionarLivros(vector<livros> &aux)
{
	printf("-------------------------------------------------------\n");
	printf("|                    Adicionar Livro                  |\n");
	printf("-------------------------------------------------------\n");
	struct livros ax;
	ax.id = idlivro++;
	printf("Nome do livro: ");
	cin >> ax.nome;
	printf("\nResenha do livro: ");
	cin >> ax.resenha;
	printf("\nAno do livro: ");
	cin >> ax.ano;
	printf("\nEditora do livro: ");
	cin >> ax.editora;
	printf("\nTema do livro: ");
	cin >> ax.tema;
	printf("\nFornecedor do livro: ");
	cin >> ax.nome;
	printf("\nAutor do livro: ");
	cin >> ax.autor;
	printf("Numero de paginas do livro: ");
	scanf("%d",&ax.num_pg);
	aux.push_back(ax);
	printf("\nLivro inserido com sucesso!!!\n");
}
void editarLivros(vector<livros> &aux, int id)
{
	printf("-------------------------------------------------------\n");
	printf("|                    Editar Livro                     |\n");
	printf("-------------------------------------------------------\n");
	printf("Nome do livro: %s",aux[id].nome.c_str());
	cin >> aux[id].nome;
	printf("\nResenha do livro: %s",aux[id].resenha.c_str());
	cin >> aux[id].resenha;
	printf("\nAno do livro: %s",aux[id].ano.c_str());
	cin >> aux[id].ano;
	printf("\nEditora do livro: %s",aux[id].editora.c_str());
	cin >> aux[id].editora;
	printf("\nTema do livro: %s",aux[id].tema.c_str());
	cin >> aux[id].tema;
	printf("\nFornecedor do livro: %s",aux[id].fornecedor.c_str());
	cin >> aux[id].nome;
	printf("\nAutor do livro: %s",aux[id].autor.c_str());
	cin >> aux[id].autor;
	printf("\nNumero de paginas do livro: %d", aux[id].num_pg);
	scanf("%d",&aux[id].num_pg);
	printf("\nLivro editado com sucesso!!!\n");
}
void visualizarLivro(vector<livros> &aux, int id)
{
	printf("-------------------------------------------------------\n");
	printf("|                   Visualizar                        |\n");
	printf("-------------------------------------------------------\n");
	printf("Nome do livro: %s",aux[id].nome.c_str());
	printf("\nResenha do livro: %s",aux[id].resenha.c_str());
	printf("\nAno do livro: %s",aux[id].ano.c_str());
	printf("\nEditora do livro: %s",aux[id].editora.c_str());
	printf("\nTema do livro: %s",aux[id].tema.c_str());
	printf("\nFornecedor do livro: %s",aux[id].fornecedor.c_str());
	printf("\nAutor do livro: %s",aux[id].autor.c_str());
	printf("\nNumero de paginas do livro: %d", aux[id].num_pg);
	
}
void excluirLivro(vector<livros> &aux, int id)
{
	printf("-------------------------------------------------------\n");
	printf("|                   Excluir                        |\n");
	printf("-------------------------------------------------------\n");
	aux.erase(aux.begin()+id);
	idLivro--;
	printf("Livro excluido com sucesso\n");
}