lass Solution {
public:
    void sortColors(vector<int>& nums) {
        int zero = 0, one = 0, two = 0;

   
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] == 0) zero++;
            else if (nums[i] == 1) one++;
            else if (nums[i] == 2) two++;
        }

        
        int j = 0;
        while (zero > 0) {
            nums[j++] = 0;
            zero--;
        }
        while (one > 0) {
            nums[j++] = 1;
            one--;
        }
        while (two > 0) {
            nums[j++] = 2;
            two--;
        }


        for (int i = 0; i < nums.size(); i++) {
            cout << nums[i] << " ";
        }
        cout << endl;
    }
};


