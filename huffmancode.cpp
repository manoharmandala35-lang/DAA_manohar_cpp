#include<iostream>
#include<queue>
#include<unordered_map>
using namespace std;
struct Node{
	char ch;
	int freq;
	Node*left,*right;
	Node(char c,int f){
		ch = c;
		freq=f;
		left=right=nullptr;
	}
};
struct compare{
	bool operator()(Node*a,Node*b){
		return a->freq>b->freq;
	}
};
void generatecode(Node*root,string code,unordered-map<char,string>&huffmancode){
	if(root == nullptr)
	return;
	if(root->left==nullptr&&root->right==nullptr){
		huffmancode[root->ch]=code;
		return;
	}
	generatecodes(root->left,code+"0",huffmancode);
	generatecodes(root->right,code+"1",huffmancode);
}
int main(){
	int n;
	cout<<"enter the of characters:";
	cin>>n;
	priority_queue<Node*,vector<Node*>,compare>pq;
	cout<<"enter character and frequency:\n";
	for(int i=0;i<n;i++){
		char ch;
		int freq;
		cin>>ch>>freq;
		pq.push(new Node(ch,freq));
	}
	Node*root+pq.top();
	unordered_map<char,string>huffmancode;
	generatecodes(root,"",huffmancode);
	cout<<"\nHuffman codes:\n";
	for(auto pair:huffmancode){
		cout<<pair.first<<":"<<pair.second<<endl;
	}
	return 0;
}
