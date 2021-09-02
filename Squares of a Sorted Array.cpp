class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        vector<int> toreturn;
        for(int i=0;i< nums.size();i++){
            toreturn.push_back(nums[i]*nums[i]);
        }
        sort(toreturn.begin(),toreturn.end());
        return toreturn;
        
        
        
    }
};
