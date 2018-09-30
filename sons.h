#ifndef SONS_H
#define SONS_H

#include <QObject>
#include <QSoundEffect>

class Sons : public QSoundEffect
{
    QSoundEffect start;
    QSoundEffect movimento;
    QSoundEffect movimento_impedido;
    QSoundEffect ponto;
    QSoundEffect vitoria;
    QSoundEffect derrota;
    QSoundEffect tema;
    Q_OBJECT
public:
    explicit Sons(QSoundEffect *parent = 0);
    void Tocar_start();
    void Tocar_movimento();
    void Tocar_movimento_impedido();
    void Tocar_ponto();
    void Tocar_vitoria();
    void Tocar_derrota();
    void Tocar_tema();
    void Parar_Tema(bool);
    bool Tema_esta_tocando();
signals:

public slots:
};

#endif // SONS_H
