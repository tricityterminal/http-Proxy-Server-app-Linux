
#include <sys/socket.h>
#include <netinet/in.h>
#include <netdb.h>


extern int sockvrsn, socktyp, sockprtcl;

extern int clisocket;

int clisockmde = AI_PASSIVE|AI_ADDRCONFIG|AI_CANONNAME;

extern socklen_t clisockaddrinfsze;

extern const struct sockaddr *clisockaddrinf;

char *cliaddrnfoiphost = NULL;



struct addrinfo cliaddrnfo{
              cliaddrnfo.ai_flags = clisockmde;
              cliaddrnfo.ai_family = sockvrsn;
              cliaddrnfo.ai_socktype = socktyp;
              cliaddrnfo.ai_protocol = sockprtcl;
              cliaddrnfo.ai_addrlen = clisockaddrinfsze;
              cliaddrnfo.ai_addr = clisockaddrinf;
              cliaddrnfo.ai_canonname = cliaddrnfoiphost;
              cliaddrnfo.ai_next;
          };

          int getaddrinfo(const char *restrict node,
                                 const char *restrict service,
                                 const struct addrinfo *restrict hints,
                                 struct addrinfo **restrict res);

                 void freeaddrinfo(struct addrinfo *res);


 int sockvrsn = AF_INET;

 int socktyp = SOCK_STREAM;

 int sockprtcl = IPPROTO_TCP;

       int static clisocket = socket(sockvrsn, socktyp, sockprtcl);

      sa_family_t clisockaddrvrsn = sockvrsn;

      in_port_t clisockaddrport = htons(80); // http port tcp/ip //

      sa_family_t clisockipaddrvrsn = sockvrsn;

      char clisockipaddrstrng[clisockipaddrstrng+1] = NULL;

      int clisockipaddrstrngsze = sizeof(clisockipaddrstrng)

      struct sockaddr clisockipaddr{
                 clisockipaddr.sa_family = clisockipaddrvrsn;      /* Address family */
                 clisockipaddr.sa_data = clisockipaddrstrng[clisockipaddrstrng+1]      /* Socket address */
             };



             in_addr_t clisockipaddrnt = inet_addr(clisockipaddrhst2nt);

             const char *clisockipaddrhst2nt = htonl(clisockipaddrstrng[clisockipaddrstrng+1]);

             struct in_addr clisockip{
                 clisockip.s_addr = clisockipaddrnt;
             }


struct sockaddr_in clisockaddr{
           clisockaddr.sin_family = clisockaddrvrsn;    /* AF_INET */
           clisockaddr.sin_port = clisockaddrport;       /* Port number */
           clisockaddr.sin_addr.s_addr = clisockipaddrnt;       /* IPv4 address */
       };


const struct sockaddr *clisockaddrinf = clisockaddr;

socklen_t clisockaddrinfsze = sizeof(clisockaddrinf);

       int static clisockcnct = connect(clisocket, clisockaddrinf, clisockaddrinfsze);
