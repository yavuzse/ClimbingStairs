#include "ClimbingStairs.hpp"

int ClimbingStairs::climbingStairs(int numberOfStairs){
    if(numberOfStairs < 1){
        return 0;
    }

    if(numberOfStairs < 3){
        return numberOfStairs;
    } else {
        return climbingStairs(numberOfStairs - 1) + climbingStairs(numberOfStairs - 2);
    }
}
    
