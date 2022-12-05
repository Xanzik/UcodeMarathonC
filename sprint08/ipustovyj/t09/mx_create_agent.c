#include "only_smiths.h"

t_agent *mx_create_agent(char *name, int power, int strength) {
    t_agent *new_agent = malloc(sizeof(t_agent));

    if (name == NULL)
        return NULL;
    
    new_agent->name = name;
    new_agent->power = power;
    new_agent->strength = strength;

    if (new_agent == NULL)
        return NULL;
    return new_agent;
}

