#include <iostream>
#include<queue>
#include <string>
using namespace std;
 
struct patient{
    string name;
    int priority;
};
 
bool operator<(const patient &a, const patient &b){return a.priority<b.priority;}
 
int main(){
  
    priority_queue<patient> q;
    
    int choice;
    do{
        cout<<"1. add patient"<<endl;
        cout<<"2. treat patient"<<endl;
        cout<<"3. exit"<<endl;
        cout<<"enter your choice: "<<endl;
        cin>>choice;
        
        switch(choice){
            
            case 1:
                patient p;
                cout<<"enter patient name: "<<endl;
                cin>>p.name;
                cout<<"priority-> 1. serious 2. non serious 3. general checkup\n enter priority"<<endl;
                cin >>p.priority;
                q.push(p);
                cout<<"patient added successfully"<<endl;
            break;
            
            case 2:
                if(q.empty()){cout<<"no patient in the queue"<<endl;}
                else{cout<<"serving patient "<<q.top().name<<endl;}
                q.pop();
            break;
            
            case 3:cout<<"thank you! visit again!"<<endl;
            break;
            
            default:cout<<"Enter a valid choice"<<endl;
        }
      
    }while(choice!=3);
    
    return 0;
}
