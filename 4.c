#include <stdio.h>
#define LEN 30
#define TEXLEN 50

int main(){
	FILE *fp;
	char str[LEN], string[TEXLEN];
	int i;
	scanf("%s", str);

	fp = fopen(str, "r");

	fscanf(fp, "%[^\n]", string);
	i = 0;
	while (!feof(fp)){
		printf("%d %s\n",i, string);
		fscanf(fp, "\n", string);
		fscanf(fp, "%[^\n]", string);
		i++;
	}
	return 0;
}
