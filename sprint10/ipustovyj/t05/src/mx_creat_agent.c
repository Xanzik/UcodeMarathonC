#include "parse_agents.h"

t_agent *mx_create_agent(char *name, int power, int strength) {
    t_agent *new_agent = malloc(sizeof(16));

    if (name == NULL)
        return NULL;
    
    new_agent->name = mx_strdup(name);
    new_agent->power = power;
    new_agent->strength = strength;

    if (new_agent == NULL)
        return NULL;
    
    return new_agent;
}
