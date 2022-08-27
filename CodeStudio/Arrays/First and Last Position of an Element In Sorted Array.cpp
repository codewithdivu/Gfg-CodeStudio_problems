
int firstOccur(vector<int>& arr, int n,int k)
{
    int start=0;
    int ans=-1;
    
    int end = n-1;
    int mid = start + (end-start)/2;
    
    while(start<=end){
        if(arr[mid]==key){
            ans = mid;
            end = mid-1;
        }
        else if(arr[mid]>key){
            end = mid - 1;
        }
        else if(arr[mid]<key){
            start = mid + 1;
        } 
        mid = start + (end-start)/2;
        
    }
   return ans;
}
int lastOccur(vector<int>& arr, int n,int k)
{
    int start=0;
    int ans=-1;
    
    int end = n-1;
    int mid = start + (end-start)/2;
    
    while(start<=end){
        
        if(arr[mid]==key){
            ans = mid;
            start = mid + 1;
        }
        else if(arr[mid]>key){
            end = mid - 1;
        }
        else if(arr[mid]<key){
            start = mid + 1;
        }
        mid = start + (end-start)/2;
    }
    return ans;
}

pair<int, int> firstAndLastPosition(vector<int>& arr, int n, int k)
{
    pair<int,int> p;
    p.first = firstOccur(arr,n,k);
    p.second = lastOccur(arr,n,k);
    return p;
}