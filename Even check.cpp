#include <iostream>
using namespace std;
class EvenOdd{
public:
    void check (){
        int x;
        cin>>x;
        for(int i=2 ; i<=x;i = i=i+2){
                cout<<i<<endl;
        }
    }
};
int main(){
    EvenOdd obj;
    obj.check();
    return 0;
}
