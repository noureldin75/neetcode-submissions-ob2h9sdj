class Solution {
public:
    int maxArea(vector<int>& heights) {
        
        int l=0;
        int r=heights.size()-1;
        int length=r-l;
        int min_height=0;
        int init_area=0;
        int area=0;
        while(l<r){
            min_height=min(heights[l],heights[r]);
            length=r-l;
            init_area=length*min_height;
            area=max(area,init_area);
            if(heights[l]<heights[r]){
                l++;
            }
            else{
                r--;
            }


        }
        return area;

        
    }
};
