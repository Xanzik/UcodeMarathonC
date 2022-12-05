#include <stdlib.h>

typedef struct s_agent {
    char *name;
    int power;
    int strength;
} t_agent;

void mx_exterminate_agents(t_agent ***agents);
