
#include <iostream.h>
class Largest{
    public:
    void largestnum(int a,int b,int c){
        if(a>b){
            if(a>c){
                cout<<"largest number is a:"<<a;
            }
            else{
                cout<<"largest number is c:"<<c;
            }
        }else{
            cout<<"largest number is b:"<<b;
        }
    };
};
int main()
{
    Largest l1;
    l1.largestnum(5,9,2);
    return 0;
};

