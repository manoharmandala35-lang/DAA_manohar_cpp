#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
struct item{
    int value,weight;
};
bool compare(item a,item b){
    double r1=(double)a.value/a.weight;
    double r2=(double)b.value/b.weight;
    return r1>r2;
}
double fractionalknapsack(int capacity,vector<item>& items){
    sort(items.begin(),items.end(),compare);
    double totalvalue=0.0;
    for (auto items : items){
        if(capacity>= item.weight){
            totalvalue += item.value;
            capacity -= item.weight;
        }
        else{
            totalvalue += item.value*((double)cpacity/item.weight);
            break;
        }
    }
    return totalvalue;
}
int main(){
    int n,capacity;
    cout<<"enter number of items:";
    cin>>n;
    vector<item>items(n);
    cout<<"enter the value and weight of the each value:\n";
    for(int i=0;i<n;i++){
        cin>>items[i].value>>items[i].weight;
    }
    cout<<"enter knapsack capacity:";
    cin>>capacity;
    cout<<"maximum value = "<<fractionalknapsack(capacity,items)<<endl;
    return 0;
}