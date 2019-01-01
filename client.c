#include "pipe_networking.h"


int main() {

  int to_server;
  int from_server;

  from_server = client_handshake( &to_server );
  char input[100];
  char response[100];
  
  while(1){
    printf("input: ");
    fgets(input, 100, stdin);
    input[strlen(input) - 1] = '\0';
    write(to_server, input, 100);
    read(from_server, response, 100);
    printf("%s\n",response);
  }
}
