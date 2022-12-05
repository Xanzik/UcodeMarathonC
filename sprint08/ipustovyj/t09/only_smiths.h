#include <stdlib.h>

typedef struct s_agent {
	char *name;
	int power;
	int strength;
}	t_agent;

t_agent *mx_create_agent(char *name, int power, int strength);
void mx_exterminate_agents(t_agent ***agents);
int mx_strcmp(const char *s1, const char *s2);
t_agent **mx_only_smiths(t_agent **agents, int strength);
char *mx_strcpy(char *dst, const char *src);
char *mx_strdup(const char *str);
int mx_strlen(const char *s);
char *mx_strnew(const int size);
