#ifndef TENNIS_GAME_TENNIS_GAME_3_H
#define TENNIS_GAME_TENNIS_GAME_3_H

typedef struct
{
    int p1;
    int p2;
    char *p1n;
    char *p2n;
} tennis_game_3_t;

tennis_game_3_t create_tennis_game_3(const char *, const char *);
void won_point_3(tennis_game_3_t *, const char *);
const char * get_score_3(tennis_game_3_t *);

#endif //TENNIS_GAME_TENNIS_GAME_3_H
