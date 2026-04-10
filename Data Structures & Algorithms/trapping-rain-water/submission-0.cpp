class Solution {
public:
    int trap(vector<int>& height) {
        int area = 0;
        int l = 0;
        
        // طول ما الـ l لسه موصلتش لآخر الـ array
        while (l < height.size() - 1) {
            int r = l + 1;
            bool found_taller_or_equal = false;
            
            // متغيرات عشان نحفظ "أطول عمود في الشوية اللي باقيين" لو احتجناه
            int max_remaining_idx = l + 1;
            int max_remaining_height = height[l + 1];
            
            // 1. هندور بالـ r على أول عمود أطول مننا أو قدنا
            for (int i = l + 1; i < height.size(); i++) {
                if (height[i] >= height[l]) {
                    r = i;
                    found_taller_or_equal = true;
                    break; // لقينا السد! نوقف تدوير
                }
                
                // وإحنا بندور، بنسجل أطول عمود بنعدي عليه
                if (height[i] > max_remaining_height) {
                    max_remaining_height = height[i];
                    max_remaining_idx = i;
                }
            }
            
            // 2. الفكرة الجديدة: لو ملقيناش سد أطول مننا، هنقفل المستطيل مع أطول حد في الباقيين
            if (!found_taller_or_equal) {
                r = max_remaining_idx;
            }
            
            // 3. نحسب الماية اللي اتحاشت بين l و r (نفس فكرتك بس بشكل أبسط)
            int min_h = min(height[l], height[r]); // مستوى الماية هيقف عند أقصر عمود فيهم
            for (int i = l + 1; i < r; i++) {
                area += min_h - height[i]; // الماية اللي فوق كل عمود في النص
            }
            
            // 4. ننقل الـ l تقف عند الـ r عشان نكمل حساب للمنطقة اللي بعدها
            l = r;
        }
        
        return area;
    }
};