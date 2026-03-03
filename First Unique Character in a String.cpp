class Solution {
public:
    int firstUniqChar(string s) {
        // Mảng lưu tần suất của 26 chữ cái tiếng Anh
        int count[26] = {0};
        
        // Bước 1: Đếm số lần xuất hiện của mỗi ký tự
        for (char c : s) {
            count[c - 'a']++;
        }
        
        // Bước 2: Tìm ký tự đầu tiên có tần suất bằng 1
        for (int i = 0; i < s.length(); i++) {
            if (count[s[i] - 'a'] == 1) {
                return i;
            }
        }
        
        // Nếu không tìm thấy ký tự nào không lặp lại
        return -1;
    }
};