class Solution
{
    public:
    //Function to find the next greater element for each element of the array.
    vector<long long> nextLargerElement(vector<long long> arr, int n){
        // Your code here
        int i,j,k=0;
        vector<long long> ans(n);
         stack<long long> st;
        
        st.push(0);
        ans[n-1]=-1;
        for(i=1;i<n;i++)
        {
            if(arr[n-1]>arr[n-2])
            {
                ans[n-2]=arr[n-1];
            }
            if(i!=n-1 && arr[i]<=arr[st.top()])
            {
                st.push(i);
            }
            
            else
            {
                  while(!st.empty() && arr[st.top()]<arr[i])
                 {
                     
                    
                      k=st.top();
                      st.pop();
                      ans[k]=arr[i];
                     
                  }
                  st.push(i);
                 
            }
            
        
            
        }
       while(!st.empty())
       {
            k=st.top();
            st.pop();
            ans[k]=-1;
       }
       return ans;
    }
};