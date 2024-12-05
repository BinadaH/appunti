#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void separa(char *s, char **s1, char **s2){
	int s_len, s1_len, s2_len, i;

	s_len = strlen(s);
	s1_len = s_len / 2;
	s2_len = s_len - s1_len;

	*s1 = malloc(sizeof(char) * s1_len + 1);	
	for (i = 0; i < s1_len; i++){
		*(*s1 + i ) = *(s + i);
	}
	*(*s1 + i) = '\0';
	*s2 = malloc(sizeof(char)* s2_len + 1);
	for (i = 0; i < s2_len; i++){
		*(*s2 + i) = *(s + i + s1_len);	
	}
	*(*s2 + i) = '\0';
}

int main(){
	char str[] = "HEYCIAO2";
	char *s1, *s2;	
	separa(str, &s1, &s2);
	printf("s1: %s; s2: %s\n", s1, s2);
	return 0;
}
