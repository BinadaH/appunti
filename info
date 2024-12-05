#include <stdio.h>
#include <lista.h>

void duplicati(node_t *t){
	node_t *curri, *currj;
	for (curri = t; curri; curri = curri->next){
		for (currj = curri; currj && currj->next; currj = currj->next){
			if (currj->next->num == curri->num){
				currj->next = currj->next->next;
			}
		}
	}
}

int main(){
	node_t *l1;
	l1 = NULL;
	l1 = InserisciInTesta(l1, 3);	
	l1 = InserisciInTesta(l1, 2);	
	l1 = InserisciInTesta(l1, 1);	
	l1 = InserisciInTesta(l1, 8);	
	l1 = InserisciInTesta(l1, 3);	
	l1 = InserisciInTesta(l1, 8);	
	
	PrintLista(l1);
	duplicati(l1);
	PrintLista(l1);
	return 0;
}
