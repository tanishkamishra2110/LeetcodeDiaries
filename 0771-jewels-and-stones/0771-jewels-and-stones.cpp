class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
         int c=0;
        for(auto stone:stones)
        {
            for(auto jewel:jewels)
            {
                if(jewel==stone)
                c++;
            }
        }
        return c;
    }
};