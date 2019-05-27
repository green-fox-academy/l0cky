#include "tennis_game_1.h"
#include <string.h>
#include <stdlib.h>

tennis_game_1_t create_tennis_game_1(const char *player1_name, const char *player2_name)
{
    tennis_game_1_t result;

    result.player1_name = player1_name;
    result.player2_name = player2_name;
    result.m_score1 = 0;
    result.m_score2 = 0;

    return result;
}

void won_point_1(tennis_game_1_t *tennis_game, const char *player_name)
{
    if (player_name == tennis_game->player1_name) {
        tennis_game->m_score1 += 1;
    } else {
        tennis_game->m_score2 += 1;
    }
}

char *get_score_1(tennis_game_1_t *tennis_game)
{
    int longest_name = get_longest_name(tennis_game);

    char *score = calloc(11 + longest_name, sizeof(char));
    int tempScore = 0;
    if (is_same_score(tennis_game)) {
        switch (tennis_game->m_score1) {
            case 0:
                strcat(score, "Love-All");
                break;
            case 1:
                strcat(score, "Fifteen-All");
                break;
            case 2:
                strcat(score, "Thirty-All");
                break;
            case 3:
                strcat(score, "Forty-All");
                break;
            default:
                strcat(score, "Deuce");
                break;

        }
    } else if (tennis_game->m_score1 >= 4 || tennis_game->m_score2 >= 4) {
        int minusResult = tennis_game->m_score1 - tennis_game->m_score2;
        if (minusResult == 1) {
            strcat(score, "Advantage ");
            strcat(score, tennis_game->player1_name);
        } else if (minusResult == -1) {
            strcat(score, "Advantage ");
            strcat(score, tennis_game->player2_name);
        } else if (minusResult >= 2) {
            strcat(score, "Win for ");
            strcat(score, tennis_game->player1_name);
        } else {
            strcat(score, "Win for ");
            strcat(score, tennis_game->player2_name);
        }
    } else {
        for (int i = 1; i < 3; i++) {
            if (i == 1) {
                tempScore = tennis_game->m_score1;
            }
            else {
                strcat(score, "-");
                tempScore = tennis_game->m_score2;
            }
            switch (tempScore) {
                case 0:
                    strcat(score, "Love");
                    break;
                case 1:
                    strcat(score, "Fifteen");
                    break;
                case 2:
                    strcat(score, "Thirty");
                    break;
                case 3:
                    strcat(score, "Forty");
                    break;
            }
        }
    }
    return score;
}

int is_same_score(tennis_game_1_t *tennis_game)
{
    return tennis_game->m_score1 == tennis_game->m_score2 ? 1 : 0;
}

int get_longest_name(tennis_game_1_t *tennis_game)
{
    int longest_name = 0;
    if (strlen(tennis_game->player1_name) > strlen(tennis_game->player2_name)) {
        longest_name = strlen(tennis_game->player1_name);
    } else {
        longest_name = strlen(tennis_game->player2_name);
    }
    return longest_name;
}