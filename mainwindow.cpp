#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->a00->setHidden(1);
    ui->a01->setHidden(1);
    ui->a02->setHidden(1);
    ui->a03->setHidden(1);
    ui->a10->setHidden(1);
    ui->a11->setHidden(1);
    ui->a12->setHidden(1);
    ui->a13->setHidden(1);
    ui->a20->setHidden(1);
    ui->a21->setHidden(1);
    ui->a22->setHidden(1);
    ui->a23->setHidden(1);
    ui->a30->setHidden(1);
    ui->a31->setHidden(1);
    ui->a32->setHidden(1);
    ui->a33->setHidden(1);
    ui->direita->setHidden(1);
    ui->esquerda->setHidden(1);
    ui->cima->setHidden(1);
    ui->baixo->setHidden(1);
    ui->novo_jogo->setHidden(1);
    ui->game_over->setHidden(1);
    ui->frame->setHidden(1);
    ui->actionRecomecar->blockSignals(1);
    ui->actionRecomecar->setVisible(0);
    ui->menuBar->setVisible(0);
    som.Tocar_start();
}

void::MainWindow::Mostrar_matriz(int** matriz){
    if(matriz[0][0] == 1){
        ui->a00->setText(" ");
        ui->a00->setStyleSheet("*{background-color:;}");
    }
    else{
        if(matriz[0][0] == 2){
            ui->a00->setStyleSheet("*{background-color: rgb(152,251,152);}");
        }
        else if(matriz[0][0] == 4){
            ui->a00->setStyleSheet("*{background-color: rgb(144,238,144);}");
        }
        else if(matriz[0][0] == 8){
            ui->a00->setStyleSheet("*{background-color: rgb(0,250,154);}");
        }
        else if(matriz[0][0] == 16){
            ui->a00->setStyleSheet("*{background-color: rgb(0,255,127);}");
        }
        else if(matriz[0][0] == 32){
            ui->a00->setStyleSheet("*{background-color: rgb(84,167,93);}");
        }
        else if(matriz[0][0] == 64){
            ui->a00->setStyleSheet("*{background-color: rgb(60,179,113);}");
        }
        else if(matriz[0][0] == 128){
            ui->a00->setStyleSheet("*{background-color: rgb(50,205,50);}");
        }
        else if(matriz[0][0] == 256){
            ui->a00->setStyleSheet("*{background-color: rgb(124,252,0);}");
        }
        else if(matriz[0][0] == 512){
            ui->a00->setStyleSheet("*{background-color: rgb(154,205,50);}");
        }
        else if(matriz[0][0] == 1024){
            ui->a00->setStyleSheet("*{background-color: rgb(173,255,47);}");
        }
        else if(matriz[0][0] == 2048){
            ui->a00->setStyleSheet("*{background-color: rgb(0,255,0);}");
        }
        ui->a00->setText(QString::number(matriz[0][0]));
    }
    if(matriz[0][1] == 1){
        ui->a01->setText(" ");
        ui->a01->setStyleSheet("*{background-color:;}");
    }
    else{
        if(matriz[0][1] == 2){
            ui->a01->setStyleSheet("*{background-color: rgb(152,251,152);}");
        }
        else if(matriz[0][1] == 4){
            ui->a01->setStyleSheet("*{background-color: rgb(144,238,144);}");
        }
        else if(matriz[0][1] == 8){
            ui->a01->setStyleSheet("*{background-color: rgb(0,250,154);}");
        }
        else if(matriz[0][1] == 16){
            ui->a01->setStyleSheet("*{background-color: rgb(0,255,127);}");
        }
        else if(matriz[0][1] == 32){
            ui->a01->setStyleSheet("*{background-color: rgb(84,167,93);}");
        }
        else if(matriz[0][1] == 64){
            ui->a01->setStyleSheet("*{background-color: rgb(60,179,113);}");
        }
        else if(matriz[0][1] == 128){
            ui->a01->setStyleSheet("*{background-color: rgb(50,205,50);}");
        }
        else if(matriz[0][1] == 256){
            ui->a01->setStyleSheet("*{background-color: rgb(124,252,0);}");
        }
        else if(matriz[0][1] == 512){
            ui->a01->setStyleSheet("*{background-color: rgb(154,205,50);}");
        }
        else if(matriz[0][1] == 1024){
            ui->a01->setStyleSheet("*{background-color: rgb(173,255,47);}");
        }
        else if(matriz[0][1] == 2048){
            ui->a01->setStyleSheet("*{background-color: rgb(0,255,0);}");
        }
        ui->a01->setText(QString::number(matriz[0][1]));
    }
    if(matriz[0][2] == 1){
        ui->a02->setText(" ");
        ui->a02->setStyleSheet("*{background-color:;}");
    }
    else{
        if(matriz[0][2] == 2){
            ui->a02->setStyleSheet("*{background-color: rgb(152,251,152);}");
        }
        else if(matriz[0][2] == 4){
            ui->a02->setStyleSheet("*{background-color: rgb(144,238,144);}");
        }
        else if(matriz[0][2] == 8){
            ui->a02->setStyleSheet("*{background-color: rgb(0,250,154);}");
        }
        else if(matriz[0][2] == 16){
            ui->a02->setStyleSheet("*{background-color: rgb(0,255,127);}");
        }
        else if(matriz[0][2] == 32){
            ui->a02->setStyleSheet("*{background-color: rgb(84,167,93);}");
        }
        else if(matriz[0][2] == 64){
            ui->a02->setStyleSheet("*{background-color: rgb(60,179,113);}");
        }
        else if(matriz[0][2] == 128){
            ui->a02->setStyleSheet("*{background-color: rgb(50,205,50);}");
        }
        else if(matriz[0][2] == 256){
            ui->a02->setStyleSheet("*{background-color: rgb(124,252,0);}");
        }
        else if(matriz[0][2] == 512){
            ui->a02->setStyleSheet("*{background-color: rgb(154,205,50);}");
        }
        else if(matriz[0][2] == 1024){
            ui->a02->setStyleSheet("*{background-color: rgb(173,255,47);}");
        }
        else if(matriz[0][2] == 2048){
            ui->a02->setStyleSheet("*{background-color: rgb(0,255,0);}");
        }
        ui->a02->setText(QString::number(matriz[0][2]));
    }
    if(matriz[0][3] == 1){
        ui->a03->setText(" ");
        ui->a03->setStyleSheet("*{background-color:;}");
    }
    else{
        if(matriz[0][3] == 2){
            ui->a03->setStyleSheet("*{background-color: rgb(152,251,152);}");
        }
        else if(matriz[0][3] == 4){
            ui->a03->setStyleSheet("*{background-color: rgb(144,238,144);}");
        }
        else if(matriz[0][3] == 8){
            ui->a03->setStyleSheet("*{background-color: rgb(0,250,154);}");
        }
        else if(matriz[0][3] == 16){
            ui->a03->setStyleSheet("*{background-color: rgb(0,255,127);}");
        }
        else if(matriz[0][3] == 32){
            ui->a03->setStyleSheet("*{background-color: rgb(84,167,93);}");
        }
        else if(matriz[0][3] == 64){
            ui->a03->setStyleSheet("*{background-color: rgb(60,179,113);}");
        }
        else if(matriz[0][3] == 128){
            ui->a03->setStyleSheet("*{background-color: rgb(50,205,50);}");
        }
        else if(matriz[0][3] == 256){
            ui->a03->setStyleSheet("*{background-color: rgb(124,252,0);}");
        }
        else if(matriz[0][3] == 512){
            ui->a03->setStyleSheet("*{background-color: rgb(154,205,50);}");
        }
        else if(matriz[0][3] == 1024){
            ui->a03->setStyleSheet("*{background-color: rgb(173,255,47);}");
        }
        else if(matriz[0][3] == 2048){
            ui->a03->setStyleSheet("*{background-color: rgb(0,255,0);}");
        }
        ui->a03->setText(QString::number(matriz[0][3]));
    }
    if(matriz[1][0] == 1){
        ui->a10->setText(" ");
        ui->a10->setStyleSheet("*{background-color:;}");
    }
    else{
        if(matriz[1][0] == 2){
            ui->a10->setStyleSheet("*{background-color: rgb(152,251,152);}");
        }
        else if(matriz[1][0] == 4){
            ui->a10->setStyleSheet("*{background-color: rgb(144,238,144);}");
        }
        else if(matriz[1][0] == 8){
            ui->a10->setStyleSheet("*{background-color: rgb(0,250,154);}");
        }
        else if(matriz[1][0] == 16){
            ui->a10->setStyleSheet("*{background-color: rgb(0,255,127);}");
        }
        else if(matriz[1][0] == 32){
            ui->a10->setStyleSheet("*{background-color: rgb(84,167,93);}");
        }
        else if(matriz[1][0] == 64){
            ui->a10->setStyleSheet("*{background-color: rgb(60,179,113);}");
        }
        else if(matriz[1][0] == 128){
            ui->a10->setStyleSheet("*{background-color: rgb(50,205,50);}");
        }
        else if(matriz[1][0] == 256){
            ui->a10->setStyleSheet("*{background-color: rgb(124,252,0);}");
        }
        else if(matriz[1][0] == 512){
            ui->a10->setStyleSheet("*{background-color: rgb(154,205,50);}");
        }
        else if(matriz[1][0] == 1024){
            ui->a10->setStyleSheet("*{background-color: rgb(173,255,47);}");
        }
        else if(matriz[1][0] == 2048){
            ui->a10->setStyleSheet("*{background-color: rgb(0,255,0);}");
        }
        ui->a10->setText(QString::number(matriz[1][0]));
    }
    if(matriz[1][1] == 1){
        ui->a11->setText(" ");
        ui->a11->setStyleSheet("*{background-color:;}");
    }
    else{
        if(matriz[1][1] == 2){
            ui->a11->setStyleSheet("*{background-color: rgb(152,251,152);}");
        }
        else if(matriz[1][1] == 4){
            ui->a11->setStyleSheet("*{background-color: rgb(144,238,144);}");
        }
        else if(matriz[1][1] == 8){
            ui->a11->setStyleSheet("*{background-color: rgb(0,250,154);}");
        }
        else if(matriz[1][1] == 16){
            ui->a11->setStyleSheet("*{background-color: rgb(0,255,127);}");
        }
        else if(matriz[1][1] == 32){
            ui->a11->setStyleSheet("*{background-color: rgb(84,167,93);}");
        }
        else if(matriz[1][1] == 64){
            ui->a11->setStyleSheet("*{background-color: rgb(60,179,113);}");
        }
        else if(matriz[1][1] == 128){
            ui->a11->setStyleSheet("*{background-color: rgb(50,205,50);}");
        }
        else if(matriz[1][1] == 256){
            ui->a11->setStyleSheet("*{background-color: rgb(124,252,0);}");
        }
        else if(matriz[1][1] == 512){
            ui->a11->setStyleSheet("*{background-color: rgb(154,205,50);}");
        }
        else if(matriz[1][1] == 1024){
            ui->a11->setStyleSheet("*{background-color: rgb(173,255,47);}");
        }
        else if(matriz[1][1] == 2048){
            ui->a11->setStyleSheet("*{background-color: rgb(0,255,0);}");
        }
        ui->a11->setText(QString::number(matriz[1][1]));
    }
    if(matriz[1][2] == 1){
        ui->a12->setText(" ");
        ui->a12->setStyleSheet("*{background-color:;}");
    }
    else{
        if(matriz[1][2] == 2){
            ui->a12->setStyleSheet("*{background-color: rgb(152,251,152);}");
        }
        else if(matriz[1][2] == 4){
            ui->a12->setStyleSheet("*{background-color: rgb(144,238,144);}");
        }
        else if(matriz[1][2] == 8){
            ui->a12->setStyleSheet("*{background-color: rgb(0,250,154);}");
        }
        else if(matriz[1][2] == 16){
            ui->a12->setStyleSheet("*{background-color: rgb(0,255,127);}");
        }
        else if(matriz[1][2] == 32){
            ui->a12->setStyleSheet("*{background-color: rgb(84,167,93);}");
        }
        else if(matriz[1][2] == 64){
            ui->a12->setStyleSheet("*{background-color: rgb(60,179,113);}");
        }
        else if(matriz[1][2] == 128){
            ui->a12->setStyleSheet("*{background-color: rgb(50,205,50);}");
        }
        else if(matriz[1][2] == 256){
            ui->a12->setStyleSheet("*{background-color: rgb(124,252,0);}");
        }
        else if(matriz[1][2] == 512){
            ui->a12->setStyleSheet("*{background-color: rgb(154,205,50);}");
        }
        else if(matriz[1][2] == 1024){
            ui->a12->setStyleSheet("*{background-color: rgb(173,255,47);}");
        }
        else if(matriz[1][2] == 2048){
            ui->a12->setStyleSheet("*{background-color: rgb(0,255,0);}");
        }
        ui->a12->setText(QString::number(matriz[1][2]));
    }
    if(matriz[1][3] == 1){
        ui->a13->setText(" ");
        ui->a13->setStyleSheet("*{background-color:;}");
    }
    else{
        if(matriz[1][3] == 2){
            ui->a13->setStyleSheet("*{background-color: rgb(152,251,152);}");
        }
        else if(matriz[1][3] == 4){
            ui->a13->setStyleSheet("*{background-color: rgb(144,238,144);}");
        }
        else if(matriz[1][3] == 8){
            ui->a13->setStyleSheet("*{background-color: rgb(0,250,154);}");
        }
        else if(matriz[1][3] == 16){
            ui->a13->setStyleSheet("*{background-color: rgb(0,255,127);}");
        }
        else if(matriz[1][3] == 32){
            ui->a13->setStyleSheet("*{background-color: rgb(84,167,93);}");
        }
        else if(matriz[1][3] == 64){
            ui->a13->setStyleSheet("*{background-color: rgb(60,179,113);}");
        }
        else if(matriz[1][3] == 128){
            ui->a13->setStyleSheet("*{background-color: rgb(50,205,50);}");
        }
        else if(matriz[1][3] == 256){
            ui->a13->setStyleSheet("*{background-color: rgb(124,252,0);}");
        }
        else if(matriz[1][3] == 512){
            ui->a13->setStyleSheet("*{background-color: rgb(154,205,50);}");
        }
        else if(matriz[1][3] == 1024){
            ui->a13->setStyleSheet("*{background-color: rgb(173,255,47);}");
        }
        else if(matriz[1][3] == 2048){
            ui->a13->setStyleSheet("*{background-color: rgb(0,255,0);}");
        }
        ui->a13->setText(QString::number(matriz[1][3]));
    }
    if(matriz[2][0] == 1){
        ui->a20->setText(" ");
        ui->a20->setStyleSheet("*{background-color:;}");
    }
    else{
        if(matriz[2][0] == 2){
            ui->a20->setStyleSheet("*{background-color: rgb(152,251,152);}");
        }
        else if(matriz[2][0] == 4){
            ui->a20->setStyleSheet("*{background-color: rgb(144,238,144);}");
        }
        else if(matriz[2][0] == 8){
            ui->a20->setStyleSheet("*{background-color: rgb(0,250,154);}");
        }
        else if(matriz[2][0] == 16){
            ui->a20->setStyleSheet("*{background-color: rgb(0,255,127);}");
        }
        else if(matriz[2][0] == 32){
            ui->a20->setStyleSheet("*{background-color: rgb(84,167,93);}");
        }
        else if(matriz[2][0] == 64){
            ui->a20->setStyleSheet("*{background-color: rgb(60,179,113);}");
        }
        else if(matriz[2][0] == 128){
            ui->a20->setStyleSheet("*{background-color: rgb(50,205,50);}");
        }
        else if(matriz[2][0] == 256){
            ui->a20->setStyleSheet("*{background-color: rgb(124,252,0);}");
        }
        else if(matriz[2][0] == 512){
            ui->a20->setStyleSheet("*{background-color: rgb(154,205,50);}");
        }
        else if(matriz[2][0] == 1024){
            ui->a20->setStyleSheet("*{background-color: rgb(173,255,47);}");
        }
        else if(matriz[2][0] == 2048){
            ui->a20->setStyleSheet("*{background-color: rgb(0,255,0);}");
        }
        ui->a20->setText(QString::number(matriz[2][0]));
    }
    if(matriz[2][1] == 1){
        ui->a21->setText(" ");
        ui->a21->setStyleSheet("*{background-color:;}");
    }
    else{
        if(matriz[2][1] == 2){
            ui->a21->setStyleSheet("*{background-color: rgb(152,251,152);}");
        }
        else if(matriz[2][1] == 4){
            ui->a21->setStyleSheet("*{background-color: rgb(144,238,144);}");
        }
        else if(matriz[2][1] == 8){
            ui->a21->setStyleSheet("*{background-color: rgb(0,250,154);}");
        }
        else if(matriz[2][1] == 16){
            ui->a21->setStyleSheet("*{background-color: rgb(0,255,127);}");
        }
        else if(matriz[2][1] == 32){
            ui->a21->setStyleSheet("*{background-color: rgb(84,167,93);}");
        }
        else if(matriz[2][1] == 64){
            ui->a21->setStyleSheet("*{background-color: rgb(60,179,113);}");
        }
        else if(matriz[2][1] == 128){
            ui->a21->setStyleSheet("*{background-color: rgb(50,205,50);}");
        }
        else if(matriz[2][1] == 256){
            ui->a21->setStyleSheet("*{background-color: rgb(124,252,0);}");
        }
        else if(matriz[2][1] == 512){
            ui->a21->setStyleSheet("*{background-color: rgb(154,205,50);}");
        }
        else if(matriz[2][1] == 1024){
            ui->a21->setStyleSheet("*{background-color: rgb(173,255,47);}");
        }
        else if(matriz[2][1] == 2048){
            ui->a21->setStyleSheet("*{background-color: rgb(0,255,0);}");
        }
        ui->a21->setText(QString::number(matriz[2][1]));
    }
    if(matriz[2][2] == 1){
        ui->a22->setText(" ");
        ui->a22->setStyleSheet("*{background-color:;}");
    }
    else{
        if(matriz[2][2] == 2){
            ui->a22->setStyleSheet("*{background-color: rgb(152,251,152);}");
        }
        else if(matriz[2][2] == 4){
            ui->a22->setStyleSheet("*{background-color: rgb(144,238,144);}");
        }
        else if(matriz[2][2] == 8){
            ui->a22->setStyleSheet("*{background-color: rgb(0,250,154);}");
        }
        else if(matriz[2][2] == 16){
            ui->a22->setStyleSheet("*{background-color: rgb(0,255,127);}");
        }
        else if(matriz[2][2] == 32){
            ui->a22->setStyleSheet("*{background-color: rgb(84,167,93);}");
        }
        else if(matriz[2][2] == 64){
            ui->a22->setStyleSheet("*{background-color: rgb(60,179,113);}");
        }
        else if(matriz[2][2] == 128){
            ui->a22->setStyleSheet("*{background-color: rgb(50,205,50);}");
        }
        else if(matriz[2][2] == 256){
            ui->a22->setStyleSheet("*{background-color: rgb(124,252,0);}");
        }
        else if(matriz[2][2] == 512){
            ui->a22->setStyleSheet("*{background-color: rgb(154,205,50);}");
        }
        else if(matriz[2][2] == 1024){
            ui->a22->setStyleSheet("*{background-color: rgb(173,255,47);}");
        }
        else if(matriz[2][2] == 2048){
            ui->a22->setStyleSheet("*{background-color: rgb(0,255,0);}");
        }
        ui->a22->setText(QString::number(matriz[2][2]));
    }
    if(matriz[2][3] == 1){
        ui->a23->setText(" ");
        ui->a23->setStyleSheet("*{background-color:;}");
    }
    else{
        if(matriz[2][3] == 2){
            ui->a23->setStyleSheet("*{background-color: rgb(152,251,152);}");
        }
        else if(matriz[2][3] == 4){
            ui->a23->setStyleSheet("*{background-color: rgb(144,238,144);}");
        }
        else if(matriz[2][3] == 8){
            ui->a23->setStyleSheet("*{background-color: rgb(0,250,154);}");
        }
        else if(matriz[2][3] == 16){
            ui->a23->setStyleSheet("*{background-color: rgb(0,255,127);}");
        }
        else if(matriz[2][3] == 32){
            ui->a23->setStyleSheet("*{background-color: rgb(84,167,93);}");
        }
        else if(matriz[2][3] == 64){
            ui->a23->setStyleSheet("*{background-color: rgb(60,179,113);}");
        }
        else if(matriz[2][3] == 128){
            ui->a23->setStyleSheet("*{background-color: rgb(50,205,50);}");
        }
        else if(matriz[2][3] == 256){
            ui->a23->setStyleSheet("*{background-color: rgb(124,252,0);}");
        }
        else if(matriz[2][3] == 512){
            ui->a23->setStyleSheet("*{background-color: rgb(154,205,50);}");
        }
        else if(matriz[2][3] == 1024){
            ui->a23->setStyleSheet("*{background-color: rgb(173,255,47);}");
        }
        else if(matriz[2][3] == 2048){
            ui->a23->setStyleSheet("*{background-color: rgb(0,255,0);}");
        }
        ui->a23->setText(QString::number(matriz[2][3]));
    }
    if(matriz[3][0] == 1){
        ui->a30->setText(" ");
        ui->a30->setStyleSheet("*{background-color:;}");
    }
    else{
        if(matriz[3][0] == 2){
            ui->a30->setStyleSheet("*{background-color: rgb(152,251,152);}");
        }
        else if(matriz[3][0] == 4){
            ui->a30->setStyleSheet("*{background-color: rgb(144,238,144);}");
        }
        else if(matriz[3][0] == 8){
            ui->a30->setStyleSheet("*{background-color: rgb(0,250,154);}");
        }
        else if(matriz[3][0] == 16){
            ui->a30->setStyleSheet("*{background-color: rgb(0,255,127);}");
        }
        else if(matriz[3][0] == 32){
            ui->a30->setStyleSheet("*{background-color: rgb(84,167,93);}");
        }
        else if(matriz[3][0] == 64){
            ui->a30->setStyleSheet("*{background-color: rgb(60,179,113);}");
        }
        else if(matriz[3][0] == 128){
            ui->a30->setStyleSheet("*{background-color: rgb(50,205,50);}");
        }
        else if(matriz[3][0] == 256){
            ui->a30->setStyleSheet("*{background-color: rgb(124,252,0);}");
        }
        else if(matriz[3][0] == 512){
            ui->a30->setStyleSheet("*{background-color: rgb(154,205,50);}");
        }
        else if(matriz[3][0] == 1024){
            ui->a30->setStyleSheet("*{background-color: rgb(173,255,47);}");
        }
        else if(matriz[3][0] == 2048){
            ui->a30->setStyleSheet("*{background-color: rgb(0,255,0);}");
        }
        ui->a30->setText(QString::number(matriz[3][0]));
    }
    if(matriz[3][1] == 1){
        ui->a31->setText(" ");
        ui->a31->setStyleSheet("*{background-color:;}");
    }
    else{
        if(matriz[3][1] == 2){
            ui->a31->setStyleSheet("*{background-color: rgb(152,251,152);}");
        }
        else if(matriz[3][1] == 4){
            ui->a31->setStyleSheet("*{background-color: rgb(144,238,144);}");
        }
        else if(matriz[3][1] == 8){
            ui->a31->setStyleSheet("*{background-color: rgb(0,250,154);}");
        }
        else if(matriz[3][1] == 16){
            ui->a31->setStyleSheet("*{background-color: rgb(0,255,127);}");
        }
        else if(matriz[3][1] == 32){
            ui->a31->setStyleSheet("*{background-color: rgb(84,167,93);}");
        }
        else if(matriz[3][1] == 64){
            ui->a31->setStyleSheet("*{background-color: rgb(60,179,113);}");
        }
        else if(matriz[3][1] == 128){
            ui->a31->setStyleSheet("*{background-color: rgb(50,205,50);}");
        }
        else if(matriz[3][1] == 256){
            ui->a31->setStyleSheet("*{background-color: rgb(124,252,0);}");
        }
        else if(matriz[3][1] == 512){
            ui->a31->setStyleSheet("*{background-color: rgb(154,205,50);}");
        }
        else if(matriz[3][1] == 1024){
            ui->a31->setStyleSheet("*{background-color: rgb(173,255,47);}");
        }
        else if(matriz[3][1] == 2048){
            ui->a31->setStyleSheet("*{background-color: rgb(0,255,0);}");
        }
        ui->a31->setText(QString::number(matriz[3][1]));
    }
    if(matriz[3][2] == 1){
        ui->a32->setText(" ");
        ui->a32->setStyleSheet("*{background-color:;}");
    }
    else{
        if(matriz[3][2] == 2){
            ui->a32->setStyleSheet("*{background-color: rgb(152,251,152);}");
        }
        else if(matriz[3][2] == 4){
            ui->a32->setStyleSheet("*{background-color: rgb(144,238,144);}");
        }
        else if(matriz[3][2] == 8){
            ui->a32->setStyleSheet("*{background-color: rgb(0,250,154);}");
        }
        else if(matriz[3][2] == 16){
            ui->a32->setStyleSheet("*{background-color: rgb(0,255,127);}");
        }
        else if(matriz[3][2] == 32){
            ui->a32->setStyleSheet("*{background-color: rgb(84,167,93);}");
        }
        else if(matriz[3][2] == 64){
            ui->a32->setStyleSheet("*{background-color: rgb(60,179,113);}");
        }
        else if(matriz[3][2] == 128){
            ui->a32->setStyleSheet("*{background-color: rgb(50,205,50);}");
        }
        else if(matriz[3][2] == 256){
            ui->a32->setStyleSheet("*{background-color: rgb(124,252,0);}");
        }
        else if(matriz[3][2] == 512){
            ui->a32->setStyleSheet("*{background-color: rgb(154,205,50);}");
        }
        else if(matriz[3][2] == 1024){
            ui->a32->setStyleSheet("*{background-color: rgb(173,255,47);}");
        }
        else if(matriz[3][2] == 2048){
            ui->a32->setStyleSheet("*{background-color: rgb(0,255,0);}");
        }
        ui->a32->setText(QString::number(matriz[3][2]));
    }
    if(matriz[3][3] == 1){
        ui->a33->setText(" ");
        ui->a33->setStyleSheet("*{background-color:;}");
    }
    else{
        if(matriz[3][3] == 2){
            ui->a33->setStyleSheet("*{background-color: rgb(152,251,152);}");
        }
        else if(matriz[3][3] == 4){
            ui->a33->setStyleSheet("*{background-color: rgb(144,238,144);}");
        }
        else if(matriz[3][3] == 8){
            ui->a33->setStyleSheet("*{background-color: rgb(0,250,154);}");
        }
        else if(matriz[3][3] == 16){
            ui->a33->setStyleSheet("*{background-color: rgb(0,255,127);}");
        }
        else if(matriz[3][3] == 32){
            ui->a33->setStyleSheet("*{background-color: rgb(84,167,93);}");
        }
        else if(matriz[3][3] == 64){
            ui->a33->setStyleSheet("*{background-color: rgb(60,179,113);}");
        }
        else if(matriz[3][3] == 128){
            ui->a33->setStyleSheet("*{background-color: rgb(50,205,50);}");
        }
        else if(matriz[3][3] == 256){
            ui->a33->setStyleSheet("*{background-color: rgb(124,252,0);}");
        }
        else if(matriz[3][3] == 512){
            ui->a33->setStyleSheet("*{background-color: rgb(154,205,50);}");
        }
        else if(matriz[3][3] == 1024){
            ui->a33->setStyleSheet("*{background-color: rgb(173,255,47);}");
        }
        else if(matriz[3][3] == 2048){
            ui->a33->setStyleSheet("*{background-color: rgb(0,255,0);}");
        }
        ui->a33->setText(QString::number(matriz[3][3]));
    }
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_start_clicked()
{
    som.Tocar_tema();

    ui->a00->setHidden(0);
    ui->a01->setHidden(0);
    ui->a02->setHidden(0);
    ui->a03->setHidden(0);
    ui->a10->setHidden(0);
    ui->a11->setHidden(0);
    ui->a12->setHidden(0);
    ui->a13->setHidden(0);
    ui->a20->setHidden(0);
    ui->a21->setHidden(0);
    ui->a22->setHidden(0);
    ui->a23->setHidden(0);
    ui->a30->setHidden(0);
    ui->a31->setHidden(0);
    ui->a32->setHidden(0);
    ui->a33->setHidden(0);
    ui->direita->setHidden(0);
    ui->esquerda->setHidden(0);
    ui->cima->setHidden(0);
    ui->baixo->setHidden(0);
    ui->start->setHidden(1);
    ui->titulo->setHidden(1);
    ui->novo_jogo->setHidden(1);
    ui->game_over->setHidden(1);
    ui->direita->blockSignals(0);
    ui->esquerda->blockSignals(0);
    ui->cima->blockSignals(0);
    ui->baixo->blockSignals(0);
    ui->start->blockSignals(1);
    ui->novo_jogo->blockSignals(1);
    ui->frame->setHidden(0);
    ui->actionRecomecar->blockSignals(0);
    ui->actionRecomecar->setVisible(1);
    ui->menuBar->setVisible(1);

    matriz = Alocar_Matriz();
    Inicializar_Matriz(matriz);

    Mostrar_matriz(matriz);
}

void MainWindow::on_cima_clicked()
{
    if(Pode_mover_para_Cima(matriz)){
        logico combinou;
        som.Tocar_movimento();
        Mover_para_Cima(matriz);
        combinou = Combinar_para_Cima(matriz);
        if(combinou == VERDADEIRO){
            som.Tocar_ponto();
        }
        Mover_para_Cima(matriz);
        Acrescentar_bloco(matriz);
        Mostrar_matriz(matriz);
        Game_over(matriz);
    }
    else{
        som.Tocar_movimento_impedido();
    }
}

void MainWindow::on_baixo_clicked()
{
    if(Pode_mover_para_Baixo(matriz)){
        logico combinou;
        som.Tocar_movimento();
        Mover_para_Baixo(matriz);
        combinou = Combinar_para_Baixo(matriz);
        if(combinou == VERDADEIRO){
            som.Tocar_ponto();
        }
        Mover_para_Baixo(matriz);
        Acrescentar_bloco(matriz);
        Mostrar_matriz(matriz);
        Game_over(matriz);
    }
    else{
        som.Tocar_movimento_impedido();
    }
}

void MainWindow::on_esquerda_clicked()
{
    if(Pode_mover_para_Esquerda(matriz)){
        logico combinou;
        som.Tocar_movimento();
        Mover_para_Esquerda(matriz);
        combinou = Combinar_para_Esquerda(matriz);
        if(combinou == VERDADEIRO){
            som.Tocar_ponto();
        }
        Mover_para_Esquerda(matriz);
        Acrescentar_bloco(matriz);
        Mostrar_matriz(matriz);
        Game_over(matriz);
    }
    else{
        som.Tocar_movimento_impedido();
    }
}

void MainWindow::on_direita_clicked()
{
    if(Pode_mover_para_Direita(matriz)){
        logico combinou;
        som.Tocar_movimento();
        Mover_para_Direita(matriz);
        combinou = Combinar_para_Direita(matriz);
        if(combinou == VERDADEIRO){
           som.Tocar_ponto();
        }
        Mover_para_Direita(matriz);
        Acrescentar_bloco(matriz);
        Mostrar_matriz(matriz);
        Game_over(matriz);
    }
    else{
        som.Tocar_movimento_impedido();
    }
}

void MainWindow::Game_over(int** matriz){
    if(!Existem_Movimentos_Possiveis(matriz) || Venceu(matriz)){
        som.Parar_Tema(1);
        ui->direita->setHidden(1);
        ui->esquerda->setHidden(1);
        ui->cima->setHidden(1);
        ui->baixo->setHidden(1);
        ui->direita->blockSignals(1);
        ui->esquerda->blockSignals(1);
        ui->cima->blockSignals(1);
        ui->baixo->blockSignals(1);
        ui->game_over->setHidden(0);
        ui->novo_jogo->setHidden(0);
        ui->novo_jogo->blockSignals(0);
        ui->actionRecomecar->blockSignals(1);
        ui->actionRecomecar->setVisible(0);
        ui->menuBar->setVisible(0);
        if(Venceu(matriz)){
            som.Tocar_vitoria();
            ui->game_over->setText("Parabéns, você venceu!");
        }
        else{
            som.Tocar_derrota();
            ui->game_over->setText("Não há mais movimentos possíveis!");
        }
        Liberar_Matriz(matriz);
    }
}

void MainWindow::on_novo_jogo_clicked()
{

    MainWindow::on_start_clicked();
}

void MainWindow::on_actionRecomecar_triggered()
{
    Liberar_Matriz(matriz);
    MainWindow::on_start_clicked();
}


void MainWindow::on_parar_som_toggled(bool arg1)
{
    som.Parar_Tema(arg1);
}
