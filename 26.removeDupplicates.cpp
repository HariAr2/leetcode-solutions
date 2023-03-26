class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        vector<int> ori;
        vector<int>::iterator it;
        for(it=nums.begin();it!=nums.end();it++){
            int el=*it;
            if(find(ori.begin(),ori.end(),el)!=ori.end()){
                nums.erase(it);
                it--;
            }
            else{
                ori.push_back(*it);
            }
        }
        return ori.size();
    }
};
Console
