#include <signal.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

static void ctrlC_signal_handler(int sig){
    printf("Ctrl-C pressed\n");
    printf("Program did'nt quit execution\n");
    printf("as sig:%d got re defined \n",sig);


}


int main(int argc, char **argv){

    signal(SIGINT, ctrlC_signal_handler);

    while(1)
	{
		printf("Program running\n");
		sleep(1);
	}
}