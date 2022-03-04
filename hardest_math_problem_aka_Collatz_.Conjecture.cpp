//This program is a shot at breaking the collatz conjecture
//Its a quite simple problem to understand but has not been proven (yet !)
// It states that .... pick any natural number 
//**if it is even =>divide it by 2
//**if it is odd => multiply by 3 and add 1

//the conjecture states that eventually any number will converge to 1

#include <bits/stdc++.h>
using namespace std;

int main(){
bool a=true;
long long p=pow(10, 7); //trying to check for all numbers from 1 to 1million
unordered_set<int> mp;
for(long long i=2; i<=p; i++){
long long x=i;
    while(a){
        if(x==1){   // break out if it converges to 1
            mp.insert(x);   // store every node in stack so that in future we dont have to calculate the whole tree. If we again encounter this node, we can directly conclude that it will lead to 1
            break;
        }
        if(mp.find(x)!=mp.end()){
            break;
        }
        if(x & 1){
            x=(3*x+1)/2;
            continue;
        }
        else{
            x/=2;
        }
        
    }
    // cout<< i <<" follows collatz conjecture !"<<endl;

}

return 0;
}