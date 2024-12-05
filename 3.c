#include <stdio.h>
#include <lista.h>

node_t* minori(node_t *t){
	node_t *res, *curri, *currj;
	res = NULL;
	int inserire;
	for (curri = t; curri; curri = curri->next){
		for (inserire = 1, currj = t; inserire && currj &&  currj != curri; currj = currj->next){
			if (curri->num >= currj->num){
				inserire = 0;				
			}
		}
		if (inserire){
			res = InserisciInCoda(res, curri->num);
		}
	}	

	return res;
}

int main(){
	node_t *l1, *l2;
	l1 = l2 = NULL;
	l1 = InserisciInTesta(l1, 1);
	l1 = InserisciInTesta(l1, 2);
	l1 = InserisciInTesta(l1, 3);
	l1 = InserisciInTesta(l1, 12);
	l1 = InserisciInTesta(l1, 2);
	l1 = InserisciInTesta(l1, 8);
	l1 = InserisciInTesta(l1, 5);
	l1 = InserisciInTesta(l1, 8);
	
	PrintLista(l1);;
	l2 = minori(l1);
	PrintLista(l2);
	return 0;
}
