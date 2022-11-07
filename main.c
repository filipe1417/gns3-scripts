#include <stdio.h>
#include <sys/socket.h>
#include <netdb.h>
#include <stdlib.h>

int main(int argc, char *argv[]){

    int s;
    int conecta;
    int porta = strtol(argv[2], NULL, 10);

    struct sockaddr_in target;

    s = socket(AF_INET, SOCK_STREAM, 0);
    target.sin_family = AF_INET;
    target.sin_port = htons(porta);
    target.sin_addr.s_addr = inet_addr(argv[1]);

    conecta = connect(s, (struct sockaddr *)&target, sizeof target);

    if (conecta == 0){
        printf("Porta %d aberta\n", porta);
        close(s);
        close(connect);
    }

    else {
        printf("Porta %d fechada\n", porta);
    }

}
