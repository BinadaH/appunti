---
cards-deck: Analisi 1/1.32-1.54 (lim succ)
---



# 1.32

#### Dare la definizione di successione numerica. Fornirne esempi. #card
Una successione numerica è una funzione:
$a: N\to R$ 
Di solito si indica con $\{a_{n}\}$ (che indica anche tutti gli elementi della successione)
^1730661070517


# 1.34


#### Dare le definizioni di successione limitata superiormente o inferiormente, di massimo e minimo di successioni. Fornirne esempi. #card
Una successione si dice limitata superiormente se lo è la sua immagine come sottoinsieme di R.
$\exists M \in R : M \geq a_{n} \quad \forall n \in N$
Una successione si dice limitata inferiormente se lo è la sua immagine come sottoinsieme di R.
$\exists m \in R : m \leq a_{n} \quad \forall n \in N$
Una successione si dice limitata se lo è sia superiormente che inferiormente.
$\exists M \in R^+ : a_{n} \leq |M| \quad \forall n \in N$
^1730661070555


#### Definire estremo superiore ed inferiore di successioni. #card
$sup \ a_{n}$ è il più piccolo dei maggioranti di Im $a_{n}$
$$sup \ a_{n} = \Lambda \leftrightarrow \begin{cases}
\Lambda \geq a_{n} \quad \forall n \in N \\
\forall \epsilon > 0, \exists n_{\epsilon} \in N : a_{n_{\epsilon}} > \Lambda - \epsilon
\end{cases}$$
$inf \ a_{n}$ è il più grande dei minoranti di Im $a_{n}$
$$inf \ a_{n} = \lambda \leftrightarrow \begin{cases}
\lambda \leq a_{n} \quad \forall n \in N \\
\forall \epsilon > 0, \exists n_{\epsilon} \in N : a_{n_{\epsilon}} < \lambda + \epsilon
\end{cases}$$
^1730661070558




# 1.33


#### Dare la definizione di successione crescente, decrescente, monotòna. Fornirne esempi. #card
$\{a_{n}\}$ si dice strettamente crescente se $a_{n} < a_{n+1}$
$\{a_{n}\}$ si dice strettamente decrescente se $a_{n} > a_{n+1}$
-
$\{a_{n}\}$ si dice crescente se $a_{n} \leq a_{n+1}$
$\{a_{n}\}$ si dice decrescente se $a_{n} \geq a_{n+1}$
-
strettamente monotona se strett. crescente o decresente
monotona se crescente o decrescente
^1730661070561



# 1.35


#### Cosa si intende per proprietà vera definitivamente? #card 
Una proprietà P(n) dipendente da $n \in N$ vale definitivamente se $$\exists n_{0} \in N:P(n) \ è \ vera \ per \ n \geq n_{0}$$
Quindi P(n) è vera per tutti gli n eccetto un numero finito
^1730661070564



# 1.36


#### Scrivere le definizioni di limite (finito e infinito) di una successione. Spiegarne il significato, servendosi anche di disegni. #card

$$\lim_{ n \to \infty } a_{n} = l$$
$$\forall\epsilon>0 \quad \exists \nu_{\epsilon} \in N : |a_{n} - l| < \epsilon \quad \forall n\geq \nu_{\epsilon}$$
La definizione di limite si può interpretare nel seguente modo:
per tutti i valori di n eccetto un numero finito $a_{n}$ approssima $l$ con un errore di $\epsilon > 0$.
^1730661070568




# 1.37

#### Dare le definizioni di successione convergente, divergente, regolare, irregolare. #card 
Una successione si dice convergente se $\exists l\in R \ t.c$ la successione converge a l
Una successione si dice divergente positivamente se $$\lim_{ n \to \infty } a_{n} = +\infty$$quindi $\forall M>0, a_{n} > M$ definitivamente
Una successione si dice divergente negativamente se 
$$\lim_{ n \to \infty } a_{n} = -\infty$$
quindi $\forall M>0, a_{n} < -M$
##### Regolare, irregolare
Una successione si dice regolare se il limite esiste finito o infinito. Si dice irregolare se il limite non esiste.
^1730661070570



# 1.38


