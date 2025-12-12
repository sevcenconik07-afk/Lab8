#include <iostream>
#include "HeapInt.h"

HeapInt::HeapInt(const HeapInt& hello) 
{
	this->heapValue = new int{ *hello.heapValue };
	delete hello.heapValue;
}
 void HeapInt::operator=(const HeapInt& hello) 
 {
	this->heapValue = new int{ *hello.heapValue };
	 delete hello.heapValue;
	
 }
HeapInt::HeapInt(HeapInt&& hello) 
{
	this->heapValue = std::move(hello.heapValue);
	delete hello.heapValue;
}
void HeapInt::operator =(HeapInt&& hello) 
{
	this->heapValue = std::move(hello.heapValue);
	delete hello.heapValue;
	
}
void swap(HeapInt& a, HeapInt& b)
{
	HeapInt temp{ std::move(a) };

	a = std::move(b);
	b = std::move(temp);
	delete temp.asRef();
			
}



int main() 
{
	
	
}

