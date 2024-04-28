/******************************************************************************


VINOTHKANNAN R
Firmware Developer

*******************************************************************************/
#include <stdio.h>
#include <stdint.h>

void Byte_to_BinaryArray(uint8_t n , uint8_t Data_array[])
{
	uint8_t i;
	int j = 0;
	for (i = 1 << 7; i > 0; i = i / 2)  {
	    
	    if(n & i){
	        printf("1");
	        Data_array[j]  = 1 ;
	        j++;
	    }
	    else
	    {
	        printf("0"); 
	         Data_array[j]  = 0 ;
	         j++;
	    }
	    
	}
	printf("\n");
}

int main()
{
    uint8_t data[10];
    Byte_to_BinaryArray(0b01110011,data);
    for(int i = 0 ; i<8;i++){
         printf("%d\n",data[i]); 
    }
  

    return 0;
}
