class Solution {
public:
    int numOfSubarrays(vector<int>& arr, int k, int threshold) {
        int sum=0;
        int count=0;
        for(int i=0;i<k;i++){
            sum+=arr[i];
        }
        if(sum>=k*threshold){
                count++;
            }
        
        
        int startindex=0;
        int endindex=k;
        while(endindex<arr.size()){
            sum-=arr[startindex];
            startindex++;
            sum+=arr[endindex];
            endindex++;
            if(sum>=k*threshold){
                count++;
            }
        }
        return count;
    }
};