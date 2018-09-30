#include"./funcoes.h"

int** Alocar_Matriz(){
    int** matriz;
    matriz = (int**)malloc(4 * sizeof(int*));
    int i;
    for(i = 0; i < 4; i++){
        matriz[i] = (int*)malloc(4 * sizeof(int));
    }
    return matriz;
}

void Liberar_Matriz(int** matriz){
    int i;
    for( i = 0; i < 4; i++){
        free(matriz[i]);
    }
    free(matriz);
}

void Inicializar_Matriz(int** matriz){
    srand(time(NULL));
    int i,j,posicao;
    for( i = 0; i < 4; i++){
        for(j = 0; j < 4; j++){
            matriz[i][j] = 1;
        }
    }

    int vezes;
    for(vezes = 0; vezes < 2; vezes++){
        posicao = rand()%16;
        i = posicao/4;
        j = posicao%4;
        if(matriz[i][j] != 1){
            do{
                posicao = rand()%16;
                i = posicao/4;
                j = posicao%4;
            }while(matriz[i][j] != 1);
        }
        matriz[i][j] = 2;
    }
}

void Acrescentar_bloco(int**matriz){
    int posicao,i,j;
    srand(time(NULL));
    posicao = rand()%16;
    i = posicao/4;
    j = posicao%4;
    if(matriz[i][j] != 1){
        do{
            posicao = rand()%16;
            i = posicao/4;
            j = posicao%4;
        }while(matriz[i][j] != 1);
    }
    int valor_escolhido = rand()%10;
    if(valor_escolhido < 7){
        matriz[i][j] = 2;
    }
    else{
        matriz[i][j] = 4;
    }
}

void Mover_para_Cima(int** matriz){
    int i,j,i_aux;
    for(j = 0; j < 4; j++){
        for(i = 0; i < 4; i++){
            if(i < 3){
                if(matriz[i][j] == 1){
                    i_aux = i + 1;
                    while(matriz[i][j] == 1 && i_aux < 4){
                        matriz[i][j] = matriz[i_aux][j];
                        matriz[i_aux][j] = 1;
                        i_aux++;
                    }
                }
            }
            else{
                if(matriz[i-1][j] == 1){
                    matriz[i][j] = 1;
                }
            }
        }
    }
}

logico Combinar_para_Cima(int** matriz){
    logico combinou = FALSO;
    int i,j;
    for(j = 0; j < 4; j++){
        for(i = 0; i < 3; i++){
            if(matriz[i][j] != 1){
                if(matriz[i+1][j] == matriz[i][j]){
                    matriz[i][j] = matriz[i][j] + matriz[i+1][j];
                    matriz[i+1][j] = 1;
                    combinou = VERDADEIRO;
                }
            }
        }
    }
    return combinou;
}

void Mover_para_Baixo(int** matriz){
    int i,j,i_aux;
    for(j = 0; j < 4; j++){
        for(i = 3; i >= 0; i--){
            if(i > 0){
                if(matriz[i][j] == 1){
                    i_aux = i - 1;
                    while(matriz[i][j] == 1 && i_aux >= 0){
                        matriz[i][j] = matriz[i_aux][j];
                        matriz[i_aux][j] = 1;
                        i_aux--;
                    }
                }
            }
            else{
                if(matriz[i+1][j] == 1){
                    matriz[i][j] = 1;
                }
            }
        }
    }
}

logico Combinar_para_Baixo(int** matriz){
    logico combinou = FALSO;
    int i,j;
    for(j = 0; j < 4; j++){
        for(i = 3; i > 0; i--){
            if(matriz[i][j] != 1){
                if(matriz[i-1][j] == matriz[i][j]){
                    matriz[i][j] = matriz[i][j] + matriz[i-1][j];
                    matriz[i-1][j] = 1;
                    combinou = VERDADEIRO;
                }
            }
        }
    }
    return combinou;
}

