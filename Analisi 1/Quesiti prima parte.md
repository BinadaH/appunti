# 1.1
Definire gli insiemi numerici N, Z, Q. 

$$ N = \{0, 1, 2, 3, \dots\} $$
$$ Z = \{0, -1, 1, -2, 2, -3, 3, \dots\}$$
$$ Q = \{\frac{m}{n} : m, n \in Z, n \neq 0\}$$
Illustrare come si eseguono le operazioni di
somma e prodotto in Q. 
$$ \frac{m}{n} + \frac{q}{p} = \frac{mp+qn}{np}$$
$$ \frac{m}{n} \cdot \frac{q}{p} = \frac{mq}{np}$$
$$ \frac{m}{ n} : \frac{q}{p} = \frac{m}{n} \cdot \frac{p}{q} = \frac{mp}{nq} \ \ \ (q \neq 0)$$
Come sono ordinati gli elementi di Q?
In Q è presente un ordinamento totale

Presi $m, q \in Z$ e $n, p \in N - \{0\}$
$$ \frac{m}{n} \leq \frac{q}{p} \leftrightarrow mp\leq nq$$

# 1.2
#### Cosa si intende per allineamento decimale? 

Espressione di tipo:
$$\pm p,\alpha_{1}\alpha_{2}\alpha_{3}\dots\alpha_{k}$$
$$0 \leq \alpha_{k}\leq_{9}, \forall k=1,2,3,\dots$$

$\alpha_{1},\alpha_{2},\dots$ si chiamano cifre decimali.

#### Di che tipo può essere? 

Finito se $\exists k_{0} \in N : a_{k} = 0, \forall k\geq k_{0}$
Infinito altrimenti:
- periodico: se un blocco di cifre decimali, detto periodo, si ripete indefinitamente.:
	- si dice proprio se il periodo non è "9".



#### Qual è il collegamento tra Q e gli allineamenti decimali? 
Da una frazione $\frac{m}{n}$ con $m,n \in Z, n \neq 0$ ovvero il rapporto tra due numeri interi relativi si ottiene sempre allineamenti decimali finiti oppure periodici propri. 

Un allineamento decimale finito o periodico individua un'unica frazione $\frac{m}{n}$ con $m, n \in Z, n \neq 0$ e m,n coprimi (MCD(m, n) = 1).
#### E quale tra Q e i punti di una retta?
Se rappresentiamo i numeri razionali su una retta orientata fissato lo 0 e 1 osserviamo che alcuni punti di questa non sono occupati (sono presenti dei "buchi"). Per esempio infatti, è impossibile associare al punto della retta che dista da 0 la lunghezza della diagonale di lato 1 
($\sqrt{ 2 }$) un numero razionale. 

# 1.3
#### Dare la definizione di R. 

R è l'insieme degli allineamenti decimali propri finiti, infiniti periodico proprio e infiniti non periodici.
E' detto l'insieme dei numeri reali. 


#### Qual è il legame tra R e i punti di una retta?
R, a differenza di Q, contiene tutti gli allineamenti decimali propri possibili e dunque è possibili individuare una relazione biunivoca tra i punti di una retta e l'insieme dei numeri Reali.
Questa proprietà è detta completezza di R.


# 1.4
#### Enunciare e dimostrare il teorema sulla parità dei quadrati.

Sia $n \in Z$ 
se $n \ è \ pari$ => $n^2 \ è \ pari$
se $n \ è \ dispari$ => $n^2 \ è \ dispari$ 

Dimostrazione:
se n è pari allora $\exists h \in Z$ : n = 2h
$$ n^2 = (2h)^2 = 2^2h^2 = 4h^2 = 2(2h^2) $$
indicando k = $2h^2 \in Z$ , si trova che $n^2 = 2k$ è multiplo di 2


se n è dispari allora $\exists h \in Z$ : n = 2h + 1
$$ n^2 = (2h+1)^2 = 4h^2+4h+1 = 2(2h^2+2h) + 1 $$
	indicando k = $2h^2 + 2h \in Z$ , si trova che $n^2 = 2k + 1$. Dunque $n^2$ è dispari


# 1.5
#### Dimostrare che il numero 2 è irrazionale

DImostrazione
Supponiamo per assurdo che $\sqrt{ 2 } = \frac{m}{n} \in Q$ con m e n coprimi (MCD = 1)

$$
\begin{align}
2 = \frac{m^2}{n^2} \\ \\
m^2 = 2n^2 \\

\end{align}
$$