#include <stdio.h>  //biblioteca de comunicação com o usuário
#include <stdlib.h> //biblioteca de alocação de espaço em memória
#include <locale.h> //biblioteca de alocações de texto por região 
#include <string.h> //biblioteca responsavel por cuidar das string

int registro() //função responsavel por cadastrar os usuários do sistema
{
	//inicio criação de variáveis/string
	char arquivo[40];
	char cpf[40];
	char nome[40];
	char sobrenome[40];
	char cargo[40];
	//final da criação de variaveis 
	printf("Digite o CPF a ser cadastrado: "); //coletando informações do uduário
	scanf("%s", cpf); //%s refere-se a string
	
	strcpy(arquivo, cpf); //responsavel por copiar os valores das string
	
	FILE *file; //cria o arquivo 
	file = fopen(arquivo, "w"); //criar o arquivo
	fprintf(file,cpf); //salvo o vallor da variavel 
	fclose(file); //fecha o arquivo 
	
	file = fopen(arquivo, "a");
	fprintf(file,",");
	fclose(file);
	
	printf("Digite o nome a ser cadastrado: "); //nomes cadastrados 
	scanf("%s",nome);
	
	file = fopen(arquivo, "a");
	fprintf(file,nome);
	fclose(file);
	
	file = fopen(arquivo, "a");
	fprintf(file,",");
	fclose(file);
	
	printf("Digite o Sobrenome a ser cadastrado: "); //sobrenome a ser cadastrado
	scanf("%s",sobrenome);
	
	file = fopen(arquivo, "a");
	fprintf(file,sobrenome);
	fclose(file);
	
	file = fopen(arquivo, "a");
	fprintf(file,",");
	fclose(file);
	
	printf("Digite o cargo a ser cadastrado: "); //cargo a ser cadastrado
	scanf("%s",cargo);
	
	file = fopen(arquivo, "a");
	fprintf(file,cargo);
	fclose(file);
	
	system("pause");
	
}
 
int consulta()
{
	setlocale(LC_ALL,"Portuguese"); //definindo linguagem
	
	
	char cpf[40];
	char conteudo[200];
	
	printf("Digite o CPF a ser Consultado: "); //consultando os cpfs
	scanf("%s",cpf);
	
	FILE *file;
	file =fopen(cpf,"r");
	
	if(file == NULL)
	{
		printf("Não Foi Possivel Abrir o Arquivo, Não localizado!.\n"); //aviso de Não localizado
	}
	
	while(fgets(conteudo, 200, file) != NULL)
	{
		printf("\nEssas São as informações do usuario:  "); 
		printf("%s", conteudo);
		printf("\n\n");
	}
	
	system("pause");
	
}

int deletar()
{
	char cpf[40];
	
	printf("Digite o CPF do usuário a ser deletado:  "); //coletando cpf
	scanf("%s",cpf);
	
	remove(cpf); //deleta arquivo 
	
	FILE *file;
	file = fopen(cpf,"r");
	
	if(file == NULL)
	{
		printf("O usuário não se encontra no sistema!. \n"); //mensagem de aviso
		system("pause");
	}
	
}


int main ()
{
	int opcao=0;  //definindo variaveis 
	int laco=1;
	
	for(laco=1;laco=1;)
	
	
	{
	
	system("cls");
	
	setlocale(LC_ALL, "portuguese"); //definindo linguagem
	
	printf("### Cartório da EBAC ### \n\n");   //menu 
	printf("escolha a Opção Desejada Do Menu\n\n");  //opcao de escolha 
	printf("\t1 - Registrar Nomes\n"); // registro 
	printf("\t2 - Consultar Nomes\n"); // consultas de nomes 
	printf("\t3 - Deletar Nomes\n\n"); // deletar nomes 
	printf("Opção:  ");
	 
	scanf("%d" , &opcao);
	
	system("cls"); //responsavel por limpar a tela
	
	
	
	switch(opcao) //inicio da seleção do menu
	{
	
	case 1:
	registro(); //chamada de funções
	break;
	
	case 2:
	consulta();
	break;
		
	case 3:
	deletar();
	break;
	
	default:
	printf("essa opção não esta disponivel! \n");
	system("pause");
	break;	
		
	} //fim da seleção 
	
	
	}
	
	
}
	

    
	
	
	
	


