/******************************************************************************


							VINOTHKANNAN R
							FIRMWARE DEVELOPER

*******************************************************************************/
#include <stdio.h>
#include <string.h>




#include <stdio.h>
#include <string.h>


void Reverse_String(char string[]){
    
    int strl = strlen(string);
    printf("String Length      %d\n",strl);
    printf("String Actual      %s\n",string);
    
    
    char temp;
    int j =strl-1 ;
    
    for(int i =0; i <strl/2 ;i++) {
        
        temp = string[i];
        string[i] = string[j];
        string[j] = temp;
        j--;
    }
    
    printf("String Reversed    %s\n",string);
    
}


int main()
{
    char data[] = "zxcvbmlkjhgfdsa";
    
    Reverse_String(data);

    return 0;
}








