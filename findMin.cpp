class Solution {
public:
    int findMin(vector<int>& nums) {
        int min;
        auto i = nums.begin();
        for ( min=*i; i != nums.end(); i++)
        {
            if ( min <= *i)
                continue;
            else 
            {
                min = *i;
                break;
                
            }
        }
    return min;  
    }

};
