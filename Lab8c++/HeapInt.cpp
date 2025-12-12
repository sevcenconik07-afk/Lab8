
#include <iostream>
#include "HeapInt.h"

HeapInt::HeapInt(const HeapInt& hello) 
{
	
	
        *this->heapValue = new int{ *hello.heapValue} ;
          
}
 void HeapInt::operator=(const HeapInt& hello) 
 {
     if(this->heapValue != nullptr )
     {
         
     	*this->heapValue = *hello.heapValue ;
     }
     else
     {
        *this->heapValue = new int{ *hello.heapValue} ;
     }
 }
HeapInt::HeapInt(HeapInt&& hello) 
{
	    
        this->heapValue = hello.heapValue;
        hello.heapValue = nullptr;
     
}
void HeapInt::operator =(HeapInt&& hello) 
{
     delete  this->heapValue ;
	 this->heapValue = hello.heapValue;
	 hello.heapValue = nullptr;
	
}
void swap(HeapInt& a, HeapInt& b)
{
	HeapInt temp{ std::move(a) };
    
	a = std::move(b);
    
	b = std::move(temp);
    
	 
			
}



int main() 
{


}

