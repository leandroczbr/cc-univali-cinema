#include <stdio.h>

int main()
{
    // Matrizes representando as fileiras A, B e C (10 assentos cada)
    int fileiraA[10], fileiraB[10], fileiraC[10];

    // Array de ponteiros para facilitar o acesso genérico às fileiras
    int * addresses[3] = {fileiraA, fileiraB, fileiraC};

    // Inicializa todos os assentos como disponíveis (0)
    for (int i = 0; i < 10; i++ ) {
        fileiraA[i] = 0;
        fileiraB[i] = 0;
        fileiraC[i] = 0;
    }

    // Loop principal de reservas
    while(1){
        int escolhanum, decisao;
        char escolhachar;

        // Exibe os assentos disponíveis e ocupados
        for (int y = 0; y < 3; y++) {
            for (int x = 0; x < 10; x++){
                if ( *(addresses[y]+x) == 0) {
                    // Assento disponível: exibe código (ex: A1)
                    printf("[%c%d] ", 65+y, x+1);
                } else {
                    // Assento ocupado
                    printf("[XX] ");
                }
            }
            printf("\n");
        }

        // Solicita a escolha do usuário
        printf("escolha um acento\n");
        scanf("%c %d", &escolhachar, &escolhanum);
        getchar();  // Limpa o buffer após o scanf

        // Validação do número do assento
        if (escolhanum > 10 || escolhanum < 1) {
            printf("intervalo errado, os acentos vao de 1-10\n");
            continue;
        }

        // Cálculo da fileira com base no caractere (A=0, B=1, C=2)
        if ( *(addresses[escolhachar - 65]+(escolhanum-1)) == 0) {
            *(addresses[escolhachar - 65]+(escolhanum-1)) = 1;
            printf("fileira %c%d escolhida\n", escolhachar, escolhanum);
        } else {
            printf("fileira ocupada, animal kkkkkk\n");
        }

        // Pergunta se o usuário quer continuar reservando
        printf("Deseja continuar reservando? (1 = sim, 0 = nao)\n");
        scanf("%d", &decisao);
        if (decisao == 0) {
            break;
        }
        getchar();  // Limpa o buffer após o scanf
    }

    return 0;
}
