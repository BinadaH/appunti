---
cards-deck: Analisi 1/1.1-1.17
---



# 1.1

#### Definire gli insiemi numerici N, Z, Q. #card 
$$ N = \{0, 1, 2, 3, \dots\} $$
$$ Z = \{0, -1, 1, -2, 2, -3, 3, \dots\}$$
$$ Q = \{\frac{m}{n} : m, n \in Z, n \neq 0\}$$
^1730275473152

#### Illustrare come si eseguono le operazioni di somma e prodotto in Q. #card 
$$ \frac{m}{n} + \frac{q}{p} = \frac{mp+qn}{np}$$
$$ \frac{m}{n} \cdot \frac{q}{p} = \frac{mq}{np}$$
$$ \frac{m}{ n} : \frac{q}{p} = \frac{m}{n} \cdot \frac{p}{q} = \frac{mp}{nq} \ \ \ (q \neq 0)$$
^1730275473195

#### Come sono ordinati gli elementi di Q? #card 
In Q è presente un ordinamento totale
Presi $m, q \in Z$ e $n, p \in N - \{0\}$ si definisce un'ordinamento totale ponendo
$$ \frac{m}{n} \leq \frac{q}{p} \leftrightarrow mp\leq nq$$
^1730275473201

# 1.2

#### Cosa si intende per allineamento decimale? #card 
Espressione di tipo:
$$\pm p,\alpha_{1}\alpha_{2}\alpha_{3}\dots\alpha_{k}$$
$$0 \leq \alpha_{k}\leq_{9}, \forall k=1,2,3,\dots$$
$\alpha_{1},\alpha_{2},\dots$ si chiamano cifre decimali.
^1730275473207

#### Di che tipo può essere?  #card 
Finito se $\exists k_{0} \in N : a_{k} = 0, \forall k\geq k_{0}$
Infinito altrimenti:
- periodico: se un blocco di cifre decimali, detto periodo, si ripete indefinitamente.:
	- si dice proprio se il periodo non è "9".
^1730275473213



#### Qual è il collegamento tra Q e gli allineamenti decimali? #card
Da una frazione $\frac{m}{n}$ con $m,n \in Z, n \neq 0$ ovvero il rapporto tra due numeri interi relativi si ottiene sempre allineamenti decimali finiti oppure periodici propri. 
Un allineamento decimale finito o periodico individua un'unica frazione $\frac{m}{n}$ con $m, n \in Z, n \neq 0$ e m,n coprimi (MCD(m, n) = 1).
^1730275473222

#### E quale tra Q e i punti di una retta? #card
Se rappresentiamo i numeri razionali su una retta orientata fissato lo 0 e 1 osserviamo che alcuni punti di questa non sono occupati (sono presenti dei "buchi"). Per esempio infatti, è impossibile associare al punto della retta che dista da 0 la lunghezza della diagonale di lato 1 
($\sqrt{ 2 }$) un numero razionale. 
^1730275473228

# 1.3

#### Dare la definizione di R. #card
R è l'insieme degli allineamenti decimali propri finiti, infiniti periodico proprio e infiniti non periodici. E' detto l'insieme dei numeri reali. 
^1730275473234

#### Qual è il legame tra R e i punti di una retta? #card
R, a differenza di Q, contiene tutti gli allineamenti decimali propri possibili e dunque è possibili individuare una relazione biunivoca tra i punti di una retta e l'insieme dei numeri Reali.
Questa proprietà è detta completezza di R.
^1730275473239


# 1.4

#### Enunciare e dimostrare il teorema sulla parità dei quadrati. #card
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
^1730275473245


# 1.5

#### Dimostrare che il numero 2 è irrazionale #card
Supponiamo per assurdo che $\sqrt{ 2 } = \frac{m}{n} \in Q$ con m e n coprimi (MCD = 1)
$$
\begin{align}
2 = \frac{m^2}{n^2} \\ \\
m^2 = 2n^2 \\
\end{align}
$$
dunque per la parità dei quadrati m è pari $\exists k \in Z : m = 2k$.
$$ 2n^2 = m^2 = (2k)^2 \implies n^2 = 2k^2$$
dunque anche n è pari.
Ma questo significa che m e n hanno come divisore comune 2 e che dunque non sono coprimi.
$\sqrt{ 2 }$ è irrazionale
^1730275473252


# 1.6

#### Illustrare il principio di induzione. #card
Data una proposizione aperta P(n) dipendente da $n \in N$, per il principio di induzione, 
P(n) è vera $\forall n \geq n_{0} \in N$ se 
	1) $P(n_{0})$ è vera (base induttiva)
	2) supponendo P(n) vera segue che è vera anche P(n+1)  (passo induttivo)         
		(P(n) vera => P(n+1) vera)
^1730275473257


# 1.7

#### Somma dei primi n numeri naturali #card

$$\sum_{k=1}^n k=\frac{n(n+1)}{2}$$
^1730275473263

# 1.8

#### Disuguaglianza di Bernoulli #card

$$ (1+x)^n \geq 1+nx \quad \quad \forall n \in N $$
^1730275473269


# 1.9


#### Progressione geometrica #card
$$ \sum_{k=0}^n q^k = q^0+q^1+\dots+q^n$$
$$\sum_{k=0}^n q^k=\frac{1-q^{n+1}}{1-q}$$
^1730275473275

# 1.10 - 1.12


