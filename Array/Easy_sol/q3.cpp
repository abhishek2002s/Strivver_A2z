//check the array is sorted or not

int isSorted(int n, vector<int> a) {
    // Write your code here.
    int i;
for (int i=1;i<n;i++)
{
  if(a[i]<a[i-1] && a[i]!= a[i-1])
  {
    return false;
  }
 
}
return true;
}
