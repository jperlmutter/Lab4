#include <string.h>

#define MAX_RECV_BUFF_SIZE  1024
#define MAX_SEND_BUFF_SIZE  512
#define MAX_HOSTNAME_SIZE   40
#define MAX_PASSKEY_SIZE    32
#define MAX_SSID_SIZE       32


#define SUCCESS             0

#define CONNECTION_STATUS_BIT   0
#define IP_AQUIRED_STATUS_BIT   1



void packetParse(char* pkt);

int getConnected(char* SSID, int32_t encryption, char* password);
int sendRequest(char* request);
void push_Request(char* request);