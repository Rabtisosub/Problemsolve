#include <iostream>
using namespace std;
class EvenOdd{
public:
    void check (){
        int x;
        cin>>x;
        for(int i=1 ; i<=x;i = i=i+1){
            if(i%2== 0){
                cout<<i<<"    ";
        }else{
            cout<<endl<<i<<"    ";
    }
    }
    }
};
int main(){
    EvenOdd obj;
    obj.check();
    return 0;
}
