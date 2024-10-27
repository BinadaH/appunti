``` C
int main(){
	int voto;
	scanf("%d", &voto);
	if (voto >= 0 && voto <= 30){
		if (voto < 10){
			printf("grav. insuff.\n");
		}
		else if (voto <= 17){
			printf("insuff..\n");
		}
		else if (voto <= 24){
			printf("suff.\n");
		}
		else{
			printf("ottimo\n");
		}
	}
	else{
		printf("Voto errato");
	}
}
```