2024-10-09

### Struttura algebrica

>[!info] Struttura algebrica (A, $*$)
Coppia di insieme A e funzione $*$ tale che
$* : A \times A \to A$      ($*$ è un'operazione interna su A)

---

### Gruppo commutativo
![[Pasted image 20241009154452.png]]


---
### Anello e Campo


>[!info] (A, +, x) Si definisce ==anello== se:
>->(A, +) è un gruppo commutativo
->$\exists$ l'elemento neutro rispetto a x
->l'operazione x è associativa
->l'operazione x è distributiva rispetto a +
>
>Se vale anche x commutativa
->(A, +, x) si dice ==anello commutativo==
>
>Se esiste l'inverso rispetto a x allora:
>->(A, +, x) si dice ==campo==


==Es==
Sono campi (Z, +, x), dove +: somma, x: moltiplicazione


### Spazio vettoriale

(V, +, x, K)

>[!info] V si dice spazio vettoriale su K se:
-> (V, +) è un gruppo commutativo (4 condizioni (ass, neutro, inverso, comm))
-> $\alpha (v+w) = \alpha \cdot v + \alpha \cdot w$     (v e w sono vettori e $\alpha \in K$)
-> $(\alpha + \beta)v = \alpha \cdot v + \beta \cdot v$      (v è un vettore e $\alpha, \beta \in K$)
-> $(\alpha \cdot \beta)v = \alpha(\beta \cdot v)$              (v è un vettore e $\alpha, \beta \in K$)
-> $1 \cdot v = v$                             (identità)

(distributività rispetto alla somma (tra scalari e vettori))
(associatività con la moltiplicazione tra scalari per vettore)
(identità)

==Es.== 
- L'insieme dei vettori in $R^n$
- L'insieme dei polinomi $R[x]$ nella variabile x con coefficienti reali
- L'insieme delle matrici $M_{m,n}(R)$
---



### Combinazione lineare


> [!NOTE] Combinazione lineare
> Sia $(V, +, \cdot, R)$ uno spazio vettoriale, siano $v_{1}, v_{2}, \dots, v_n \in V$. Si dice combinazione lineare dei  $v_{1}, v_{2}, \dots, v_n$ ogni espressione del tipo:
> $a_{1}v_{1}+a_{2}v_{2}+\dots+a_{n}v_{n} \quad a_{1}, \dots, a_{n} \in R$
> Scrittura alternativa:
> $$\sum_{i=0}^{n} a_{i}v_{i}$$



Le operazioni in uno spazio vettoriale si può sempre rappresentare come combinazione lineare


> [!NOTE] Generatori
> Un insieme $G \subset V$ si dice ==sistema di generatori== se comunque preso $v \in V$, questo si può scrivere come combinazione lineare di $v_{1}, v_{2}, \dots, v_{n} \in G$
> L'insieme dei vettori che sono combinazione lineare di $v_{1}, \dots, v_{n} \ \text{è detto span lineare di} \ v_{1}, \dots, v_{n} \ \text{e si indica con} \ L(v_{1},\dots, v_{n})$



Il sistema di generatori permette di rappresentare tutti gli elementi di V usandone un numero ristretto (quelle di G).

(ma questo non toglie il fatto che i vettori di G non siano ridondanti, ovvero non siano linearmente dipendenti).

### Indipendenza lineare


> [!NOTE] Indipendenza lineare
> Dei vettori $v_{1}, v_{2}, \dots, v_{n}$ si dicono linearmente indipendenti se l'unica loro combinazione lineare che da il vettore nullo è quella con coefficienti nulli:
>
>$a_{1}v_{1}+a_{2}v_{2}+\dots, a_{n}v_{n} = 0$ se e solo se $a_{1} = a_{2} = \dots = a_{n} = 0$
>
>L'insieme dei vettori *linearmente indipendenti* (può essere infinito) è $S \subset V$ che contiene i vettori linearmente indipendenti $v_{1}, v_{2}, \dots, v_{n}$



> [!NOTE] nota
> Se $v_{1}, v_{2}, \dots, v_{n} \quad n \geq 2 \ \text{sono linearmente indipendenti, allora nessun vettore tra}$
> $v_{1}, v_{2}, \dots, v_{n} \ \\ \text{è combinazione lineare dei rimanenti}$


---

### Base di uno spazio vettoriale


> [!NOTE] Base
> Se B è un insieme di generatori di V (s.v), e B è un insieme di vettori linearmente indipendenti
> si dice che B è una ==base== di V


> [!info] Infinite basi
> Se uno spazio vettoriale a una base, allora ne ha infinite:
> Infatti se B = {$v_{1}, \dots, v_{n}$} è una base allora lo è anche $B_{2} = \{a_{1}v_{1}, \dots, a_{n}v_{n}\} \ con  \ a_{1},\dots,a_{n} \in K$ (campo degli scalari) 


---
Base canonica

> [!NOTE] nello spazio $R^n$
> $e_{1} = (1, 0, 0, \dots,0),  e_{2} = (0, 1, 0, \dots,0), \dots, e_{n} = (0, 0, \dots, 1)$ formano la base canonica di $R^n$
> $$ \epsilon_{n} = \{e_{1}, e_{2}, \dots,e_{n}\} $$ 

---

> [!NOTE] la combinazione lineare è unica
> La combinazione lineare di elementi di una base di uno spazio vettoriale per rappresentare i vettori di quest'ultimo è ==unica==.

> [!info] Osservazione
> Secondo la proposizione precedente, essendo la combinazione lineare di un elemento di uno s.v rispetto a una base unica, si ha che a ogni vettore è associato una n-upla di numeri reali tale che $a_1v_{1}+\dots+a_{n}v_{n} = v, \ a_{1}, \dots, a_{n} \in R, \ v \in V, \ v_{1}, \dots, v_{n} \in B \subset V$
> 
> Questi valori si dicono coordinate di v rispetto a B

> [!NOTE] Esistenza di una base
> Ogni spazio vettoriale $V \neq \{0\}$ ammette basi


> [!NOTE] 
> Dati uno spazio vettoriale V e un insieme di generatori $G = \{w_{1}, \dots, w_{m}\}$ e un insieme di vettori linearmente indipendenti $S = \{v_{1}, \dots, v_{n}\}$ allora $n \leq m$ 


> [!info] Osservazione
> Un insieme di vettori linearmente indipendenti in uno s.v. V è sempre completabile affinché diventi una base di V.



> [!INFO] B e B' hanno numero di elementi uguali
> Se B e B', sono due basi di uno spazio vettoriale V, allora B e B' hanno la ==stessa cardinalità== (numero di elementi)


> [!NOTE] Dimensione di uno spazio vettoriale
> Se uno spazio vettoriale ha una base composta da n elementi allora V ha dimensione n.
> Se V non ha basi finite allora V ha dimensione infinita.
 
Se dim V = n allora il numero massimo di vettori linearmente indipendenti possibili in V è n.
n vettori linearmente indipendenti di V formano una sua base.

### Sottospazio


> [!NOTE] Sottospazio vettoriale
> Un sottoinsieme $W \subset V$ si dice sottospazio vettoriale di V se W è uno spazio vettoriale rispetto alle operazioni di V (somma e prodotto per scalare).


> [!info] Validità
>1. $0_{v} \in W$
>2. $\forall w_{1}, w_{2} \in W, \forall a_{1},a_{2}, R \quad vale \quad a_{1}w_{1}+a_{2}w_{2} \in W$

(somma e prodotto interni a W)



> [!NOTE] ...
> Sia V uno spazio vettoriale; dati $v_{1}, \dots, v_{n} \in V$ si definisce sottospazio generato da $v_{1}, \dots,v_{n}$:
> $\big< v_{1}, \dots, v_{n}\big>$ = $L(v_{1}, \dots,v_{n})$  	

(è sottospazio o lo spazio vettoriale stesso se $v_{1}, \dots, v_{n}$ è base di V)


> [!NOTE] Sottospazio affine
> ==Sottospazio affine== di V è definito da un punto $v_{0} \in V, \quad W \in V$ sottospazio vettoriale (detto giacitura) ed è l'insieme:
> $$A= v_{0} + W= \{v_{0}+w:w\in W\} $$ 

Se $v_{0} \in W$ allora $A = W$


> [!NOTE] Teorema di completamento + struttura per sottospazi vettoriali
> Sia U sotto.vett. di V, e siano $u_{1}, \dots, u_{l}$ vett. linearmente indipendenti da U, allora, allora possiamo completare questo insieme ad una base $u_{1}, \dots, u_{l}, u_{l+1}, u_{m}$ di U con
>  dim(U) = m $\leq$ dim(V).
> Questo dimostra che: $$U = L(u_{1}, \dots, u_{m})$$
