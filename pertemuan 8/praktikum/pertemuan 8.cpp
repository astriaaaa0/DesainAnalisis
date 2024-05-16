#include <iostream>
#include <cstring>
using namespace std;

const int MAX = 100;
//DEKLARASI CLASS
class Queue {
	private:
		int front, rear, count;
		int arr [MAX];
	public:
		Queue(){
			front = 0;
			rear = MAX - 1;
			count = 0;
		}
		void enqueue (int x){
			if (count >= MAX){
				cout<<"Antrian Penuh."<<endl;
				return;
			}
			rear = (rear + 1) % MAX;
			arr [rear] = x;
			count++;
		}
		int dequeue (){
			if (count <= 0){
				cout<<"Antrian Kosong."<<endl;
				return -1;
			}
			int x = arr[front];
			front = (front + 1) % MAX;
			count--;
			return x;
		}
		int peek(){
			if (count <= 0){
				cout<<"Antrian Kosong."<<endl;
				return -1;
			}
			return arr[front];
		}
		int size (){
			return count;
		}
		bool isEmpty (){
			return count == 0;
		}
		bool isFull (){
			return count == MAX;
		}
};

int main (){
//deklarasi bilangan dalam antrian
	Queue q;
	q.enqueue(1);
	q.enqueue(4);
	q.enqueue(5);
//deklarasi perintah yang akan dilakukan pada antrian
	cout<<"Ukuran Antrian = "<<q.size()<<endl;
	cout<<"Elemen Pertama = "<<q.peek()<<endl;
	cout<<"Elemen Kedua = "<<q.peek()<<endl;
	cout<<"Elemen Keluar = "<<q.dequeue()<<endl;
	cout<<"Elemen Pertama = "<<q.peek()<<endl;
	cout<<"Ukuran Antrian = "<<q.size()<<endl;
	
	return 0;
}

#include <iostream>
using namespace std;

const int MAX = 20;

class Queue{
private:
	int front;
	int rear;
	int arr[MAX];
public:
	Queue (){
		front = -1;
		rear = -1;
	}
	void enqueue (int data){
		if ((rear + 1) % MAX == front){
			cout <<"Queue is Full."<<endl;
			return;
		}
		if (front == -1)
			front = 0;
		rear = (rear + 1) % MAX;
		arr[rear] = data;
	}
	void dequeue (){
		if (front == -1) {
			cout<<"Queue is empty."<<endl;
			return;
		}
		if (front == rear) {
			front = -1;
			rear = -1;
		}else {
			front = (front + 1) % MAX;
		}
	}
	int front_element () {
		if (front == -1) {
			cout<<"Queue is empty."<<endl;
			return -1;
		}
		return arr[front];
	}
	bool is_empty (){
		return (front == -1);
	}
};

int main (){
	Queue q;
	
	q.enqueue(1);
	q.enqueue(2);
	q.enqueue(3);
	
	cout<<"Front element is = "<<q.front_element()<<endl;
	q.dequeue();
	
	cout<<"Front elemen is = "<<q.front_element()<<endl;
	q.dequeue();
	
	return 0;
}
	
	
	#include <iostream>
using namespace std;

struct Node {
	int data;
	Node* next;
};

class Queue {
	private: 
	Node* front;
	Node* rear;
	
	public:
		Queue () {
			front = NULL;
			rear = NULL;
		}
		
		void enqueue (int data) {
			Node* new_node = new Node();
			new_node->data = data;
			new_node->next = NULL;
			
			if (rear == NULL) {
				front = new_node;
				rear = new_node;
				return;
			}
			
			rear->next = new_node;
			rear = new_node;		
			}
			
			void dequeue() {
				if (front == NULL) {
					cout << " Queue is empty." << endl;
					return;
				}
				
				Node* temp = front;
				front = front->next;
				
				if (front == NULL)
				rear = NULL;
				
				delete temp;
			}
			
			int front_element() {
				if (front == NULL) {
					cout << "Queue is empty." << endl;
					return -1;
				}
				
				return front->data;
				
			}
			
			bool is_empty() {
				return (front == NULL);
			}
};

int main () {
	Queue q;
	
	q.enqueue(1);
	q.enqueue(4);
	q.enqueue(9);
	
	cout << "Front element is : " << q.front_element() << endl;
	q.dequeue();
	cout << "Front element is : " << q.front_element() << endl;
	q.dequeue();
	
	return 0;
}
