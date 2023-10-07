class Solution
{
    public:    
       vector <int> commonElements (int A[], int B[], int C[], int n1, int n2, int n3)
        {
            //code here.
            // int n=n1+n2+n3;
            // int arr[n];
            // for(int i=0;i<n1;i++){
            //     arr[i]=A[i];
            // }
            
            // // for(int i=0;i<n1;i++){
            // //     cout<<arr[i]<<" ";
            // // }
            // // cout<<endl;
            
            // int j=0;
            // for(int i=n1;i<n1+n2;i++){
            //     arr[i]=B[j];
            //     j++;
            // }
            
            // // for(int i=0;i<n1+n2;i++){
            // //     cout<<arr[i]<<" ";
            // // }
            // // cout<<endl;
            
            // int k=0;
            // for(int i=n1+n2;i<n;i++){
            //     arr[i]=C[k];
            //     k++;
            // }
            
            // // for(int i=0;i<n;i++){
            // //     cout<<arr[i]<<" ";
            // // }
            // // cout<<endl;
            // sort(arr,arr+n);
            // // for(int i=0;i<n;i++){
            // //     cout<<arr[i]<<" ";
            // // }
            // // cout<<endl;
            // vector<int>v;
            // int count=1;
            // for(int i=0;i<n;i++){
            //     if(arr[i]==arr[i+1]){
            //         count++;
            //     }
            //     if(count==3){
            //         v.push_back(arr[i]);
            //     }
            // }
            // return v;
            // int i=0,j=0,k=0;
            // while(i<n1 && j<n2 && k<n3){
            //     if(A[i]==B[j] && B[j]==C[k]){
            //         v.push_back(A[i]);
            //         i++,j++,k++;
            //     }
            //     else if(A[i]<B[j]){
            //         i++;
            //     }
            //     else if(B[j]<C[k]){
            //         j++;
            //     }
            //     else{
            //         k++;
            //     }
            // }
            
            // return v;
            
            map<int,int>first;
            for(int i=0; i<n1; i++){
                first[A[i]]++;
            }
            
            map<int,int>second;
            for(int j=0; j<n2; j++){
                if(first[B[j]]>0){
                second[B[j]]++;
                first[B[j]]--;
            }
            }
            map<int,int>third;
            for(int k=0; k<n3; k++){
                if(second[C[k]]>0){
                     third[C[k]]++;
                     second[C[k]]--;
                }
            }
            vector<int>ans;
            for(auto i:third){
                ans.push_back(i.first);
            }
            return ans;
        }

};