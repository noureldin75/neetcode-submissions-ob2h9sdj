class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        // 1. ترتيب الـ Array عشان نقدر نستخدم الـ Two Pointers ونتجنب التكرار
        sort(nums.begin(), nums.end()); 
        vector<vector<int>> result;
        
        for (int i = 0; i < nums.size(); i++) {
            // 2. تخطي تكرار "الرقم الثابت"
            if (i > 0 && nums[i] == nums[i - 1]) {
                continue;
            }
            
            int l = i + 1;
            int r = nums.size() - 1;
            
            // 3. تطبيق الـ Two Pointers
            while (l < r) {
                int sum = nums[i] + nums[l] + nums[r];
                
                if (sum < 0) {
                    l++; // المجموع صغير، نحرك الشمال عشان نكبره
                } 
                else if (sum > 0) {
                    r--; // المجموع كبير، نحرك اليمين عشان نصغره
                } 
                else {
                    // 4. لقينا الثلاثي المطلوب، نضيفه للنتيجة
                    result.push_back({nums[i], nums[l], nums[r]});
                    
                    // 5. تخطي التكرار لمؤشر الـ Left (مع التأكد إننا جوه حدود الـ Array)
                    while (l < r && nums[l] == nums[l + 1]) {
                        l++;
                    }
                    // 6. تخطي التكرار لمؤشر الـ Right (خطوة إضافية بتسرع الكود جداً)
                    while (l < r && nums[r] == nums[r - 1]) {
                        r--;
                    }
                    
                    // 7. بعد ما تخطينا التكرار، نحرك المؤشرين للرقم الجديد عشان نكمل تدوير
                    l++;
                    r--;
                }
            }
        }
        return result;
    }
};