/* toralize.c */
#include "toralize.h"
#include <stdio.h>


int main(int argc, const char * argv[]) {
char *host ; // the hostname that w're going to connect to
int port;
 if (argc < 3) {
   fprintf(stderr, "Usage: %s <host> <port>\n",argv[0]);
   return -1;
 }
host = argv[1];
port = atoi(argv[2]);


}