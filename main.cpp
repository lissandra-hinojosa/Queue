#include <iostream>
#include <cstdlib>
using namespace std;

// define default capacity of the queue
#define SIZE 10

// Class for queue
class queue
{
	int *arr;		// array to store queue elements
	int capacity;	// maximum capacity of the queue
	int front;		// front points to front element in the queue (if any)
	int rear;		// rear points to last element in the queue
	int count;		// current size of the queue

public:
	queue(int size = SIZE);		// constructor
	~queue();					// destructor

	void dequeue();
	void enqueue(int x);
	int peek();
	int size();
	bool isEmpty();
	bool isFull();
};

// Constructor to initialize queue
queue::queue(int size)
{
	arr = new int[size];
	capacity = size;
	front = 0;
	rear = -1;
	count = 0;
}

// Destructor to free memory allocated to the queue
queue::~queue()
{
	delete[] arr;
}

int main()
{
	
}