void Mover_para_Esquerda(int** matriz){
    int i,j,j_aux;
    for(i = 0; i < 4; i++){
        for(j = 0; j < 4; j++){
            if(j < 3){
                if(matriz[i][j] == 1){
                    j_aux = j + 1;
                    while(matriz[i][j] == 1 && j_aux < 4){
                        matriz[i][j] = matriz[i][j_aux];
                        matriz[i][j_aux] = 1;
                        j_aux++;
                    }
                }
            }
            else{
                if(matriz[i][j-1] == 1){
                    matriz[i][j] = 1;
                }
            }
        }
    }
}

logico Combinar_para_Esquerda(int** matriz){
    logico combinou = FALSO;
    int i,j;
    for(i = 0; i < 4; i++){
        for(j = 0; j < 3; j++){
            if(matriz[i][j] != 1){
                if(matriz[i][j+1] == matriz[i][j]){
                    matriz[i][j] = matriz[i][j] + matriz[i][j+1];
                    matriz[i][j+1] = 1;
                    combinou = VERDADEIRO;
                }
            }
        }
    }
    return combinou;
}

void Mover_para_Direita(int** matriz){
    int i,j,j_aux;
    for(i = 0; i < 4; i++){
        for(j = 3; j >= 0; j--){
            if(j > 0){
                if(matriz[i][j] == 1){
                    j_aux = j - 1;
                    while(matriz[i][j] == 1 && j_aux >= 0){
                        matriz[i][j] = matriz[i][j_aux];
                        matriz[i][j_aux] = 1;
                        j_aux--;
                    }
                }
            }
            else{
                if(matriz[i][j+1] == 1){
                    matriz[i][j] = 1;
                }
            }
        }
    }
}

logico Combinar_para_Direita(int** matriz){
    logico combinou = FALSO;
    int i,j;
    for(i = 0; i < 4; i++){
        for(j = 3; j > 0; j--){
            if(matriz[i][j] != 1){
                if(matriz[i][j-1] == matriz[i][j]){
                    matriz[i][j] = matriz[i][j] + matriz[i][j-1];
                    matriz[i][j-1] = 1;
                    combinou = VERDADEIRO;
                }
            }
        }
    }
    return combinou;
}

logico Pode_mover_para_Baixo(int** matriz){
    int i,j;
    for(i = 0; i < 3; i++){
        for(j = 0; j < 4; j++){
            if(matriz[i][j] != 1){
                if((matriz[i+1][j] == matriz[i][j]) || (matriz[i+1][j] == 1)){
                    return VERDADEIRO;
                }
            }
        }
    }
    return FALSO;
}

logico Pode_mover_para_Cima(int** matriz){
    int i,j;
    for(i = 1; i < 4; i++){
        for(j = 0; j < 4; j++){
            if(matriz[i][j] != 1){
                if((matriz[i-1][j] == matriz[i][j]) || (matriz[i-1][j] == 1)){
                    return VERDADEIRO;
                }
            }
        }
    }
    return FALSO;
}

logico Pode_mover_para_Esquerda(int** matriz){
    int i,j;
    for(i = 0; i < 4; i++){
        for(j = 1; j < 4; j++){
            if(matriz[i][j] != 1){
                if((matriz[i][j-1] == matriz[i][j]) || (matriz[i][j-1] == 1)){
                    return VERDADEIRO;
                }
            }
        }
    }
    return FALSO;
}

logico Pode_mover_para_Direita(int** matriz){
    int i,j;
    for(i = 0; i < 4; i++){
        for(j = 0; j < 3; j++){
            if(matriz[i][j] != 1){
                if((matriz[i][j+1] == matriz[i][j]) || (matriz[i][j+1] == 1)){
                    return VERDADEIRO;
                }
            }
        }
    }
    return FALSO;
}

