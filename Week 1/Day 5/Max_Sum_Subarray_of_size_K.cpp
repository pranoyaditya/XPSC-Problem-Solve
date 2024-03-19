class Solution{   
public:
    long maximumSumSubarray(int K, vector<int> &Arr , int N){
        // code here 
        long long ans=0,sum=0,r=0,l=0;
        
        while(r<N)
        {
            sum += Arr[r];
            
            if((r-l+1) == K)
            {
                ans = max(ans,sum);
                sum -= Arr[l];
                r++;
                l++;
            }
            else r++;
        }
        
        return ans;
    }
};
