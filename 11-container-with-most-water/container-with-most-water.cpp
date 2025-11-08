class Solution {
public:
    int maxArea(vector<int>& height) {
        int left=0;
        int right=height.size()-1;
        int maxarea=0;
        while(left<right){
            int h=min(height[left],height[right]);
            int w=right-left;
            int area=h*w;
            maxarea=max(maxarea,area);

            if(height[left]<height[right])
            left++;
            else
            right--;
        }
        return maxarea;


        /* //Brute approach: O(n²) — because we check all pairs
        int n=height.size();
        int maxarea=0;
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                int area=min(height[i],height[j])*(j-i);
                maxarea=max(maxarea,area);
            }
        }
        return maxarea;*/
        
    }
};