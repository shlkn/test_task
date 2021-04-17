#include <inet_code.h>





// Код драйвера

void start(char *buffer)
{

    int sockfd;


    char hello[18] = "Hello from server";

    struct sockaddr_in servaddr, cliaddr;



    // Создание дескриптора файла сокета

    if ( (sockfd = socket(AF_INET, SOCK_DGRAM, 0)) < 0 ) {

        perror("socket creation failed");

        exit(EXIT_FAILURE);

    }



    memset(&servaddr, 0, sizeof(servaddr));

    memset(&cliaddr, 0, sizeof(cliaddr));



    // Заполнение информации о сервере

    servaddr.sin_family    = AF_INET; // IPv4

    servaddr.sin_addr.s_addr = inet_addr(IP);

    servaddr.sin_port = htons(PORT);



    // Привязываем сокет с адресом сервера

    if ( bind(sockfd, (const struct sockaddr *)&servaddr,

            sizeof(servaddr)) < 0 )

    {

        perror("bind failed");

        exit(EXIT_FAILURE);

    }



    int n;


    socklen_t len = sizeof(cliaddr); // len is value / resuslt



    n = recvfrom(sockfd, (char *)buffer, MAXLINE,

                MSG_WAITALL, ( struct sockaddr *) &cliaddr,

                &len);

    buffer[n] = '\0';

    printf("Client : %s\n", buffer);
    sendto(sockfd, (const char *)hello, strlen(hello),

        MSG_CONFIRM, (const struct sockaddr *) &cliaddr,

            len);

    //printf("Hello message sent.\n");
}
