Question
Given an unsigned integer N. The task is to swap all odd bits with even bits. For example, if the given number is 23 (00010111), it should be converted to 43(00101011). Here, every even position bit is swapped with adjacent bit on the right side(even position bits are highlighted in the binary representation of 23), and every odd position bit is swapped with an adjacent on the left side.
  
  
  
  solution
  unsigned int swapBits(unsigned int n)
    {
    	// Your code here
    	bitset<32> bit(n);
    	for(int i=0;i<32;i=i+2){
    	    int temp=bit[i];
    	    bit[i]=bit[i+1];
    	    bit[i+1]=temp;
    	}
    	unsigned int x=bit.to_ulong();
    	return x;
    }
