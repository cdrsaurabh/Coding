#include<bits/stdc++.h>
using namespace std;

class solution {
public:
    vector <int> searchInsert(vector <int>&nums, int target) {
        int i,j,k;
        auto last = nums.back();
        int size = nums.size();
        //cout<<last;
        for(k=0; k<nums.size(); k++) {
            if(nums.at(k) == target) { //k=0 == 1
                cout<<"Index is: "<<k;
                return {k};
            }
            else if ((nums.at(k) != target) and (target < last)) {
            for(i=0;i<nums.size();i++){
            if((target > nums.at(i)) and (target<nums.at(i+1))){
            cout<<"Index is: "<<i+1;
            return {i+1};
            }
            }
            }
        }
        if (target > last){
            cout<<"Index is: "<<size<<endl;
            return {size};
        }
        return {};
        
    }
};


int main() {
    solution obj;
    vector <int> nums = {1,3,5,6};
    int target = 7; //2,7
    vector <int> result = obj.searchInsert(nums,target);
    /*for(auto x : result) {
        cout<<x<<" ";
    }*/

}