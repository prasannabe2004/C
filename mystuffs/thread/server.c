/*
    C socket server example
*/
 
#include<stdio.h>
#include<string.h>    //strlen
#include<sys/socket.h>
#include<arpa/inet.h> //inet_addr
#include<unistd.h>    //write

int CreateServerSocket(struct sockaddr_in *server)
{
	//Create socket
    int server_sock = socket(AF_INET , SOCK_STREAM , 0);
    if (server_sock == -1)
    {
        printf("Could not create socket");
    }
    puts("Socket created");
     
    //Prepare the sockaddr_in structure
    server->sin_family = AF_INET;
    server->sin_addr.s_addr = INADDR_ANY;
    server->sin_port = htons( 8888 );
     
    //Bind
    if( bind(server_sock,(struct sockaddr *)server , sizeof(*server)) < 0)
    {
        //print the error message
        perror("bind failed. Error");
        return 1;
    }
    puts("bind done");
     
    //Listen
    listen(server_sock , 3);
	
	return server_sock;
}

int AcceptClientConnections(int socket, struct sockaddr_in* client)
{
    //Accept and incoming connection
    puts("Waiting for incoming connections...");
    
	int c = sizeof(struct sockaddr_in);

	//accept connection from an incoming client
	int client_sock = accept(socket, (struct sockaddr *)client, (socklen_t*)&c);
	if (client_sock < 0)
	{
		perror("accept failed");
		return 1;
	}
	puts("Connection accepted");
	return client_sock;
} 

void HandleClientConnection(int client_sock)
{
	int read_size = 0;
    char client_message[2000];
	char server_reply[128] = "SERVER ACK";

	while( (read_size = recv(client_sock , client_message , 2000 , 0)) > 0 )
    {
    	int value = atoi(client_message)+100; 
        //Send the message back to client by incrementing 100
		sprintf(server_reply,"%d",value);
        write(client_sock , &server_reply , strlen(server_reply));
    }
    if(read_size == 0)
    {
        puts("Client disconnected");
        fflush(stdout);
    }
    else if(read_size == -1)
    {
        perror("recv failed");
    }
}
int main(int argc , char *argv[])
{
    int socket_desc , client_sock, c;
    struct sockaddr_in server , client;
     
	socket_desc = CreateServerSocket(&server);
    
	for(;;)
	{ 
		client_sock = AcceptClientConnections(socket_desc,&server);    
    	//Receive a message from client
 		HandleClientConnection(client_sock);   	
	}
    return 0;
}

