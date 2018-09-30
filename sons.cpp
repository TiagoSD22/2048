#include "sons.h"

Sons::Sons(QSoundEffect *parent) : QSoundEffect(parent)
{
    start.setSource(QUrl::fromLocalFile("start.wav"));
    movimento.setSource(QUrl::fromLocalFile("movimento_realizado.wav"));
    movimento_impedido.setSource(QUrl::fromLocalFile("movimento_impedido.wav"));
    ponto.setSource(QUrl::fromLocalFile("ponto.wav"));
    vitoria.setSource(QUrl::fromLocalFile("vitoria.wav"));
    derrota.setSource(QUrl::fromLocalFile("perdeu.wav"));
    tema.setSource(QUrl::fromLocalFile("tema.wav"));
}

void Sons::Tocar_start(){
    start.play();
}

void Sons::Tocar_movimento(){
    movimento.play();
}

void Sons::Tocar_movimento_impedido(){
    movimento_impedido.play();
}

void Sons::Tocar_ponto(){
    ponto.play();
}

void Sons::Tocar_vitoria(){
    vitoria.play();
}

void Sons::Tocar_derrota(){
    derrota.play();
}

void Sons::Tocar_tema(){
    tema.setLoopCount(Infinite);
    tema.play();
}

void Sons::Parar_Tema(bool arg){
    if(arg){tema.setMuted(1);}
    else{tema.setMuted(0);}
}

bool Sons::Tema_esta_tocando(){
    if(!tema.isMuted()){
        return 1;
    }
    return 0;
}