logico Vizinhanca_Compativel(int** matriz,int posicao_linha,int posicao_coluna){
    if(posicao_linha - 1 >= 0 && posicao_linha + 1 <= 3 && posicao_coluna - 1 >= 0 && posicao_coluna + 1 <= 3){
        if((matriz[posicao_linha - 1][posicao_coluna] == matriz[posicao_linha][posicao_coluna])
        || (matriz[posicao_linha + 1][posicao_coluna] == matriz[posicao_linha][posicao_coluna])
        || (matriz[posicao_linha][posicao_coluna - 1] == matriz[posicao_linha][posicao_coluna])
        || (matriz[posicao_linha][posicao_coluna + 1] == matriz[posicao_linha][posicao_coluna])){
            return VERDADEIRO;
        }
    }
    else{
        if(posicao_linha - 1 < 0){
            if(posicao_coluna - 1 < 0){
                if((matriz[posicao_linha + 1][posicao_coluna] == matriz[posicao_linha][posicao_coluna])
                || (matriz[posicao_linha][posicao_coluna + 1] == matriz[posicao_linha][posicao_coluna])){
                    return VERDADEIRO;
                }
            }
            else{
                if(posicao_coluna + 1 > 3){
                    if((matriz[posicao_linha + 1][posicao_coluna] == matriz[posicao_linha][posicao_coluna])
                    || (matriz[posicao_linha][posicao_coluna - 1] == matriz[posicao_linha][posicao_coluna])){
                        return VERDADEIRO;
                    }
                }
                else{
                    if((matriz[posicao_linha + 1][posicao_coluna] == matriz[posicao_linha][posicao_coluna])
                    || (matriz[posicao_linha][posicao_coluna + 1] == matriz[posicao_linha][posicao_coluna])
                    || (matriz[posicao_linha][posicao_coluna - 1] == matriz[posicao_linha][posicao_coluna])){
                        return VERDADEIRO;
                    }
                }
            }
        }
        else{
            if(posicao_linha + 1 > 3){
                if(posicao_coluna - 1 < 0){
                    if((matriz[posicao_linha - 1][posicao_coluna] == matriz[posicao_linha][posicao_coluna])
                    || (matriz[posicao_linha][posicao_coluna + 1] == matriz[posicao_linha][posicao_coluna])){
                        return VERDADEIRO;
                    }
                }
                else{
                    if(posicao_coluna + 1 > 3){
                        if((matriz[posicao_linha - 1][posicao_coluna] == matriz[posicao_linha][posicao_coluna])
                        || (matriz[posicao_linha][posicao_coluna - 1] == matriz[posicao_linha][posicao_coluna])){
                            return VERDADEIRO;
                        }
                    }
                    else{
                        if((matriz[posicao_linha - 1][posicao_coluna] == matriz[posicao_linha][posicao_coluna])
                        || (matriz[posicao_linha][posicao_coluna + 1] == matriz[posicao_linha][posicao_coluna])
                        || (matriz[posicao_linha][posicao_coluna - 1] == matriz[posicao_linha][posicao_coluna])){
                            return VERDADEIRO;
                        }
                    }
                }
            }
            else{
                if(posicao_coluna - 1 < 0){
                    if((matriz[posicao_linha - 1][posicao_coluna] == matriz[posicao_linha][posicao_coluna])
                    || (matriz[posicao_linha + 1][posicao_coluna] == matriz[posicao_linha][posicao_coluna])
                    || (matriz[posicao_linha][posicao_coluna + 1] == matriz[posicao_linha][posicao_coluna])){
                        return VERDADEIRO;
                    }
                }
                else{
                    if(posicao_coluna + 1 > 3){
                        if((matriz[posicao_linha - 1][posicao_coluna] == matriz[posicao_linha][posicao_coluna])
                        || (matriz[posicao_linha + 1][posicao_coluna] == matriz[posicao_linha][posicao_coluna])
                        || (matriz[posicao_linha][posicao_coluna - 1] == matriz[posicao_linha][posicao_coluna])){
                            return VERDADEIRO;
                        }
                    }
                }
            }
        }
    }
    return FALSO;
}

