#include <stdio.h>



int B[10]={0};



int bin2(int n, int k) { 

        int i, j;  

        for(i=0; i<=n; i++) 

                for(j=i; j >= 0; j--)

                        if  

                                (j==0 || j == i) B[j] = 1;
 

                        else 

                                B[j] = B[j-1] + B[j]; 



        return B[k]; 

}



int main(void)

{

        int result;

        printf("Problem : 9 C 3\n");

        result = bin2(9, 3); 

        printf(" Result : %d\n", result);



        return 0;

}
