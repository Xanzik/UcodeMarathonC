#include "create_new_agents.h"

t_agent **mx_create_new_agents(char **name, int *power, int *strength, int count) {
    t_agent **agents = malloc(count * sizeof(16));
    for (int i = 0; i < count; i++)
        agents[i] = mx_create_agent(name[i], power[i], strength[i]);
    
    return agents;
}

