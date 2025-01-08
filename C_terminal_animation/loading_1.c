#include <stdio.h>
#include <unistd.h> // For usleep

int main()
{

	printf("\n");
	printf("\n");
	printf("\n");
	printf("\n");
	while(1) { 
		printf("              \\\r");
		fflush(stdout);  // Ensures the output is immediately written to the console
		usleep(100000);  // 100 milliseconds delay

		printf("              -\r");
		fflush(stdout);
		usleep(100000);

		printf("              /\r");
		fflush(stdout);   
		usleep(100000);

		printf("              |\r");
		fflush(stdout);
		usleep(100000);
	}
	return 0;
}
