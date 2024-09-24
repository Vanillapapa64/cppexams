#include <iostream.h>
#include <conio.h>
class Table{
 private:
	int num;
 public:
	void table(){
	 cout<<"enter a number ";
	 cin>>num;
	 for (int i=1;i<=10;i++){
	  cout<<num<<"*"<<i<<"="<<num * i<<endl;
	 }
	}

};
int main(){
 clrscr();
 Table t;
 t.table();
 getch();
 return 0;
}