#### Enunciare e dimostrare il teorema di unicità del limite. #card
Se $a_{n}$ ammette limite allora il limite è unico
Dimostrazione
supponiamo per assurdo che $a_{n} \to l_{1}  \ e \ a_{n} \to l_{2}$. con $l_{1} \neq l_{2}$
Per la definizione di limite:
$$\exists \nu_{e,1} \in N :|a_{n} - l| <\epsilon \quad \forall n > \nu_{e,1} $$
$$\exists \nu_{e,2} \in N : |a_{n} -l| < \epsilon \quad \forall n>\nu_{e,1}$$
scelgo $\nu_{e} = max\{\nu_{e,1}, \nu_{e,2}\}$ e $\epsilon = \frac{|l_{1}-l_{2}|}{4}$
quindi
$$|a_{n} -l_{1}| < \epsilon$$
$$|a_{n} -l_{2}| < \epsilon$$
$\forall n>\nu_{e}$
Usando la disuguaglianza triangolare
$$|l_{1}-l_{2}| = |l_{1}-a_{n}+a_{n}-l_{2}| \leq |a_{n}-l_{1}|+|a_{n}-l_{2}| <2\epsilon$$
=>
$$\frac{|l_{1}-l_{2}|}{2} < \epsilon$$
il che è impossibile in quanto $\epsilon$ è uguale a $\frac{|l_{1}-l_{2}|}{4}$
Pertanto $l_{1} = l_{2}$
^1730661070573



# 1.39


#### Dimostrare che una successione convergente è limitata. #card
Se una successione $a_{n}$ è limitata allora converge a un valore $l \in R$ 
dunque per la definizione di limite:
$$\forall\epsilon>0 \quad |a_{n}-l| < \epsilon \quad definitivamente$$
per la disuguaglianza triangolare
$|a_{n}|  = |a_{n}-l+l| \leq |a_{n}-l| + |l| < \epsilon + |l|$
scelgo come $\epsilon = 1$
e quindi $\exists \nu_{e} \in N\quad t.c\quad |a_{n}| < 1+|l| \quad n\geq \nu_{e}$
pongo $M =max\{a_{0}, a_{1}, a_{2}, \dots, 1+|l|\}$
Dunque $|a_{n}| < M \quad \forall n\in N$ ovvero $a_{n}$ è limitata
^1730661070576



# 1.41


#### Descrivere l’algebra di limiti con l’infinito. #card
$$+\infty+\infty=+\infty$$
$$-\infty-\infty=-\infty$$
^1730661070578




#### Cosa si intende per forme indeterminate (o di indecisione)? #card
Quando ci si pone di fronte a una forma indeterminata non è possibile determinare a priori il valore del limite.
$$+\infty-\infty \quad \infty \cdot 0  \quad \frac{0}{0} \quad \frac{\infty}{\infty}$$
$$0^0 \quad 1^\infty \quad \infty^0$$
^1730661070582



# 1.42


#### Enunciare e dimostrare il teorema sulla permanenza del segno (per successioni) #card
$Se \ a_{n} \to a>0$ allora, esiste $\nu \in N$ t.c $a_{n} > 0$ definitivamente 
Dimostrazione
$$|a_{n} - a| < \epsilon$$ definitivamente
$$scelgo \ \epsilon =\frac{a}{2}$$
$$-\frac{a}{2} < a_{n}-a < \frac{a}{2}$$
$$0 < \frac{a}{2} < a_{n} < \frac{3}{2}a$$
$a_{n} > 0$ definitivamente
$Se \ a_{n} \to a<0$ allora, esiste $\nu \in N$ t.c $a_{n} < 0$ definitivamente 
Dimostrazione
$$|a_{n} - a| < \epsilon$$ definitivamente
$$scelgo \ \epsilon =-\frac{a}{2}$$
$$\frac{3}{2}a < a_{n} < \frac{a}{2} < 0$$
quindi $a_{n} < 0$ definitivamente
#### Corollario 
Se $a_{n}\geq 0 \quad \forall n\in N$ e $a_{n}\to a$ allora
$a \geq 0$
Se fosse a < 0 allora contraddirebbe il teorema precedente.
#### oss.
$a_{n} > 0 \quad \forall n \in N \not \implies a > 0$
es. $a_{n} = \frac{1}{n}$
$a_{n} >0 \quad \forall n \in N$ ma $a_{n} \to 0$
#### Corollario proprietà di confronto
Se $a_{n} \to a$ e $b_{n} \to b$ e  $a_{n} \geq b_{n} \quad \forall n\in N$
allora $a \geq b$
^1730661070585



# 1.43


