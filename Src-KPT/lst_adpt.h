/* lst_adpt.h
 * Defini��o do TAD lista ordenada adaptada com operacos Get(obter ultimo elemento)
 * First(obter primeiro elemento) e remocao da K-essima posicao.
 * Utilizando tecnicas de encadeamento duplo.
 *
 * Felipe Ferreira
 */

#ifndef _LST_ADPT_H
#define _LST_ADPT_H
#include <stdbool.h>

typedef int lst_info;
typedef struct lst_no * lst_ptr;
struct lst_no {
    lst_ptr ant;
    lst_info dado;
    lst_ptr prox;
};

/* fun��o que inicializa a lista */
void lst_init(lst_ptr *);

/* fun��o que retorna o tamanho da lista */
int lst_len(lst_ptr);

/* fun��o que insere um novo n� na lista ordenada */
void lst_put(lst_ptr, lst_info);

void lst_print_cresc(lst_ptr);

void lst_printf_dec(lst_ptr);

lst_ptr lst_get(lst_ptr, int);

/* fun��o que obtem o primeiro elemento da lista */
lst_info lst_first(lst_ptr);

lst_info lst_last(lst_ptr l);

void lst_remover(lst_ptr l, int);

void lst_imprimir_cresc(lst_ptr l);

#endif //_LST_ADPT_

