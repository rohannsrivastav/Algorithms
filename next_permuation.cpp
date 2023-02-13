#include<bits/stdc++.h>
using namespace std;

class Solution{
public:
    Solution(){
        cout<<"The next permutation is:"<<"\n";
    }
    void next_permuation(vector<int>& nums){
        int index1;
        for(int i=0;i<nums.size();i++){
            if (nums[i]<nums[i+1]){
                index1=i+1 ;
                break;
            }
        }

        int index2;
        for(int i=nums.size();i>0;i--){
            if(nums[i]>nums[index1]){
                index2=i;
                break;
            }
        }

        swap(nums[index1],nums[index2]);
        std::vector<int>::iterator it = nums.begin() + index1;
        reverse(it+1,nums.end());

    }
};

int main(){
    Solution sol1;
    vector<int> nums={1,3,5,4,2};
    sol1.next_permuation(nums);
    for (int i = 0; i < 5; i++)  
    {  
        cout<<nums[i]<<"\n";    
    }  
    return 0;
}