#include<string>
class Solution {
  public:
    double getAngle(string& s) {
        // code here
        int h=stoi(s.substr(0,2));
        int m=stoi(s.substr(3,2));
        double hourangle=(h%12)*30+m*0.5;
        double minuteangle=m*6;
        
        double angle=abs(hourangle-minuteangle);
        if(angle>180)angle=360-angle;
        return angle;
    }
};

