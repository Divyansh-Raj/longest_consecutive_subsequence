// program function to find the longest consecutive subsequence of the positive arrays
 public:
    // arr[] : the input array
    // N : size of the array arr[]
    
    //Function to return length of longest subsequence of consecutive integers.
    int findLongestConseqSubseq(int arr[], int n)
    {
      //Your code here
      if (n==1)
      return 1;
      
      sort(arr,arr+n);
      int m=INT_MIN;
      
      int c=0;
      for (int i=0;i<n-1;i++){
          
           if (arr[i+1]!=arr[i]){    
            if (arr[i+1]-arr[i]==1){
                c+=1;
            }
            else{
                if (m<c)
                m=c;
                c=0;
            }
      }
     }
   
      return max(m+1,c+1);

    }  