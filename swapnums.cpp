#include <iostream.h>
class Swap{
    public:
        int a,b;
    void swapnum(int a,int b){
        cout<<"beforeswapping"<<a<<","<<b;
        a=a+b;
        b=a-b;
        a=a-b;
        cout<<"afterswapping"<<a<<","<<b;
    };
};
int main()
{
    Swap s1;
    s1.swapnum(5,10);
    return 0;
};
