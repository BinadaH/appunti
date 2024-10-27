### Definizione
Uno spazio vettoriale $(V, +, \cdot, K)$ è individuato da:
-> insieme V dei vettori
-> campo K degli scalari
-> operazione binaria interna di somma $+: V\times V \to V$
-> operazione binaria esterna di moltiplicazione per uno scalare $\cdot: K \times V \to V$

Tali che
1) (V, +) è un gruppo commutativo (vale prop. associativa, commutativa, $\exists$ elemento neutro, $\exists$ opposto)
2) Il prodotto per scalare soddisfa la distribuità rispetto all'addizione $( v\cdot(t+s) = vt+vs \ \land t(v_{1}+v_{2}) =v_{1}t+v_{2}t)$, associatività $(t\cdot s) \cdot v = t\cdot(s \cdot v)$, se 1 è l'identità su K rispetto alla moltiplicazione allora $v \cdot 1 = v$ = 

---
### Definizione (combinazione lineare)

Fissato uno spazio vettoriale (V, +, $\cdot$, K) 
l'espressione: 
$$

	u = c_{1} \cdot v_{1} + \dots + c_{n} \cdot v_{n} = \sum_{i=1}^{n} c_{i}\cdot v_{i}

$$
è detta combinazione lineare di $v_{1}, \dots, v_{n}$

u è combinazione lineare di $v_{1}, \dots, v_{n}$

L'insieme dei vettori che sono combinazione lineare di $v_{1}, \dots, v_{n}$ è detto span lineare di $v_{1}, \dots, v_{n}$
e si indica con 
$\it L(v_{1}, \dots, v_{n}) = \{u \in V : u = c_{1}\cdot v_{1}+\dots+c_{n}\cdot v_{n}\}$  (facendo variare in tutti i modi possibili c in K)
