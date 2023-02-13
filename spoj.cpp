#include <bits/stdc++.h>
using namespace std;

class Solution{

public:
    Solution(){
        cout<<"The answer is:"<<endl;
    }
    bool ifDupilcates(vector<int>& nums){
        if(nums.size()==1){
            return false;
        }
        std::sort(nums.begin(),nums.end());
        
        for(int i=0;i<nums.size();i++){
            if(nums[i]!=nums[i+1]){
                continue;
            }
            else{
                return true;
            }

        }

        return false;
    }

};

int main(){

    Solution SolObj;
    vector<int> arr={1,2,3,4};
    bool result=SolObj.ifDupilcates(arr);
    cout<<SolObj.ifDupilcates(arr)<<endl;
    return 0;
}