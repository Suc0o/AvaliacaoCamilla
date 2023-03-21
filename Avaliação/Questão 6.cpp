#include <stdio.h>
#include <string.h>

typedef struct Nome {
    char nome[50];
} Nome;

int main() {
    int i, j, y, z;
    Nome nomes[5], temp;

    printf("Digite os 50 nomes:\n");
    for (i = 0; i < 5; i++) {
        scanf("%s", nomes[i].nome);
    }

    for (z = 0; z < 5; z++) {
        for (j = z + 1; j < 5; j++) {
            if (strcmp(nomes[z].nome, nomes[j].nome) > 0) {
                temp = nomes[z];
                nomes[z] = nomes[j];
                nomes[j] = temp;
            }
        }
    }

    printf("Lista em ordem alfabética:\n");
    for(y = 0; y < 5; y++){
    	printf("%s\n", nomes[y].nome);
	}
    
    return 0;
    
}