logico Vizinhanca_Vazia(int** matriz,int posicao_linha,int posicao_coluna){
    if(posicao_linha - 1 >= 0 && posicao_linha + 1 <= 3 && posicao_coluna - 1 >= 0 && posicao_coluna + 1 <= 3){
        if((matriz[posicao_linha - 1][posicao_coluna] == 1)
        || (matriz[posicao_linha + 1][posicao_coluna] == 1)
        || (matriz[posicao_linha][posicao_coluna - 1] == 1)
        || (matriz[posicao_linha][posicao_coluna + 1] == 1)){
            return VERDADEIRO;
        }
    }
    else{
        if(posicao_linha - 1 < 0){
            if(posicao_coluna - 1 < 0){
                if((matriz[posicao_linha + 1][posicao_coluna] == 1)
                || (matriz[posicao_linha][posicao_coluna + 1] == 1)){
                    return VERDADEIRO;
                }
            }
            else{
                if(posicao_coluna + 1 > 3){
                    if((matriz[posicao_linha + 1][posicao_coluna] == 1)
                    || (matriz[posicao_linha][posicao_coluna - 1] == 1)){
                        return VERDADEIRO;
                    }
                }
                else{
                    if((matriz[posicao_linha + 1][posicao_coluna] == 1)
                    || (matriz[posicao_linha][posicao_coluna + 1] == 1)
                    || (matriz[posicao_linha][posicao_coluna - 1] == 1)){
                        return VERDADEIRO;
                    }
                }
            }
        }
        else{
            if(posicao_linha + 1 > 3){
                if(posicao_coluna - 1 < 0){
                    if((matriz[posicao_linha - 1][posicao_coluna] == 1)
                    || (matriz[posicao_linha][posicao_coluna + 1] == 1)){
                        return VERDADEIRO;
                    }
                }
                else{
                    if(posicao_coluna + 1 > 3){
                        if((matriz[posicao_linha - 1][posicao_coluna] == 1)
                        || (matriz[posicao_linha][posicao_coluna - 1] == 1)){
                            return VERDADEIRO;
                        }
                    }
                    else{
                        if((matriz[posicao_linha - 1][posicao_coluna] == 1)
                        || (matriz[posicao_linha][posicao_coluna + 1] == 1)
                        || (matriz[posicao_linha][posicao_coluna - 1] == 1)){
                            return VERDADEIRO;
                        }
                    }
                }
            }
            else{
                if(posicao_coluna - 1 < 0){
                    if((matriz[posicao_linha - 1][posicao_coluna] == 1)
                    || (matriz[posicao_linha + 1][posicao_coluna] == 1)
                    || (matriz[posicao_linha][posicao_coluna + 1] == 1)){
                        return VERDADEIRO;
                    }
                }
                else{
                    if(posicao_coluna + 1 > 3){
                        if((matriz[posicao_linha - 1][posicao_coluna] == 1)
                        || (matriz[posicao_linha + 1][posicao_coluna] == 1)
                        || (matriz[posicao_linha][posicao_coluna - 1] == 1)){
                            return VERDADEIRO;
                        }
                    }
                }
            }
        }
    }
    return FALSO;
}

logico Existem_Movimentos_Possiveis(int** matriz){
    int i,j;
    for(i = 0; i < 4; i++){
        for(j = 0; j < 4; j++){
            if(matriz[i][j] != 1){
                if(Vizinhanca_Compativel(matriz,i,j) || Vizinhanca_Vazia(matriz,i,j)){
                    return VERDADEIRO;
                }
            }
        }
    }
    return FALSO;
}

logico Venceu(int** matriz){
    int i,j;
    for(i = 0; i < 4; i++){
        for(j = 0; j < 4; j++){
            if(matriz[i][j] == 2048){
                return VERDADEIRO;
            }
        }
    }
    return FALSO;
}
