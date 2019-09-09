struct editora{
	string nome, cnpj, endereco, telefone;
	int id;
};
int idEditora;
vector<editora>editoras;

void adicionarEditoras(vector<editora> &aux)
{
	printf("-------------------------------------------------------\n");
	printf("|                   Adicionar Editora                 |\n");
	printf("-------------------------------------------------------\n");
	struct editora ax;
	ax.id = idEditora++;
	printf("Nome da editora: ");
	cin >> ax.nome;
	printf("\nCNPJ da editora: ");
	cin >> ax.cnpj;
	printf("\nEndereço da editora: ");
	cin >> ax.endereco;
	printf("\nTelefone da editora: ");
	cin >> ax.telefone;
	aux.push_back(ax);
	printf("\nEditora inserida com sucesso!!!\n");
}
void editarEditoras(vector<editora> &aux, int id)
{
	printf("-------------------------------------------------------\n");
	printf("|                   Editar Editora                    |\n");
	printf("-------------------------------------------------------\n");
	printf("Nome da editora: %s",aux[id].nome.c_str());
	cin >> aux[id].nome;
	printf("\nCNPJ da editora: %s",aux[id].cnpj.c_str());
	cin >> aux[id].cnpj;
	printf("\nEndereço da editora: %s",aux[id].endereco.c_str());
	cin >> aux[id].endereco;
	printf("\nTelefone da editora: %s",aux[id].telefone.c_str());
	cin >> aux[id].telefone;
	
	printf("\nEditora editada com sucesso!!!\n");
}
void visualizarEditora(vector<editora> &aux, int id)
{
	printf("-------------------------------------------------------\n");
	printf("|                   Visualizar                        |\n");
	printf("-------------------------------------------------------\n");
	printf("Nome da editora: %s",aux[id].nome.c_str());
	printf("\nCNPJ da editora: %s",aux[id].cnpj.c_str());
	printf("\nEndereço da editora: %s",aux[id].endereco.c_str());
	printf("\nTelefone da editora: %s\n",aux[id].telefone.c_str());
	
}
void excluirEditora(vector<editora> &aux, int id)
{
	printf("-------------------------------------------------------\n");
	printf("|                   Excluir                        |\n");
	printf("-------------------------------------------------------\n");
	aux.erase(aux.begin()+id);
	idEditora--;
	printf("Editora excluida com sucesso\n");
}
