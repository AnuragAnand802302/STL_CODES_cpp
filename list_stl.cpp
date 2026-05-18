#include <bits/stdc++.h>
using namespace std;
int main(){
    list<int> l1;
    int n;
    cout<<"enter the size and elements of the list\n";
    cin>>n;
    for(int i=0;i<n;i++){
        int t;
        cin>>t;
        l1.emplace_back(t);
    }
    cout<<"the given the list is\n";
    for(int i:l1){
        cout<<i<<"->";
    }
    cout<<"null\n";
    auto it = l1.begin();
    while(it != l1.end()){
        cout<<*it<<"->";
        it++;
    }
    cout<<"null\n";
    cout<<"enter a number to be deleted from the list\n";
    cin>>n;
    l1.remove(n);
    cout<<"the updated list is\n";
    for(int i:l1){
        cout<<i<<"->";
    }
    cout<<"null\n";
    cout<<"sorted list is\n";
    l1.sort();
    for(int i:l1){
        cout<<i<<"->";
    }
    cout<<"null\n";
    cout<<"removing repeated occurrences in the list\n";
    l1.unique();
    cout<<"the updated list is\n";
    for(int i:l1){
        cout<<i<<"->";
    }
    cout<<"null\n";
    return 0;
}