#include "Cell.h"

Cell::Cell(QWidget *parent)
    : QPushButton(parent), m_player(0){

}

void Cell::setPlayer(int player){
    if(player != m_player){
        int oldplayer = m_player;
        m_player = player;

        switch (player) {
            case 0:
                this->setIcon(QPixmap());
                break;
            case 1:
                this->setIcon(QPixmap(":/red"));
                break;
            case 2:
                this->setIcon(QPixmap(":/blue")); // recurso, : usa para indicar o caminho do recurso
                break;
            default:
                Q_UNREACHABLE();
                break;
        }
        emit playerChanged(oldplayer, m_player);
    }
}
