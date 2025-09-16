#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector <int> twoSum(vector<int>&nums, int target){
        for(int i= 0;i<nums.size();i++){
            for(int j = 0;j < nums.size();j++){
                if(nums.at(i) == nums.at(j) and (i == j) ){
                    continue;
                }
                else if((nums.at(i)+ nums.at(j)) == target){
                return {i,j};
                }
            }
        }
        return {};
    }
};
int main(){
    Solution obj;
    vector <int> nums = {2,9,6,6};
    int target = 15;
    vector<int> result = obj.twoSum(nums, target);
    cout<<"Indexes are: ";
    for (auto x: result){
        cout<<x<<" ";
    }
    cout<<endl;
    
    return 0;
}