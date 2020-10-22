#include <stdio.h>
  
int main(void)
{
        int system, algorithm, network;
        double average;
	//for print two decimal plcaes;

        printf("Input the system programming, algortihm, and network score:");
        scanf("%d%d%d", &system, &algorithm, &network);

        average = ((double)system + (double)algorithm + (double)network) / 3;
	//casting int variables to double to get two decmial places;
        printf("The average of the three subjects is %.2lf\n", average);
	//good job :D
        return 0;

}

