#include "tennis_game_2.h"
#include <string.h>
#include <stdlib.h>

tennis_game_2_t create_tennis_game_2(const char *player1_name, const char *player2_name)
{
    tennis_game_2_t result;

    strcpy(result.player1_name, player1_name);
    strcpy(result.player2_name, player2_name);
    result.P1res = "";
    result.P2res = "";
    result.P1point = 0;
    result.P2point = 0;

    return result;
}

void won_point_2(tennis_game_2_t *tennis_game, const char *player_name)
{
    if (strcmp("player1", player_name) == 0) {
        tennis_game->P1point++;
    } else {
        tennis_game->P2point++;
    }
}

const char *get_score_2(tennis_game_2_t *tennis_game)
{
    char *score = calloc(10, 10);

    if (tennis_game->P1point == tennis_game->P2point && tennis_game->P1point < 4) {
        if (tennis_game->P1point == 0)
            strcpy(score, "Love");
        if (tennis_game->P1point == 1)
            strcpy(score, "Fifteen");
        if (tennis_game->P1point == 2)
            strcpy(score, "Thirty");
        if (tennis_game->P1point == 3)
            strcpy(score, "Forty");

        strcat(score, "-All");
        return score;
    }
    if (tennis_game->P1point == tennis_game->P2point && tennis_game->P1point > 3) {
        strcpy(score, "Deuce");
        return score;
    }

    if (tennis_game->P1point > 0 && tennis_game->P2point == 0) {
        if (tennis_game->P1point == 1)
            tennis_game->P1res = "Fifteen";
        if (tennis_game->P1point == 2)
            tennis_game->P1res = "Thirty";
        if (tennis_game->P1point == 3)
            tennis_game->P1res = "Forty";

        tennis_game->P2res = "Love";
        strcpy(score, tennis_game->P1res);
        strcat(score, "-");
        strcat(score, tennis_game->P2res);
    }

    if (tennis_game->P2point > 0 && tennis_game->P1point == 0) {
        if (tennis_game->P2point == 1)
            tennis_game->P2res = "Fifteen";
        if (tennis_game->P2point == 2)
            tennis_game->P2res = "Thirty";
        if (tennis_game->P2point == 3)
            tennis_game->P2res = "Forty";

        tennis_game->P1res = "Love";
        strcpy(score, tennis_game->P1res);
        strcat(score, "-");
        strcat(score, tennis_game->P2res);
    }

    if (tennis_game->P1point > tennis_game->P2point && tennis_game->P1point < 4) {
        if (tennis_game->P1point == 1)
            tennis_game->P1res = "Fifteen";
        if (tennis_game->P1point == 2)
            tennis_game->P1res = "Thirty";
        if (tennis_game->P1point == 3)
            tennis_game->P1res = "Forty";
        if (tennis_game->P2point == 1)
            tennis_game->P2res = "Fifteen";
        if (tennis_game->P2point == 2)
            tennis_game->P2res = "Thirty";
        if (tennis_game->P2point == 3)
            tennis_game->P2res = "Forty";

        strcpy(score, tennis_game->P1res);
        strcat(score, "-");
        strcat(score, tennis_game->P2res);
        return score;
    }
    if (tennis_game->P2point > tennis_game->P1point && tennis_game->P2point < 4) {
        if (tennis_game->P1point == 1)
            tennis_game->P1res = "Fifteen";
        if (tennis_game->P1point == 2)
            tennis_game->P1res = "Thirty";
        if (tennis_game->P1point == 3)
            tennis_game->P1res = "Forty";
        if (tennis_game->P2point == 1)
            tennis_game->P2res = "Fifteen";
        if (tennis_game->P2point == 2)
            tennis_game->P2res = "Thirty";
        if (tennis_game->P2point == 3)
            tennis_game->P2res = "Forty";

        strcpy(score, tennis_game->P1res);
        strcat(score, "-");
        strcat(score, tennis_game->P2res);
        return score;
    }

    if (tennis_game->P1point > tennis_game->P2point && tennis_game->P2point >= 3) {
        strcpy(score, "Advantage player1");
    }

    if (tennis_game->P2point > tennis_game->P1point && tennis_game->P1point >= 3) {
        strcpy(score, "Advantage player2");
    }

    if (tennis_game->P1point >= 4 && tennis_game->P2point >= 0 && (tennis_game->P1point - tennis_game->P2point) >= 2) {
        strcpy(score, "Win for player1");
    }

    if (tennis_game->P2point >= 4 && tennis_game->P1point >= 0 && (tennis_game->P2point - tennis_game->P1point) >= 2) {
        strcpy(score, "Win for player2");
    }

    return score;
}