#### Enunciare e dimostrare il teorema del confronto (o dei due carabinieri). #card
Sia $a_{n}, b_{n}, c_{n}$ tre successioni tali che
$a_{n} \leq c_{n} \leq b_{n} \forall n \in N$
se $$
\lim_{ n \to \infty } a_{n} = \lim_{ n \to \infty } b_{n} = l 
$$
allora $c_{n}$ è convergente e $c_{n} \to l$
Dimostrazione
$$\begin{gather}
\exists \nu_{1e} \in N \quad t.c \quad |a_{n} -l| <\epsilon \\
\exists \nu_{2e} \in N \quad t.c \quad |b_{n} -l| <\epsilon \\
\nu=max\{\nu_{1e},\nu_{2e}\}\\
|a_{n} -l| < \epsilon \quad \forall n\geq \nu \\
|b_{n} -l| < \epsilon \quad \forall n\geq \nu \\
-\epsilon +l < a_{n} <\epsilon +l \\
-\epsilon +l < b_{n} <\epsilon +l
\\
-\epsilon+l < a_{n} \leq c_{n} \leq b_{n} <\epsilon+1 \\
|c_{n} -l| <\epsilon
\implies \lim_{ n \to \infty } c_{n}=l
\end{gather}
$$
^1730661070589



# 1.44


#### Che proprietà hanno le successioni infinitesime e il loro modulo?  Perché? #card
$$se \ a_{n} \to 0 \ \iff \ |a_{n}| \to 0$$
^1730661070593



# 1.45


#### Dimostrare che una successione infinitesima per una limitata è infinitesima. #card
Sia $a_{n}$ limitata e $b_{n}$ infinitesima  
$$b_{n}\cdot a_{n}\to 0$$
Dimostrazione
$$\begin{gather}
b_{n} \to 0\\
|b_{n}| \to 0
\\
|a_{n}| \leq M
\\
0\leq|a_{n}b_{n}|=|a_{n}||b_{n}|\leq M|b_{n}|
\end{gather}$$
per il teorema del due carabinieri $|a_{n}b_{n}| \to 0$
e dunque anche $a_{n}b_{n} \to 0$
^1730661070596



# 1.46


#### Enunciare e dimostrare il teorema sulla regolarità delle successioni monotòne. #card
Ogni successione monotona $a_{n}$ è regolare.
Inoltre
Se $a_{n}$ è crescente allora:
$$\lim_{ n \to \infty } a_{n} = sup \ a_{n}$$
	se illimitata allora $+\infty$
Se $a_{n}$ è decrescente allora:
$$
\lim_{ n \to \infty } a_{n}=inf \ a_{n}
$$
	se illimitata inferiormente allora $-\infty$
DIM
Supponiamo $a_{n}$ crescente e $\Lambda = sup \ a_{n}$
Per le proprietà del sup: $\forall \epsilon > 0, \exists \nu \in N$
 $$a_{a_{\nu}} > \Lambda - \epsilon$$
inoltre $a_{n} \geq a_{\nu}$
Quindi
$$
\Lambda - \epsilon < a_{\nu} \leq a_{n} \leq \Lambda <\Lambda+\epsilon
$$
=>$$\Lambda-\epsilon<a_{n}<\Lambda+\epsilon$$
$a_{n} \to \Lambda$
Se $a_{n}$ è illimitata superiormente allora
$\forall M >0 \quad \exists \nu \in N : a_{\nu} > M$ definitivamente
$a_{n} \geq a_{\nu} > M \qquad \ per \ n>\nu$
Quindi $a_{n} \to \infty$
^1730661070600



# 1.47


#### Dare la definizione di numero di Nepèro. Perché è ben posta? #card
$$
\lim_{ n \to \infty } \left( 1+\frac{1}{n} \right)^n=e
$$
E' ben posta perché $a_{n}$ è crescente e limitata e dunque esiste il limite finito per il teorema della regolarità delle successioni monotone.
#### crescente
$a_{n}$ è crescente se e solo se $a_{n} \geq a_{n-1} \quad \forall n\in N$
ovvero
$$\left( \frac{n+1}{n} \right)^n \geq \left( \frac{n-1+1}{n-1} \right)^{n-1}=
\left( \frac{n}{n-1} \right)^n\cdot\left( \frac{n-1}{n} \right)
$$
divendendo per $\left( \frac{n}{n-1} \right)^n$
si ha che $$
\left[ \frac{(n+1)(n-1)}{n^2} \right]^n\geq \frac{n-1}{n}
$$
$$\left( \frac{n^2-1}{n^2} \right)^n \geq \frac{n-1}{n}$$
$$\left( 1-\frac{1}{n^2} \right)^n \geq 1-\frac{1}{n}$$
scegliendo $x=-\frac{1}{n^2}$
per la disuguaglianza di bernulli $(1+x)^n \geq 1+nx$
questa è vera  $\forall n \in N$
#### limitata
Dim
$$b_{n} = \left( 1+\frac{1}{n} \right)^{n+1}$$
$b_{n}$ è strettamente decrescente ovvero
$b_{n-1}>b_{n}$
$$\left( 1+\frac{1}{n-1} \right)^n> \left( \frac{n+1}{n} \right)^n\cdot\left( \frac{n+1}{n} \right)$$
$$\left( \frac{n^2}{n^2-1} \right)>\left( \frac{n+1}{n} \right)$$
$$\left( 1+\frac{1}{n^2-1} \right)^n>1+\frac{1}{n}$$
per la disuguaglianza di bernulli con x = $\frac{1}{n^2-1}$
$$\left( 1+ \frac{1}{n^2-1} \right)^n \geq 1 + \frac{n}{n^2 -{1}} > 1+\frac{1}{n}$$
che è vera per ogni n.
Essendo quindi $b_{n}$ strettamente decrescente
Quindi. $0 < a_{n} < b_{n} < b_{1}$
Perciò $a_{n}$ è limitata.
Dunque per la regolarità delle successioni monotone esiste il limite finito di $a_{n}$
^1730661070603



