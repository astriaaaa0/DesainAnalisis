#include<iostream>
usingnamespace std;

class book{
	private:
		
		string bookName;
		string writer;
		int year;
	public:
		bookinfo(){
			bookName = "-";
			writer = "-";
			year = 0 ;	
		}
	void set (string a,string b, int c){
		bookName = a;
		writer = b;
		year = c;
	}
	void display (){
		cout<<"book information"<<endl
		<<"title : " << bookName <<endl
		<<
		
	}
};
