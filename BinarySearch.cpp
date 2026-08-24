#include<iostream> 
using namespace std; 

int main(){ 
    int arr[100]; 
    int n; 
    
    cout << "Enter the number of elements (up to 100): " << endl;
    cin >> n; 
    
    cout << "Enter the numbers (in sorted order): " << endl; 
    for(int i = 0; i < n; i++){ 
        cin >> arr[i]; 
    } 
    
    int key; 
    cout << "Enter the key element to search: " << endl; 
    cin >> key; 
    
    int low = 0, high = n - 1; 
    int mid; 
    bool found = false; 
    
    while(low <= high){ 
        mid = low + (high - low) / 2; 
        
        if(arr[mid] == key){ 
            found = true;
            break; 
        } 
        if(arr[mid] < key){ 
            low = mid + 1; 
        } else{ 
            high = mid - 1; 
        } 
    } 
    
    if (found) {
        cout << "Element found at index: " << mid << endl;
    } else {
        cout << "Element not found" << endl;
    }
    
    return 0; 
}
