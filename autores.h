struct autores{
	string nome, telefone, area, biografia;
	int id;
};
int idAutor;
vector<autores>autor;

void adicionarAutor(vector<autores> &aux)
{
	printf("-------------------------------------------------------\n");
	printf("|                    Adicionar Autor                  |\n");
	printf("-------------------------------------------------------\n");
	struct autores ax;
	ax.id = idAutor++;
	printf("Nome do autor: ");
	cin >> ax.nome;
	printf("\nTelefone do autor: ");
	cin >> ax.telefone;
	printf("\narea do autor: ");
	cin >> ax.area;
	printf("\nBiografia do autor: ");
	cin >> ax.biografia;
	aux.push_back(ax);
	printf("\nAutor inserido com sucesso!!!\n");
}
void editarAutor(vector<autores> &aux, int id)
{
	printf("-------------------------------------------------------\n");
	printf("|                    Editar Autor                    |\n");
	printf("-------------------------------------------------------\n");
	printf("Nome do autor: %s",aux[id].nome.c_str());
	cin >> aux[id].nome;
	printf("\nTelefone do autor: %s",aux[id].telefone.c_str());
	cin >> aux[id].telefone;
	printf("\nÁrea do autor: %s",aux[id].area.c_str());
	cin >> aux[id].area;
	printf("\nBiografia do autor: %s",aux[id].biografia.c_str());
	cin >> aux[id].biografia;
	
	printf("\nAutor editado com sucesso!!!\n");
}
void visualizarAutor(vector<autores> &aux, int id)
{
	printf("-------------------------------------------------------\n");
	printf("|                   Visualizar                        |\n");
	printf("-------------------------------------------------------\n");
	printf("Nome do autor: %s",aux[id].nome.c_str());
	printf("\nTelefone do autor: %s",aux[id].telefone.c_str());
	printf("\nÁrea do autor: %s",aux[id].area.c_str());
	printf("\nBiografia do autor: %s",aux[id].biografia.c_str());
	
	
}
void excluirAutor(vector<autores> &aux, int id)
{
	printf("-------------------------------------------------------\n");
	printf("|                   Excluir                        |\n");
	printf("-------------------------------------------------------\n");
	aux.erase(aux.begin()+id);
	idAutor--;
	printf("Autor excluido com sucesso\n");
}