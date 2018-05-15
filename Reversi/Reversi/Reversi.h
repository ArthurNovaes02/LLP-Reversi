#ifndef REVERSI_H
#define REVERSI_H

#include <QMainWindow>

class Cell;

namespace Ui {
class Reversi;
}

class Reversi : public QMainWindow
{
    Q_OBJECT

public:
    explicit Reversi(QWidget *parent = 0);
    ~Reversi();

private:
    Ui::Reversi *ui;
    Cell* m_cells[8][8];


private slots:
    void play();

};


#endif // REVERSI_H
