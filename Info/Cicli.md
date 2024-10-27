2024-10-04


### While (condizione finale)
``` C
while (condizione){
	//esegui operazione
}

```

---

### Fattoriale
``` C
int main(){
	int fatt, n, i;
	scanf("%d", &n);
	fatt = 1;
	i = 2;
	while (i < n){
		fatt = fatt * i;
		i = i + 1;
	}
	printf("%d", fatt);
	
}
```



### Do/while  (condizione finale)
```C
do{
	//esegui operazione
}
while(condizione)
```

### For
```C
for (int i = 0; i < max, i++){
	//esegui operazione
}
```

i++ => i = i + 1
++i => pre-incremento

a = i++ => se i = 5, a = 5, i = 6
b = ++i => se i = 5, a = 6, b = 6