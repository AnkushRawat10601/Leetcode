class Solution {
public:
   int merge(vector<int>& arr, int lo, int mid, int hi)
    {
        vector<int> temp(hi-lo+1);
        int i=lo,j=mid+1,k=0;
        int count=0;
        
        while(i<=mid&&j<=hi)
        {
            if(arr[i]<= 2LL*arr[j])
            {
                temp[k++] = arr[i++];
            }
            else
            {
                temp[k++] = arr[j++];
                count+=(mid-i+1);
            }
        }
        
        while(i<=mid)
        temp[k++] = arr[i++];
        
        while(j<=hi)
        temp[k++] = arr[j++];
        
        sort(temp.begin(), temp.end());
        for(int i=lo;i<=hi;i++)
        {
            arr[i] = temp[i-lo];
        }
        
        return count;
        
    }
    
    int  mergeSort(vector<int>& arr, int low, int high)
    {
        int count=0;
        if(low<high)
        {
            int mid = (low+high)/2;
            count += mergeSort(arr, low, mid);
            count += mergeSort(arr, mid+1, high);
            count += merge(arr, low, mid, high);
        }
        return count;
    }
     int reversePairs(vector<int>& arr)
    {
        // Your Code Here
        return mergeSort(arr, 0, arr.size()-1);
    }
};