#include<bits/stdc++.h>
//Majority element
int majorityElement(vector<int> v) {
	// Write your code here
int cnt = 0;
int el;

for(int i=0;i<v.size();i++)
{
	if(cnt==0){
		cnt = 1;
		el = v[i];
	}
	else if(v[i]==el){
		cnt++;
	}
	else{
		cnt--;
	}
}
int count =0;
for(int i=0;i<v.size();i++)
{
	if(v[i]==el)
	{
		count++;
	}
}
if(count>(v.size()/2)){
	return el;
}
return -1;