2024-10-04

## Valori bool:
	0 -> false
	qualsiasi valore $\neq$ 0 -> true 
	
### Operatori logici
&& - and
|| - or
(!)- not




---
>Esercizi da '2024-10-04-esercizi.pdf'
### Anno bisestile #1


``` C
#include <stdio.h>

int main(){
	int anno, bis;
	scanf("%d", &anno);
	bis = (!(anno % 4) && anno % 100) || !(anno % 400);
	printf("%d", bis);
	return 0;
}

```
---
### Valore assoluto #2


``` C
int main(){
	int num;
	scanf("%d", &num);
	if (num < 0){
		num = -num;	
	}
	
	printf("%d\n", num);
	return 0;(es. 1)
}
```
---

### Segno di un numero #3

```C
int main(){
	int num;
	scanf("%d", &num);
	if (num > 0){
		printf("positivo\n");
	}
	else if (num == 0){
		printf("nullo\n");	
		
	}
	else{
		printf("negativo\n");	
	}	
	return 0;
}
```

---
### Es. carattere #4

```C
int main(){
	int c, nuovo_c;
	printf("%d", &c);
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z')){
		if (c < 'a'){
			//maiuscola
			nuovo_c = c + ('a' - 'A');
			printf("%c", nuovo_c);
		}
		else{
			//minuscola	
			nuovo_c = c - ('a' - 'A');
			printf("%c", nuovo_c);
		}	
	}
	else{
		printf("carattere non corrisponde a lettera");
	}
	return 0;
}
```
---
### Es. triangolo #9

``` C
#include <stdio.h>

int main(){
	float a, b, c;
	scanf("%f %f %f", &a, &b, &c);
	if (a > 0 || b > 0 || c > 0){
		if (a + b > c && b + c > a && a + c > b){
			//triangolo valido
			if (a == b && b == c){
				printf("Equilatero\n");
			}
			else if (a == b || b == c || c == a){
				printf("Isoscele\n");
			}
			else{
				printf("Scaleno\n");
			}
		}
		else{
			//Triangolo non valido
			printf("Dimensioni non corrette\n");
		}
	}
	else{
		printf("Numeri negativo\n");	
	}
	return 0;
}
```