#include<stdio.h>
#include<unistd.h>
#include<signal.h>

void signalHandler(int);

int main(){

    int x=1;

        while(x!=8091)
	{
		signal(SIGINT,&signalHandler);
	  	printf("Żeby zobaczyć hasło do wyjścia wpisz Ctrl+C: ");
          	scanf("%d",&x);
        }
    return 0;
}
 void signalHandler(int s){

    printf("Hasło: (8091) %d\n",s);
 }
