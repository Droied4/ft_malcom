#ifndef MALCOLM_HPP 
# define MALCOLM_HPP 

# include <string.h>
# include <arpa/inet.h>
# include <netinet/if_ether.h>

extern volatile int loop;

typedef struct s_pair
{
    unsigned char mac[6];
    struct in_addr ip;
} t_pair;

typedef struct s_session_pair 
{
	t_pair src;
	t_pair dst;
} t_session;

struct arp_packet {
    struct ethhdr  eth;    // 14 bytes Ethernet Header
    struct ether_arp arp;  // 28 bytes ARP Body
} __attribute__((packed));

//[PARSE]
void parse_input(char *av[], t_session *session);

//[MALCOLM]
void error(const char *message);

//[AUX]
size_t	ft_strlen(const char *s);
void	*ft_memcpy(void *dst, const void *src, size_t n);
void	*ft_memset(void *str, int c, size_t len);
void *ft_memmem(const void *haystack, size_t haystacklen,
                const void *needle, size_t needlelen);
int	ft_memcmp(const void *s1, const void *s2, size_t n);

#endif 
