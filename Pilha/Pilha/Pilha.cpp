#include <iostream>
using namespace std;

// definicao de tipo
struct NO {
	int valor;
	NO* prox;
};

NO* topo = NULL;

// headers
void menu();
void inicializar();
void pop();
void push();
//--------------------------


int main()
{
	menu();
}

void menu()
{
	int op = 0;
	while (op != 4) {
		system("cls"); // somente no windows
		cout << "Menu Pilha";
		cout << endl << endl;
		cout << "1 - Inicializar Pilha \n";
		cout << "2 - Inserir elemento (Push) \n";
		cout << "3 - Remover elementos (Pop) \n";
		cout << "4 - Sair \n";


		cout << "Opcao: ";
		cin >> op;

		switch (op)
		{
		case 1: inicializar();
			break;
		case 2:push();
			break;
		case 3: pop();
			break;
		case 4:
			return;
		default:
			break;
		}

		system("pause"); // somente no windows
	}
}

void inicializar()
{

	// se a lista já possuir elementos
	// libera a memoria ocupada
	NO* aux = topo;
	while (aux != NULL) {
		NO* paraExcluir = aux;
		aux = aux->prox;
		free(paraExcluir);
	}

	topo = NULL;
	cout << "Pilha inicializada \n";

}


void push()
{
	// aloca memoria dinamicamente para o novo elemento
	NO* novo = (NO*)malloc(sizeof(NO)); //criou um nó "novo"
	if (novo == NULL)
	{
		return;
	}


	cout << "Digite o elemento: ";
	cin >> novo->valor; //"valor" é o que o usuario digitou, novo representa o fato de ele ser  mais recente valor digitado
	novo->prox = NULL; //não há nada após este valor digitado

	if (novo->prox != NULL) //caso HAJA um numero apos o digitado
	{
		novo->prox == anterior;
	}
}

void pop()
{
	NO* aux = topo;
	while (aux != NULL)
	{
		NO* excluir = aux;
		aux = aux->prox;
		cout << aux << " removido." << endl;
		free(excluir);
	}

	if (aux == NULL) {
		cout << "Lista vazia." << endl;
			return;
	}
}

