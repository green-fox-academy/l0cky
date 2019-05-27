#ifndef TENNIS_GAME_TENNIS_GAME_TESTS_H
#define TENNIS_GAME_TENNIS_GAME_TESTS_H

// Template functions and specializations as a workaround for function overloading in C

extern "C" {
#include "tennis_game_1.h"
#include "tennis_game_2.h"
#include "tennis_game_3.h"
}

template<class T>
T createTennisGame(const char *player1Name, const char *player2Name);

template<class T>
void wonPoint(T *tennisGame, const char *playerName);

template<class T>
const char *getScore(T *tennisGame);

template<>
tennis_game_1_t createTennisGame<tennis_game_1_t>(const char *player1Name, const char *player2Name)
{
    return create_tennis_game_1(player1Name, player2Name);
}

template<>
tennis_game_2_t createTennisGame<tennis_game_2_t>(const char *player1Name, const char *player2Name)
{
    return create_tennis_game_2(player1Name, player2Name);
}

template<>
tennis_game_3_t createTennisGame<tennis_game_3_t>(const char *player1Name, const char *player2Name)
{
    return create_tennis_game_3(player1Name, player2Name);
}

template<>
void wonPoint<tennis_game_1_t>(tennis_game_1_t *tennisGame, const char *playerName)
{
    won_point_1(tennisGame, playerName);
}

template<>
void wonPoint<tennis_game_2_t>(tennis_game_2_t *tennisGame, const char *playerName)
{
    won_point_2(tennisGame, playerName);
}

template<>
void wonPoint<tennis_game_3_t>(tennis_game_3_t *tennisGame, const char *playerName)
{
    won_point_3(tennisGame, playerName);
}

template<>
const char *getScore<tennis_game_1_t>(tennis_game_1_t *tennisGame)
{
    return get_score_1(tennisGame);
}

template<>
const char *getScore<tennis_game_2_t>(tennis_game_2_t *tennisGame)
{
    return get_score_2(tennisGame);
}

template<>
const char *getScore<tennis_game_3_t>(tennis_game_3_t *tennisGame)
{
    return get_score_3(tennisGame);
}

#endif //TENNIS_GAME_TENNIS_GAME_TESTS_H
