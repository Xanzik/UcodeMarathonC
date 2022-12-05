#pragma once

typedef struct s_agent{
	char *name;
	int power;
	int strength;
} t_agent;
t_agent *mx_create_agent(char *name, int power, int strength);
int mx_strlen(const char *s);
char *mx_strnew(const int size);
char *mx_strcpy(char *dst, const char *src);
char *mx_strdup(const char *str);
