#include "tennis_game_3.h"
#include <string.h>
#include <stdlib.h>

tennis_game_3_t create_tennis_game_3(const char *p1n, const char *p2n)
{
    tennis_game_3_t result = {0, 0, calloc(strlen(p1n) + 1, 1), calloc(strlen(p2n) + 1, 1)};
    strcpy(result.p1n, p1n);
    strcpy(result.p2n, p2n);
    return result;
}

void won_point_3(tennis_game_3_t *tg, const char *pn)
{
    strcmp(pn, "player1") ? tg->p2++ : tg->p1++;
}

const char * get_score_3(tennis_game_3_t *tg)
{
    char *s;

    if (tg->p1 < 4 && tg->p2 < 4) {
        static const char *p[] = {"Love", "Fifteen", "Thirty", "Forty"};
        char ts[20];
        strcpy(ts, p[tg->p1]);
        if (tg->p1 == tg->p2) {
            strcat(ts, "-All");
        } else {
            strcat(ts, "-");
            strcat(ts, p[tg->p2]);
        }
        s = calloc(strlen(ts) + 1, sizeof(char));
        strcpy(s, ts);
        return s;
    } else {
        if (tg->p1 == tg->p2)
            return "Deuce";

        char ts[20];
        (tg->p1 > tg->p2) ? strcpy(ts, tg->p1n) : strcpy(ts, tg->p2n);

        char ts2[15];
        ((tg->p1 - tg->p2) * (tg->p1 - tg->p2) == 1) ? strcpy(ts2, "Advantage ") : strcpy(ts2, "Win for ");

        s = calloc(strlen(ts) + strlen(ts2) + 1, sizeof(char));
        strcpy(s, ts2);
        strcat(s, ts);
        return s;
    }
}