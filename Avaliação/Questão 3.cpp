#include <stdio.h>

typedef struct dados{
    int cod;
    char disciplina[50];
}dados;

typedef struct aluno{
	char nome[50];
	float nota1;
	float nota2;
	dados dados;
	int matricula;
}Aluno;

float media(Aluno *aluno){
	
	float med; 
	return ((aluno->nota1 + aluno->nota2) / 2);
	

}

void limp(){
	char c;
	while((c = getchar()) != '\n' && c != EOF); 
	
}


int main(){
	
	Aluno aluno[30];
	
	for(int i = 1; i < 30; i++){
	
	printf("Digite o nome do aluno: ");
	fgets(aluno[i].nome, 50, stdin);
	
	printf(" Digite a matricula do aluno: ");
	scanf("%d", &aluno[i].matricula);
	
	printf("Digite o codigo da turma: ");
	scanf("%d", &aluno[i].dados.cod);
	
	printf("Digite a disciplina: ");
	fgets(aluno[i].dados.disciplina, 50, stdin);
	
	limp();
	
	printf("Digite a primeira nota do aluno: ");
	scanf("%f", &aluno[i].nota1);
	
	printf("Digite a segunda nota do aluno: ");
	scanf("%f", &aluno[i].nota2);
	
	printf("Aluno: %s\nMatricula: %d\nCodigo de turma: %d\n Disciplina: %s\nNota 1: %f\nNota 2.%f\n Media: %f\n", aluno[i].nome, aluno[i].matricula, 
	aluno[i].dados.cod, aluno[i].dados.disciplina, aluno[i].nota1, aluno[i].nota2, media(&aluno[i]));
	
}
                    
	return 0;
	
	
}
