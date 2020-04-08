int s = socket(AF_INET, SOCK_STREAM, 0);

struct sockaddr_in server;
server.sin_family = AF_INET;
server.sin_port = htons(port);
server.sin_addr.s_addr = INADDR_ANY;

bind(s, (struct sockaddr*)&server, sizeof(server));

listen(s, 5);

struct sockaddr_in client;
int addrlen;
int new_socket = accept(s, (struct sockaddr_in*)&client, &addrlen);
// use the new_socket

char buffer[BUFFER_MAX_SIZE]; // define BUFFER_MAX_SIZE based on the specifics of the server
recv(new_socket, buffer, sizeof(buffer), 0);
// now the buffer contains received data

char msg[] = "From server with love";
send(new_socket, msg, sizeof(msg), 0);