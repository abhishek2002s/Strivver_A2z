//second largest number in the array
vector<int> getSecondOrderElements(int n, vector<int> a) {
    // Write your code here.
    vector<int>ans;
    int max =INT_MIN;
    int secM;
    int min =INT_MAX;
    int secm;

    for(int i=0;i<n;i++)
    {
        if(a[i]>max){
            secM = max;
            max = a[i];
        }
        else if(a[i]>secM && secM != max){
            secM = a[i];
        }
    }

    for(int i=0;i<n;i++)
    {
       if(a[i] < min)
       {
          secm = min;
          min = a[i];
       }
       else if(a[i] < secm && a[i] !=min)
       {
          secm = a[i];
       }
  
    }
    ans.push_back(secM);
               ans.push_back(secm);


    return ans;
}