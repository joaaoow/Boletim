#include<stdio.h>
#include<locale.h>   
int main(){
setlocale(LC_ALL, "");
int numAlunos; 

//QUANTIDADE DE ALUNOS QUE SERÃO CADASTRADOS

	printf("Quantos alunos serão cadastrados: \n");
		scanf("%i", &numAlunos);
		
float nota1[numAlunos], nota2[numAlunos], media;
char nomeAluno[numAlunos][100];
int i = 0;
int j = 0;

system("cls");

//CADASTRO DO ALUNO

for(; i < numAlunos; i++){
	printf("---CADASTRO DO ALUNO---\n");
	printf("Nome do(a) aluno(a): \n");
		fflush(stdin);
	gets(nomeAluno[i]);
	printf("Informe a primeira nota do(a) aluno(a): \n");
		scanf("%f", &nota1[i]);
	printf("Informe a segunda nota do(a) aluno(a): \n");
		scanf("%f", &nota2[i]);
system("cls");
	}
system("cls");

//IMPRESSÃO DE NOTAS

for(; j < numAlunos; j++){
	printf("---BOLETIM DO ALUNO---\n");
	printf("Nome do(a) aluno(a): %s\n", nomeAluno[j]);
	printf("Primeira nota do(a) aluno(a): %.2f\n", nota1[j]);
	printf("Primeira nota do(a) aluno(a): %.2f\n", nota2[j]);
media = (nota1[j] + nota2[j]) / 2;
	printf("Média do(a) aluno(a): %.2f\n", media);

	if(media < 7){
		printf("Aluno(a) Reprovado(a).\n");
	} 	else {
		printf("Aluno(a) Aprovado(a).\n");
		}
	}
	
return 0;
}

