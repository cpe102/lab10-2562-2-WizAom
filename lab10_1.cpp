#include<iostream>
#include<string>
#include<cstdlib>
#include<ctime>
using namespace std;
int main(){
    srand(time(0));
    string x[9]={"A","B+","B","C+","C","D+","D","F","W"};
    int i,r;
    cout << "Press Enter 3 times to reveal your future.\n";
    for(i=1;i<=3;i++){
        cin.get();
    }
    r = rand()%9;
    cout << "You will get " << x[r] << " in this 261102.";
    
}


