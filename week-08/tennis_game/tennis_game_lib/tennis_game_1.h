#ifndef TENNIS_GAME_TENNIS_GAME_1_H
#define TENNIS_GAME_TENNIS_GAME_1_H

typedef struct
{
    int m_score1;
    int m_score2;
    char *player1_name;
    char *player2_name;
} tennis_game_1_t;

tennis_game_1_t create_tennis_game_1(const char *, const char *);
void won_point_1(tennis_game_1_t *tennis_game, const char *player_name);
char *get_score_1(tennis_game_1_t *tennis_game);

#endif //TENNIS_GAME_TENNIS_GAME_1_H
