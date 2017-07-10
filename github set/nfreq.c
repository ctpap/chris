#include <stdio.h>
int main ()
{
	int number, numfreq, i, freq2int;
	//double freq[12];
	long freq2;

	printf("Please enter a number\n");
	scanf("%lld", &freq2);
	printf("Please enter the number to be counted for frequency\n");
	scanf("%d", &numfreq);
	

	freq2int = freq2;

	while(freq2 != number)
{
freq2/=10;
	//for(i<freq;i++);
	//{
	//freq[i] = 0; 
++i;
}

printf("here is the frequency of %d in the number %d ------>%d", numfreq, freq2int,i);
return (0);
}

	
