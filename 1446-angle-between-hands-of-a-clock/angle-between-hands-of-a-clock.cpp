class Solution {
public:
    double angleClock(int hour, int minutes) {
        float min_ang= minutes*6;
        float hour_ang= (hour%12)*30 + (minutes*0.5);
        double absol=abs(hour_ang - min_ang);

        return min(absol,360-absol);
    }
};