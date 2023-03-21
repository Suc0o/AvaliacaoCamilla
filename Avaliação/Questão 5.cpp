#include <stdio.h>

void limp(){
	
	char c;
	
	while((c = getchar()) != '\n' && c != EOF);
}

int main(){
	
	char nome[30];
	int m[3][5];
	int y;
	int x;
	int cafezais = 0;
	
	printf("Digite o nome da fazendo ou sitio: ");
	fgets(nome, 30, stdin);
	
	limp();

    for(x = 1; x <= 3; x++){
    	for(y = 1; y <= 5; y++){
    		
    		printf("Digite a altura do cafeeiro [%d][%d]: ", x, y);
    		scanf("%f", &m[x][y]);
    		
    		if(m[x][y] > 3){
    			cafezais = cafezais + 1;
			}
    		
		}
		
	}
	
	printf("%s tem %d plantas garantidas para cultivo.", nome, cafezais);
	
	return 0;
	
}
