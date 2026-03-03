class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        vector<int> result;
        
        // Bước 1: Đánh dấu các số đã xuất hiện bằng cách biến giá trị tại chỉ số tương ứng thành số âm
        for (int i = 0; i < nums.size(); i++) {
            // Lấy giá trị tuyệt đối vì phần tử này có thể đã bị đổi thành âm trước đó
            int index = abs(nums[i]) - 1; 
            
            // Nếu giá trị tại nums[index] còn dương, đổi nó thành âm
            if (nums[index] > 0) {
                nums[index] = -nums[index];
            }
        }
        
        // Bước 2: Duyệt lại mảng, những vị trí nào có giá trị dương tức là chỉ số đó chưa từng được truy cập
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] > 0) {
                // i là chỉ số, số bị thiếu sẽ là i + 1
                result.push_back(i + 1);
            }
        }
        
        return result;
    }
};