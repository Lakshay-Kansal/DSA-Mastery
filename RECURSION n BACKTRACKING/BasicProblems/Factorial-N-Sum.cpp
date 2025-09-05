//   PROBLEM : FACTORIAL OF NUMBER USING RECURSION

#include <iostream>
using namespace std;
int fact(int n){
    if(n==1) {return 1 ;}
    return n * fact(n-1);
}
int main() { 
    cout<< fact(5);
    return 0; 
}

//   PROBLEM : SUM OF "N" NUMBER USING RECURSION

#include <iostream>
using namespace std;
int sum(int n){
    if(n==1) {return 1 ;}
    return n+sum(n-1);
}
int main() { 
    cout<< sum(5);
    return 0; 
}
