//Merge two sorted array***************

vector< int > sortedArray(vector < int > a, vector < int > b) {
    // Write your code here
    vector<int>ans;

    int n1 = a.size();
    int n2 = b.size();

    int i=0;
    int j=0;

    while(i<n1 && j<n2){
        //check in first array
        if(a[i]<=b[j])
        {
            if(ans.size() == 0 || ans.back()!= a[i])
            {
                ans.push_back(a[i]);
            }
            i++;
         }
        //  check in second array
       else{
           if(ans.size() == 0 || ans.back()!= b[j])
            {
                ans.push_back(b[j]);
            }
            j++;
       }
    }

    while(i<n1)
    {
        if(ans.size() == 0 || ans.back()!= a[i])
            {
                ans.push_back(a[i]);
            }
            i++;

    }
    while(j<n2)
    {
        if(ans.size() == 0 || ans.back()!= b[j])
            {
                ans.push_back(b[j]);
            }
            j++;

    }

return ans;