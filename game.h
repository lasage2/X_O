#pragma once

class Game final
{
public:
    enum class StepResult : int
    {
        Win,       // победа
        NoWin,     // ничья
        Continue   // продолжается игра
    };

    struct Result
    {
        StepResult result;
        int playerId; // Текущий игрок
        int nextPlayerId; // Кто ходит следующим
    };

    explicit Game(int boardSize, int playerCount = 2);

    // чей ход следующий
    int nextPlayerId() const;

    int getBoardSize() const;

    Result doStep(int row, int column);

private:
    int m_currentPlayer{0}; // Внутренне поле, которое необходимо чтобы следить за очередностью

    const int m_boardSize;
    const int m_playerCount;
};
