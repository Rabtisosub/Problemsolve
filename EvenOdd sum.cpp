#include <iostream>
using namespace std;
class EvenOdd{
public:
    void check (){
        int x;
        cin>>x;
        int even=0;
        int odd=0;
        for(int i=1 ; i<=x;i = i=i+1){
            if(i%2== 0){
               even =even +i;
        }else{
              odd=odd+i;
    }
    }
    cout<<"Total Even:"<< even<<endl;
    cout<<"Total Odd:"<< odd<<endl;
    }
};
int main(){
    EvenOdd obj;
    obj.check();
    return 0;
}
