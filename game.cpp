#include <vector>
#include "game.h"

Game::Game(int boardSize, int playerCount)
  : m_boardSize(boardSize)
  , m_playerCount(playerCount)
{}

int Game::getBoardSize() const
{
    return m_boardSize;
}

Game::Result Game::doStep(int row, int column) {
    Result f;

    switch (f.playerId)
    {
    case 0:
        /*button*/->setText("X");
        break;
    case 1:
        /*button*/->setText("O");
        break;
    }

    if (f.playerId < Game::m_playerCount) f.nextPlayerId++;
    else f.playerId = 0;
}
