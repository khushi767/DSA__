
//TC=O(n),SC=O(1)
class Solution{
    public:
    int maxArea(vector<int>&height){
        int left=0;
        int right=height.size()-1;
        int max_area=0;
        while(left<right){
            int current_height=min(height[left],height[right]);
            int width=right-left;
            int area=current_height*width;
            //update max_Area if we find a larger area
            max_area=max(max_area,area);
            //move pointer from left to right
            if(height[left]<height[right]){
                left++;
            }else{
                right--;
            }
        }
        return max_area;
    }
};


