#include <iostream>
using namespace std;
class mtk {
	private :
		int angka1;
		int angka2;
	public :
		void setangka1(int x){
			angka1 = x;
		}
		void setangka2(int y){
			angka2 = y;	
		}
		int getangka1(){
			return angka1;
		}
		int getangka2(){
			return angka2;
		}
		
};

int main(){
int a,b,u,k,l,i;
mtk mtk;
	cout << "Masukan Angka Pertama : ";
	cin >> a;
	cout << "Masukan angka Kedua :";
	cin >> b;

mtk.setangka1(a);
mtk.setangka2(b);

u = mtk.getangka1() + mtk.getangka2();
cout << "pertambahan :"<< u << endl;

k = mtk.getangka1() - mtk.getangka2();
cout << "pengurangan :"<< k  << endl;

l = mtk.getangka1() * mtk.getangka2();
cout << "perkalian :"<< l << endl;

if (b != 0){
i = mtk.getangka1() / mtk.getangka2();
cout << "pembagian :"<< i << endl;
}else{
	cout << "hasil pembagian : error"<<endl;
}
	
}
