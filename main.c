#include <stdio.h>
#include <stdlib.h>

int main()
{
    unsigned int a = 0, b = 0, menor_primo = 1, maior_primo = 1;

    scanf("%d %d", &a, &b);

    for (; a <= b; a++){
        int primo = 1;
        for (int i = 2; i <= a/2; i++){
            if (a%i==0){
                    primo = 0;
            }
        }
        if (primo){
            if (menor_primo == 1){
                    menor_primo = a;
            }
            if (a > maior_primo){
                    maior_primo = a;
            }
        }
    }
    if (menor_primo == 1){
        printf("nenhum primo no intervalo");
    }
    else{
        printf("menor primo: %d\nmaior primo: %d", menor_primo, maior_primo);
    }

    return 0;
}
