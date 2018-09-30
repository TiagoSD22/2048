#ifndef FUNCOES_H
#define FUNCOES_H

#include<stdlib.h>
#include<stdio.h>
#include<math.h>
#include<time.h>
#include<string.h>

#define VERDADEIRO 1
#define FALSO 0

typedef short logico;

int** Alocar_Matriz();
void Liberar_Matriz(int**);
void Inicializar_Matriz(int**);
void Acrescentar_bloco(int**);
void Mover_para_Cima(int**);
logico Combinar_para_Cima(int**);
void Mover_para_Baixo(int**);
logico Combinar_para_Baixo(int**);
void Mover_para_Esquerda(int**);
logico Combinar_para_Esquerda(int**);
void Mover_para_Direita(int**);
logico Combinar_para_Direita(int**);
logico Pode_mover_para_Baixo(int**);
logico Pode_mover_para_Cima(int**);
logico Pode_mover_para_Esquerda(int**);
logico Pode_mover_para_Direita(int**);
logico Vizinhanca_Compativel(int**,int,int);
logico Vizinhanca_Vazia(int**,int,int);
logico Existem_Movimentos_Possiveis(int**);
logico Venceu(int**);

#endif // FUNCOES_H
