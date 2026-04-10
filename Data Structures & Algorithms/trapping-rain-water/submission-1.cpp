class Solution {
public:
    int trap(vector<int>& height) {
        int area = 0;
        int l = 0;

        while (l < height.size() - 1) {
            int r = l + 1;
            bool found_taller_or_equal = false;

            int max_remaining_idx = l + 1;
            int max_remaining_height = height[l + 1];

            for (int i = l + 1; i < height.size(); i++) {
                if (height[i] >= height[l]) {
                    r = i;
                    found_taller_or_equal = true;
                    break;
                }

                if (height[i] > max_remaining_height) {
                    max_remaining_height = height[i];
                    max_remaining_idx = i;
                }
            }

            if (!found_taller_or_equal) {
                r = max_remaining_idx;
            }

            int min_h = min(height[l], height[r]);
            for (int i = l + 1; i < r; i++) {
                area += min_h - height[i];
            }

            l = r;
        }

        return area;
    }
};