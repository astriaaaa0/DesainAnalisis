//latihan 

#include<iostream>
using namespace std;

class contoh {
	private:
		int nilai;
	public:
		contoh (int n){
			nilai = n;
		}
	int getnum(){
		return nilai;
	}
};
int main (){
	contoh obj (10);
	cout<<"nilai yang diinput : "<<obj.getnum()<<endl;
	return 0;
}
