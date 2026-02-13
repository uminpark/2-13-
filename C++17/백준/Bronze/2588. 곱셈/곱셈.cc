#include <iostream>
using namespace std;


int main() {
    int A,B;
    cin>>A>>B;
    int C=B%10;
    int D=(B%100)-C;
    int E=B-(D+C);
    cout<<A*C<<endl<<(D/10)*A<<endl<<(E/100)*A<<endl<<(A*C)+(D*A)+(E*A);
    
}
