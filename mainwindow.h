#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QSound>
#include <iostream>
#include"./funcoes.h"
#include"./sons.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    int** matriz;
    Sons som;
    ~MainWindow();

private slots:

    void on_cima_clicked();

    void on_start_clicked();

    void Mostrar_matriz(int**);

    void on_baixo_clicked();

    void on_esquerda_clicked();

    void on_direita_clicked();

    void Game_over(int**);

    void on_novo_jogo_clicked();

    void on_actionRecomecar_triggered();

    void on_parar_som_toggled(bool arg1);

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
