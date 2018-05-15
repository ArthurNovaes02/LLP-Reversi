#include "Reversi.h"
#include "ui_reversi.h"

#include <QDebug>

Reversi::Reversi(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Reversi){
    ui->setupUi(this);

    // atribui todas as celular a um objeto
    for(int r = 0; r < 8 ; r++){
        for(int c = 0; c < 8; c++){
            Cell* cell = this->findChild<Cell*>(
                        QString("cell%1%2").arg(r).arg(c));

            Q_ASSERT(cell != 0);
            cell->setRow(r);
            cell->setCol(c);

            QObject::connect(
                        cell,
                        SIGNAL(clicked(bool)),
                        this,
                        SLOT(play())
                        );

            m_cells [r][c] = cell;
        }
    }

    // inicializa o jogo com 4 bolinhas na tela
    ui->cell33->setPlayer(1);
    ui->cell44->setPlayer(1);
    ui->cell43->setPlayer(2);
    ui->cell34->setPlayer(2);

    QObject::connect(
                ui->actionsair,
                SIGNAL(triggered(bool)),
                qApp,
                SLOT(quit())
                );

    this->adjustSize();
    this->setFixedSize(this->size());
}

Reversi::~Reversi(){
    delete ui;
}

void Reversi::play(){
    Cell* cell = qobject_cast<Cell*>(QObject::sender());
    Q_ASSERT(cell != 0);

    cell->setPlayer(1);


    qDebug() << "Celula ("
             << cell->row() << ", "
             << cell->col() << ")";

}
