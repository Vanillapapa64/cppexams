#include <iostream.h>
#include <conio.h>

class Product{
  public:
	int product(int num){
	 int product=1;
	 int digit;
	 while(num>0){
	  digit=num%10;
	  product=product*digit;
	  num=num/10;
	 }
	 return product;
	}
};
int main(){
 clrscr();
 Product p;
 int number;
 cout<<"enter number ";
 cin>>number;
 int result=p.product(number);
 cout<<result;
 getch();
 return 0;
}