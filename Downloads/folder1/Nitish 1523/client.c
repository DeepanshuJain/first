#include<sys/socket.h>
#include<sys/type.h>
#include<sys/time.h>
#define maxline 50
int main(int argc,char* agv)
{

	int sockfd,n;
	char recvline[maxline+1];
        struct sockaddr_in servaddr;
	if(argc!=2)
		printf("\n IP address wrong\n");
	if((sockfd=socket(AF_INET
