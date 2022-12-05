#include <stdlib.h>

int mx_strlen(const char *s);
char *mx_strcpy(char *dst, const char *src);
void mx_strdel(char **str);
char *mx_strjoin(char const *s1, char const *s2);
char *mx_strnew(const int size);

char *mx_concat_words(char **words) {
	if (*words == NULL)
		return NULL;
	char *str = NULL;
	for (int i = 0; words[i] != NULL; i++) {
		str = mx_strjoin(str, words[i]);
		if (words[i + 1] != NULL) {
			str = mx_strjoin(str, " ");
		}
	}
	return str;
}
