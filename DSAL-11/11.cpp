#include<iostream>
#include<algorithm>
using namespace std;
 
class Heap{
    int n;
    int *minheap, *maxheap;
    
    public:
    void get();
    void displaymin(){
        cout <<"minimum number is: "<<maxheap[0]<<endl;
    }
    void displaymax(){
        cout<<"maximun number is: "<<minheap[0]<<endl;
    }
    void upadjust(bool,int);
};
 
void Heap::get(){
    cout<<"enter the number of entries you want: ";
    cin >> n;
    minheap= new int[n];
    maxheap= new int[n];
    
    cout <<"enter numbers :"<<endl;
    for(int i=0; i<n; i++){
        int k;
        cin >>k;
        minheap[i]=k;
        upadjust(0,i);
        maxheap[i]=k;
        upadjust(1,i);
    }
}
 
void Heap::upadjust(bool m, int l){
    int s;
    if(!m){
        while(minheap[(l-1)/2]<minheap[l]){
            swap(minheap[l], minheap[(l-1)/2]);
            l=(l-1)/2;
            
            if(l== -1) break;
        }
      
    }else{
        while(maxheap[(l-1)/2]>maxheap[l]){
            swap(maxheap[l], maxheap[(l-1)/2]);
            l=(l-1)/2;
            
            if(l== -1) break;
        }
    }
}
 
 
 
int main(){
    
    cout<<"1. min heap"<<endl;
    cout<<"2. max heap"<<endl;
    cout<<"enter your choice: "<<endl;
    
    int choice;
    cin >>choice;
    
    Heap h;
    
    switch(choice){
        case 1:
            h.get();
            h.displaymax();
            break;
        case 2:
            h.get();
            h.displaymax();
            break;
        return(0);
    }
    
    return 0;
}
