 #include <stdio.h>

typedef union valor{
    int i;
    float f;
} valor;

enum tipom{
    inteiro = 1,
    decimal = 2
};

int main(){
    valor v;
    tipom m;

    printf("Que tipo de medida você deseja usar?\n");
    printf("Digite 1 para para medida inteira\nDigite 2 para medida decimal\n");
    scanf("%d", &m);

    switch(m){
        case inteiro:
            printf("Digite o valor inteiro que deseja guardar: ");
            scanf("%d", &v.i);
            break;

        case decimal:
            printf("Digite o valor decimal que deseja guardar: ");
            scanf("%f", &v.f);
            break;

        default:
            printf("Valor não aceito.");
    }

    return 0;
}
