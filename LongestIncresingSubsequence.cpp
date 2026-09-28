#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int LongestincreasingSubsequence(vector<int>&arr){
	int n=arr.size();
	vector<int>dp(n,1);
	for(int i=0;i<n;i++){
		for(int j=0;j<i;j++){
			if(arr[j]<arr[i]){
				dp[i]=max(dp[i],dp[j]+1);
			}
		}
	}
	return*max_element(dp.begin(),dp.end());
}
int main(){
	int n;
	cout<<"enter the elements";
	cin>>n;
	vector<int>arr(n);
	cout<<"enter"<<n<<"elements";
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	cout<<"LengthofLIS"<<LongestincreasingSubsequence(arr)<<endl;
	return 0;
}