# 1.49


#### Enunciare e dimostrare il criterio del rapporto per successioni. #card
Siano $a_{n} > 0 \quad \forall n \in N \ e\  b_{n} = \frac{a_{n+1}}{a_{n}}$  
Se
$$
\lim_{ n \to \infty } b_{n} =l > 1
$$
allora
$$
a_{n} \to +\infty
$$
Per il teorema della permanenza del segno esiste $\nu \in N$ t.c
$$b_{n}> 1 \quad \forall n >\nu$$
Dunque
$$
a_{n+1} > a_{n} \quad 
$$
è crescente decrescente. Quindi per la regolarità delle successioni monotone $\exists a:=\lim_{ n \to \infty }a_{n}$
Se il limite esistesse finito e $a \in R$ allora $\frac{a_{n+1}}{a_{n}} \to 1$ che è assurdo. Dunque a = $+\infty$
^1730661070605



# 1.51


#### Dare le definizioni riguardanti i confronti asintotici per successioni infinite e infinitesime. #card
Siano $a_{n}$ e $b_{n}$ due successioni infinite con $b_{n} \neq 0$ definitivamente.
Sia $$\lim_{ n \to \infty } \frac{a_{n}}{b_{n}} = l$$
Se $l = 0$ allora $a_{n}$ è una infinito di ordine ==inferiore== a $b_{n}$
^1730661070608
Se $l = \pm\infty$ allora $a_{n}$ è una infinito di ordine ==superiore== a $b_{n}$
	^1730661070611
Se $l \neq 0$ allora $a_{n}$ è una infinito di dello stesso ordine a $b_{n}$
Sono non paragonabili se il limite del rapporto non esiste
Se $a_{n} \ e \ b_{n}$ sono infinitesimi
Se $l = 0$ allora $a_{n}$ è un infinitesimo di ordine ==superiore== a $b_{n}$
^1730661070614
Se $l = \pm\infty$ allora $a_{n}$ è una infinitesimo di ordine ==inferiore== a $b_{n}$
^1730661070617
Se $l \neq 0$ allora $a_{n}$ è una infinito di dello stesso ordine a $b_{n}$
Sono non paragonabili se il limite del rapporto non esiste
#### Con $\alpha > 1, b>0, \beta >0$
$$
n^n \succ n! \succ \alpha^n \succ n^b \succ (\log_{a} n)^\beta
$$
^1730661070621


# 1.52


#### Dare la definizione di successioni asintoticamente equivalenti. Scrivere e dimostrare le proprietà dell’equivalenza asintotica. #card
Siano $a_{n}$ e $b_{n}$ due successioni. Si dice che $a_{n}$ è asintoticamente equivalente a $b_{n}$
Se $$\lim_{ n \to \infty } \frac{a_{n}}{b_{n}} = 1$$
e si scrive $a_{n} \sim b_{n}$
^1730661070623



# 1.53 - 1.54


#### Introdurre il concetto di o-piccolo di Landau. Fare degli esempi. #card 
Siano $a_{n}$ e $b_{n}$ due successioni. Si dice che $a_{n}$ è un o-piccolo di $b_{n}$
Se 
$$\lim_{ n \to \infty } \frac{a_{n}}{b_{n}}=0$$
$a_{n}=o(b_{n})$
#### algebra degli o-piccoli
$$c\cdot o(a_{n})=o(a_{n})=o(ca_{n})$$
$$a_{n}o(b_{n})=o(a_{n}b_{n})$$
$$o\left( \frac{1}{n} \right)+o\left( \frac{1}{n^2} \right)=o\left( \frac{1}{n} \right)$$
$$o(n)+o(n^2) =o(n^2)$$
^1730661070626


