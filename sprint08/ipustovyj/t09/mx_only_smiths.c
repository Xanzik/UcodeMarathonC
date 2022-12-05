#include "only_smiths.h"

t_agent **mx_only_smiths(t_agent **agents, int strength) {
    int i = 0;
    int newsize = 0;
    int j = 0;
    if (*(agents) == NULL) {
        return NULL;
    }
	while ((*agents) != NULL) {
        if (*(agents)[i]->name == "Smith" 
            && (agents)[i]->strength < strength) {
            newsize++;
        }
        i++;
    }
    t_agent **onlysmiths = malloc(sizeof(t_agent) * newsize);
    while ((*agents) != NULL) {
        if (*(agents)[i]->name == "Smith"
            && (agents)[i]->strength < strength) {
                *(onlysmiths)[j]->name = *(agents)[i]->name;
                (onlysmiths)[j]->power = (agents)[i]->power;
                (onlysmiths)[j]->strength = (agents)[i]->strength;
                j++;
        }
    }
    mx_exterminate_agents(agents);
    return onlysmiths;
}
