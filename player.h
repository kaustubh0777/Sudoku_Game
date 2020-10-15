#include <ctime>

#ifndef PLAYER_H
#define PLAYER_H

namespace user_gm
{
    class Player
    {
        private:
            int high_score;
            int gm_won;
            int gm_lost;
        
        public:
            /* Does the player exist in datab.txt? */
            
            time_t timer();
    }
}

#endif /* PLAYER_H */