#include <stdio.h>  //biblioteca de comunica��o com o usu�rio
#include <stdlib.h> //biblioteca de aloca��o de espa�o em mem�ria
#include <locale.h> //biblioteca de aloca��es de texto por regi�o 
#include <string.h> //biblioteca responsavel por cuidar das string

int registro() //fun��o responsavel por cadastrar os usu�rios do sistema
{
	//inicio cria��o de vari�veis/string
	char arquivo[40];
	char cpf[40];
	char nome[40];
	char sobrenome[40];
	char cargo[40];
	//final da cria��o de variaveis 
	printf("Digite o CPF a ser cadastrado: "); //coletando informa��es do udu�rio
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
		printf("N�o Foi Possivel Abrir o Arquivo, N�o localizado!.\n"); //aviso de N�o localizado
	}
	
	while(fgets(conteudo, 200, file) != NULL)
	{
		printf("\nEssas S�o as informa��es do usuario:  "); 
		printf("%s", conteudo);
		printf("\n\n");
	}
	
	system("pause");
	
}

int deletar()
{
	char cpf[40];
	
	printf("Digite o CPF do usu�rio a ser deletado:  "); //coletando cpf
	scanf("%s",cpf);
	
	remove(cpf); //deleta arquivo 
	
	FILE *file;
	file = fopen(cpf,"r");
	
	if(file == NULL)
	{
		printf("O usu�rio n�o se encontra no sistema!. \n"); //mensagem de aviso
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
	
	printf("### Cart�rio da EBAC ### \n\n");   //menu 
	printf("escolha a Op��o Desejada Do Menu\n\n");  //opcao de escolha 
	printf("\t1 - Registrar Nomes\n"); // registro 
	printf("\t2 - Consultar Nomes\n"); // consultas de nomes 
	printf("\t3 - Deletar Nomes\n\n"); // deletar nomes 
	printf("Op��o:  ");
	 
	scanf("%d" , &opcao);
	
	system("cls"); //responsavel por limpar a tela
	
	
	
	switch(opcao) //inicio da sele��o do menu
	{
	
	case 1:
	registro(); //chamada de fun��es
	break;
	
	case 2:
	consulta();
	break;
		
	case 3:
	deletar();
	break;
	
	default:
	printf("essa op��o n�o esta disponivel! \n");
	system("pause");
	break;	
		
	} //fim da sele��o 
	
	
	}
	
	
}
	

    
	
	
	
	


