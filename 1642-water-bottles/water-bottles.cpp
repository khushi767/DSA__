class Solution {
public:
    int numWaterBottles(int numBottles, int numExchange) {
        int totalDrunk = numBottles;   // initially drink all
        int empty = numBottles;        // all become empty bottles

        while (empty >= numExchange) {
            int newBottles = empty / numExchange;   // how many we can exchange
            totalDrunk += newBottles;               // drink them
            empty = empty % numExchange + newBottles; // leftover empties + new empties
        }
        return totalDrunk;
    }
};
