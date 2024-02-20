#include "gameplay.h"
#include <stdlib.h>

int randomNumber(int maxInt) {
    return (random() % (int)(maxInt + 1 - 1) + 1);
}

int calculateScore(int *rawScore) {
    // take raw score
    // turn it into a real score
    if (*rawScore % 2) {
        //// if the raw is odd subtract 5    
        return (*rawScore - 5 > 0) ? *rawScore - 5 : 0; 
    } else {
        //// if the raw is even add 10
        return *rawScore + 10;
    }
}
