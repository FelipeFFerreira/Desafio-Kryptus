#include <stdio.h>
#include "lst_adpt.h"

int main()
{
    lst_ptr l;
    int op;
    int n;
    lst_info x;

    lst_init(&l);
    do {
        printf("\n\tDesafio Kryptus!\n\n");
        printf("\t<1> Realizar Put na Lista\n");
        printf("\t<2> Realizar Get-K posicao na Lista\n");
        printf("\t<3> Obter First elemento\n");
        printf("\t<4> Obter Last elemento\n");
        printf("\t<5> Remover K elemento da lista\n");
        printf("\t<6> Imprimir lista\n");
        printf("\t<7> Imprimir lista crescente\n");
        printf("\t<8> Tamanho da lista\n");
        printf("\t<0> Sair\n");
        printf("\tOpcao: ");
        scanf("%d", &op);
        switch (op) {
            case 1: printf("\n\tValor para inserir: ");
                    scanf("%d", &x);
                    lst_put(l, x);
                    break;

            case 2: printf("\n\tGet k-elemento da lista: ");
                    scanf("%d", &n);
            		printf("\t:[%d]", lst_get(l, n)->dado);
                    break;

            case 3: printf("\n\tFirst elemento da lista: ");
            		printf("[%d]\n\t", lst_first(l));
                    break;

            case 4: printf("\nLast elemento da lista: ");
            		printf("[%d]\n\t", lst_last(l));
                    break;

            case 5: printf("\nRemover K elemento da lista: ");
                    scanf("%d", &x);
                    lst_remover(l, n);
                    break;

            case 6: printf("\n\tLista em ordem crescente\n\t");
            		lst_print_cresc(l);
                    break;

            case 7: printf("\n\tLista em ordem decrescente\n\t");
            		lst_imprimir_cresc(l);
                    break;

            case 8: printf("\n\tTamanho da lista: ");
            		printf("[%d] elementos\n\t", lst_len(l));
                    break;

            case 0: break;
            default: printf("\n\tOpcao invalida!\n");
        }
    } while (op != 0);
    return 0;
}