#### Sia E ⊆ R. Dare le definizioni di massimo, minimo, maggiorante, minorante di E #card
#### Massimo
$$
\begin{cases}
M \geq 0  \ \forall x \in E \\ \\
M \in E
\end{cases}
$$
#### Minimo
$$
\begin{cases}
m \leq 0  \ \forall x \in E \\ \\
m \in E
\end{cases}
$$
#### Maggiorante
$$ \Lambda \in R, \  x \leq \Lambda \ \forall x \in E$$
#### Minorante
$$ \lambda \in R, \  x \geq \lambda \ \forall x \in E$$
^1730275473282

#### Definire Estremo superiore #card
Estremo superiore è il minimo dei maggioranti
1) $sup \ E$ è maggiorante di E
2) numero minore di sup E non è maggiorante di E
$$ sup \ E \geq x \quad \forall x \in E $$
$$ \forall A < sup \ E,  \ \exists x \in E : x > A $$
<=> 
$$
\forall \epsilon >0, \ \exists x_{e} \in E : x_{e} > sup \ E - \epsilon
$$
^1730275473288

#### Estremo inferiore #card
Estremo inferiore è il massimo dei minoranti
1) inf E è minorante di E
2) numero maggiore di inf E non è minorante di E
$$ inf \ E \leq x \quad \forall x \in E $$
$$ \forall \epsilon > 0, \ \exists x_{\epsilon} \in E : x_{e} < inf \ E + \epsilon $$
^1730275473294


# 1.11

#### Dare la definizione di sottoinsieme di R limitato superiormente o inferiormente illimitato superiormente o inferiormente. Fornirne esempi. #card
Un sottoinsieme di R è detto limitato superiormente se ammette almeno un maggiorante.
$$\exists \Lambda \in R \ : \ \Lambda \geq x \quad \forall  x \in E$$
Un sottoinsieme di R è detto limitato inferiormente se ammette almeno un minorante.
$$ \exists\lambda \in R \ : \ \lambda \leq x \quad \forall x \in E $$
Viene detto limitato se è sia limitato superiormente che inferiormente.
$$ \exists\Lambda,\lambda \in R \ : \ \lambda \leq x \leq \Lambda \quad \forall x \in E $$
==> E è limitato sse:
$$ \exists M \in R^+ : \ -M \leq x\leq M \quad \forall x \in E$$
^1730275473300


# 1.13

#### Enunciare la proprietà di completezza (o di continuità) di R #card
Un insieme non vuoto $E \subseteq R$ limitato superiormente (inferiormente) avrà sempre estremo superiore (inferiore) in R. Se E è limitato allora ammette entrambi $sup \ E, inf \ E \in R$ 
Se E non è limitato superiormente (inferiormente) allora $sup \ E = +\infty \quad (inf \ E = -\infty)$
In Q questa proprietà non è vera. Infatti
$$
A := \{x \in Q : x^2<2\} \subseteq R
$$
A è limitato superiormente (sup A = $\sqrt{ 2 }$) ma non ammette sup A in Q in quanto $\sqrt{ 2 } \not \in Q$.
^1730275473306



# 1.14

#### Descrivere come in R si definiscono le radici, le potenze ad esponente razionale e reale, i logaritmi. Quale proprietà di R è fondamentale per poterli definire? #card
Siano $y \in R, y>0, n \in N, n\geq 1$, allora esiste un unico numero
$x > 0 : x^2=y$
x è detto radice n-esima di y
Per questo teorema $\sqrt{ 16 } = 4$
ed è unico e non $\sqrt{ 16 } = \pm4$ che è scorretto 
#### potenze a esponente razionale
Sia r = $\frac{m}{n}$ con $m \in Z \ e \ n\in N - \{0\}$ dato a > 0
$$ a^r = a^{m/n} = \sqrt[n]{ a^m } $$
$$ a^{-r} =\frac{1}{a^r} $$
se n è dispari allora
$$ (-a)^{m/n} = -\sqrt[n]{a^m}$$
#### potenze a esponente reale
Sia $a \in R^+$ e $b \in R$
$$E:=\{a^q : q \in Q, q <b\} \quad a > 1$$
$$F := \{a^q : q \in Q, q > b\} \quad 0 < a < 1$$
Grazie al teorema sulla completezza di R. Esiste sup E e inf di F essendo E limitato superiormente e F limitato inferiormente.
#### logaritmi
Sia a > 0, $a \neq 0$, y > 0. Allora esiste ed è unico $x \in R$ :
$$a^x = y$$
a è detto logaritmo in base a di y
^1730275473312

# 1.15

#### Introdurre le grandezze goniometriche e descriverne le principali proprietà. #card
$$radianti = \frac{l}{r}$$ l è la lunghezza dell'arco della circonferenza con centro il vertice di $\alpha$ individuato dall'angolo $\alpha$ e r è il raggio della circonferenza.
Circonferenza goniometrica:
$$C = \{(x,y) \in R^2 : x^2+y^2=1\}$$
ha raggio 1 e centro nell'origine
$$ \cos x=x_{p} \quad \sin x=y_{p}$$
dove $x_{p} \ e\  y_{p}$ sono punti appartenenti a C
!!!
^1730275473317

# 1.16

#### Dare la definizione di valore assoluto di un numero reale e spiegarne le principali #card
Il valore assoluto di un numero reale x è
$$ |x|:=\begin{cases}
x, \quad x \geq 0 \\ -x, \quad x< 0
\end{cases}$$
proprietà
$$
\begin{align}
|x| \geq0 \quad \forall x \in R \\ |x| =0 \implies x =0 \\
 \\
\sqrt{ x^2 } = |x| \\
|x| = |-x| \\
|x| = max\{x, -x\} \\
a \leq |x| \quad \quad -a \leq |x|
\end{align}
$$
^1730275473323

# 1.17

#### La disuguaglianza triangolare
$$|a+b| \leq|a|+|b| $$
