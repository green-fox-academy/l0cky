#include "gtest/gtest.h"
#include "tennis_game_Test.h"

extern "C" {
#include "tennis_game_1.h"
#include "tennis_game_2.h"
#include "tennis_game_3.h"
}

struct TennisScore
{
    const int player1Score;
    const int player2Score;
    const std::string expectedScore;
};

const std::vector<TennisScore> expectedScores{
        {0,  0,  "Love-All"},
        {1,  1,  "Fifteen-All"},
        {2,  2,  "Thirty-All"},
        {3,  3,  "Forty-All"},
        {4,  4,  "Deuce"},

        {1,  0,  "Fifteen-Love"},
        {0,  1,  "Love-Fifteen"},
        {2,  0,  "Thirty-Love"},
        {0,  2,  "Love-Thirty"},
        {3,  0,  "Forty-Love"},
        {0,  3,  "Love-Forty"},
        {4,  0,  "Win for player1"},
        {0,  4,  "Win for player2"},

        {2,  1,  "Thirty-Fifteen"},
        {1,  2,  "Fifteen-Thirty"},
        {3,  1,  "Forty-Fifteen"},
        {1,  3,  "Fifteen-Forty"},
        {4,  1,  "Win for player1"},
        {1,  4,  "Win for player2"},

        {3,  2,  "Forty-Thirty"},
        {2,  3,  "Thirty-Forty"},
        {4,  2,  "Win for player1"},
        {2,  4,  "Win for player2"},

        {4,  3,  "Advantage player1"},
        {3,  4,  "Advantage player2"},
        {5,  4,  "Advantage player1"},
        {4,  5,  "Advantage player2"},
        {15, 14, "Advantage player1"},
        {14, 15, "Advantage player2"},

        {6,  4,  "Win for player1"},
        {4,  6,  "Win for player2"},
        {16, 14, "Win for player1"},
        {14, 16, "Win for player2"}
};



template<class T>
void testAllScores()
{
    for (const TennisScore &score : expectedScores) {
        // Arrange
        T tennisGame = createTennisGame<T>("player1", "player2");

        // Act
        int maxScore = std::max(score.player1Score, score.player2Score);
        for (int i = 0; i < maxScore; ++i) {
            if (i < score.player1Score) {
                wonPoint(&tennisGame, "player1");
            }
            if (i < score.player2Score) {
                wonPoint(&tennisGame, "player2");
            }
        }

        // Assert
        ASSERT_STREQ(score.expectedScore.c_str(), getScore(&tennisGame));
    }
}


TEST(TennisTests, TestTennisGame1)
{
    testAllScores<tennis_game_1_t>();
}

TEST(TennisTests, TestTennisGame2)
{
    testAllScores<tennis_game_2_t>();
}

TEST(TennisTests, TestTennisGame3)
{
    testAllScores<tennis_game_3_t>();
}