#include<iostream>
#include<vector>
using namespace std;
int longestCommonSubsequence(string&A,string&B){
	int m=A.size(),n=B.size();
	vector<vector<int>>dp(m+1,vector<int>(n+1,0));
	for(int i=1;i<=m;i++){
		for(int j=1;i<=n;i++){
			if(A[i-1]==B[j-1]){
				dp[i][j]=1+dp[i-1][j-1];
			}
		}
	}
	return dp[m][n];
}
int main(){
	string A,B;
	cout<<"enter the string\n";
	cin>>A;
	cout<<"enter the string\n";
	cin>>B;
	cout<<"Length of LCS"<<longestCommonSubsequence(A,B)<<endl;
	return 0;
}
