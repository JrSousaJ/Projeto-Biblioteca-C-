struct temas{
	string nome;
	int id;
};
int idTema;
vector<temas>tema;

void adicionarTema(vector<temas> &aux)
{
	printf("-------------------------------------------------------\n");
	printf("|                    Adicionar Tema                   |\n");
	printf("-------------------------------------------------------\n");
	struct temas ax;
	ax.id = idTema++;
	printf("Nome do tema: ");
	cin >> ax.nome;
	aux.push_back(ax);
	printf("\nTema inserido com sucesso!!!\n");
}
void editarTema(vector<temas> &aux, int id)
{
	printf("-------------------------------------------------------\n");
	printf("|                    Editar Tema                      |\n");
	printf("-------------------------------------------------------\n");
	printf("Nome do tema: %s",aux[id].nome.c_str());
	cin >> aux[id].nome;

	printf("\nTema editado com sucesso!!!\n");
}
void visualizarTema(vector<temas> &aux, int id)
{
	printf("-------------------------------------------------------\n");
	printf("|                   Visualizar                        |\n");
	printf("-------------------------------------------------------\n");
	printf("Tema: %s",aux[id].nome.c_str());


}
void excluirTema(vector<temas> &aux, int id)
{


	printf("-------------------------------------------------------\n");
	printf("|                   Excluir                        |\n");
	printf("-------------------------------------------------------\n");
	aux.erase(aux.begin()+id);
	idTema--;
	printf("Tema excluido com sucesso\n");
}
