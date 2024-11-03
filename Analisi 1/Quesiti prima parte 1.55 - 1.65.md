---
cards-deck: Analisi 1/1.55-1.65 (serie)
---

# 1.55


#### Dare le definizioni di somma parziale e di serie numerica.  #card
Sia $a_{n}$ una successione chiamiamo somma parziale oppure serie di $a_{n}$  la successione $s_{n}$ definita come:
$$
\begin{gather}
s_{1} = a_{1} \\
s_{2} = a_{1} + a_{2} = s_{1} + a_{2} \\
s_{3} = s_{1} + a_{2} + a_{3} = s_{2} + a_{3} \\
\end{gather}
$$
Quindi $s_{n} = a_{1} + a_{2} + \dots + a_{n} = \sum_{k=1}^n a_{n} = s_{n-1} + a_{n}$
#### Cosa si intende per carattere di una serie?
Il carattere di una serie indica la sua proprietà di essere divergente, convergente o indeterminata. (è il limite della successione per $n\to \infty$)
#### Serie note
- mengoli:
	$a_{k} = \frac{1}{k(k+1)} = \frac{1}{k} -\frac{1}{k+1}$ 
	$\sum a_{k}=1-\frac{1}{n-1} \to 1$
- telescopica
	$a_{k} = A_{k+1} - A_{k}$
	$\sum a_{k}=A_{2} - A_{1} + A_{3}-A_{2} +\dots =A_{n+1}-A_{1}$
^1730661746517



# 1.56


#### Enunciare e dimostrare la condizione necessaria per la convergenza di una serie. E’ anche sufficiente? #card
Se la serie $\sum_{k=1}^\infty a_{k}$ è convergente. Allora $a_{k} \to 0$.  Ovvero, condizione necessaria affinché la serie converga è che il termine generale sia infinitesima.
Dim.
Se la serie è convergente allora $$s:=\lim_{ n \to \infty } s_{n}$$ed essendo $s_{n} = s_{n-1}+a_{n} \implies a_{n}=s_{n}-s_{n-1}$
$$
\lim_{ n \to \infty } a_{n} = \lim_{ n \to \infty } (s_{n}-s_{n-1})=s-s=0
$$
#### OSS
Per contrapposizione: se $a_{k} \not \to 0$ allora la serie non converge
#### OSS
Il solo fatto che $a_{k} \to {0}$ non è sufficiente per dire che la serie converge.
^1730661746531


# 1.57


#### Qual è il carattere delle serie a termini non negativi? Perché? #card
Una serie $$\sum_{k=1}^\infty a_{k}$$
con $a_{k} \geq 0 \qquad \forall k \in N$ è o convergente o divergente positivamente
Dim.
$$s_{n+1}=s_{n}+a_{n+1}\geq {0}$$
Quindi $s_{n}$ è crescente. Per il teorema di regolarità delle successioni monotone, esiste $\lim_{ n \to \infty }s_{n} := s \in[0, +\infty]$. Se $s \in (0, +\infty)$ allora converge se no $s = +\infty$  diverge positivamente.
^1730661746534


# 1.58


#### Introdurre la serie geometrica. Discuterne la convergenza e scriverne la somma (dandone la dimostrazione). #card
Sia $x \in R$ si chiama serie geometrica la seguente
$$
\sum_{k=0}^\infty x^k
$$
per x $\neq 1$ si ha che
$$\sum_{k=0}^\infty x^k=\frac{1-x^{n+1}}{1-x}$$
si dimostra per induzione.
Essendo $$x^{n+1} \to 0 \quad per \ x \in(-1, 1)$$
$$\lim_{ n \to \infty } s_{n}=\frac{1}{x-1}$$
la serie converge per -1 < x < 1
Se $x\leq-1$ allora il limite non esiste.
Se $x\geq{1}$ allora la serie diverge positivamente
^1730661746537


# 1.59

#### Introdurre la serie armonica e la serie armonica generalizzata, mettendo in luce, per quest’ultima, quando converge o diverge. #card
La serie armonica:
$$\sum_{k=1}^\infty \frac{1}{k}$$
diverge positivamente
La serie armonica generalizzata
$$\sum_{k=1}^\infty \frac{1}{k^\alpha}$$
converge se $\alpha>1$
diverge positivamente se $\alpha\leq {1}$
^1730661746539

# Criteri di convergenza


# 1.60


#### Enunciare e dimostrare il criterio del confronto (per le serie). #card
Siano $0\leq a_{n}\leq b_{n} \quad \forall n \in N$ si ha:
$$\sum_{k=1}^\infty b_{k} \quad converge \ \implies \sum_{k=1}^\infty a_{k} \quad converge$$
$$\sum_{k=1}^\infty a_{k} \quad diverge \ \implies \sum_{k=1}^\infty b_{k} \quad diverge$$
Considerando le somme parziali:
$$s_{n} = \sum_{k=1}^na_{k}$$
$$t_{n} = \sum_{k=1}^nb_{k}$$
SI deduce che $s_{n} \leq t_{n} \forall n \in N$
Essendo $a_{n}$ e $b_{n}$ due successioni crescenti, per la regolarità delle successioni.
$$\exists s := \lim_{ n \to \infty }s_{n} $$$$\exists t := \lim_{ n \to \infty }t_{n} $$
Supponiamo che $t_{n}$ converga
$$\sum_{k=1}^\infty b_{k} = t \in R$$Per la proprietà di confronto delle successioni essendo $s_{n} \leq t_{n}$
$$s \leq t$$
$$\sum_{k=1}^\infty a_{k} =s \in R$$converge
Supponiamo invece che $s_{n}$ diverga positivamente
$$\sum_{k=1}^\infty a_{n} = +\infty$$Per la proprietà di confronto delle successioni essendo $s_{n} \leq t_{n}$
$$s \leq t$$
$$\sum_{k=1}^\infty b_{n} =+\infty$$ diverge positivamente.
### Oss.
$0 \leq a_{n} \leq b_{n} \quad \forall n \in N$ può essere sostituito con definitivamente
^1730661746542


# 1.61


#### Enunciare e dimostrare il criterio del confronto asintotico (per le serie).  #card
Siano $a_{n}\geq 0, b>0 \quad \forall n \in N$
Supponiamo che $$\exists \lim_{ n \to \infty } \frac{a_{n}}{b_{n}} =: l \in [0, +\infty]$$
i) Se $$\sum_{k=1}^\infty b_{n} \ converge \ e \ l\in[0, \infty) \implies \sum_{k=1}^\infty a_{n} \ converge$$
ii) Se $$\sum_{k=1}^\infty b_{n} \ diverge \ e \ l\in(0, \infty] \implies \sum_{k=1}^\infty a_{n} \ diverge$$
Dim i)
$$-\epsilon +l < \frac{a_{n}}{b_{n}} < \epsilon +l$$
$$(l-\epsilon)b_{n} < a_{n} < (\epsilon+l)b_{n}$$
per il criterio del confronto $$\sum_{k=1}^\infty a_{k} \ converge$$
Dim ii)
Sia $l \in(0, +\infty)$ e scelto come $\epsilon=\frac{l}{2}$.
$$a_{n} > \frac{l}{2}b_{n}$$
dunque per il criterio del confronto poiché  $\sum_{k=1}^\infty b_{n}$ diverge anche $\sum_{k=1}^\infty a_{n}$ diverge
Sia l = $\infty$
M > 0
$\frac{a_{n}}{b_{n}} > M \quad definitivamente$
Allora $a_{n} > M b_{n}$
analogamente a prima si ha che per il criterio del confronto $\sum_{k=1}^\infty a_{n}$ diverge.
^1730661746546


#### Dire il caso in cui si utilizza la serie armonica per il confronto asintotico. #card
Spesso si prende come $b_{n}$ la serie armonica generalizzata con $\alpha > 0$
Quindi il teorema diventa il seguente:
Sia $a_{n}\geq 0 \quad \forall n \in N$. Supponiamo che
$$\exists \lim_{ n \to \infty } n^\alpha \cdot a_{n}=l\in[0, \infty]$$
Se $\alpha > 1$ e $l \in[0, +\infty)$ allora $\sum_{k=1}^\infty a_{n}$ converge 
Se $0 < \alpha \leq 1$ e $l \in (0, +\infty]$ allora $\sum_{k=1}^\infty a_{n}$ diverge
^1730661746549



# 1.62


#### Enunciare e dimostrare il criterio del rapporto (per le serie). #card
Sia $a_{n} >0 \ \forall n \in N$
Supponiamo che $$\exists \lim_{ n \to \infty } \frac{a_{n+1}}{a_{n}} = l$$
Se $$l < 1 \qquad \sum_{n=0}^\infty  a_{n}\ converge$$
$$l> 1 \qquad \sum_{n=0}^\infty a_{n} \ divergente$$
Dim i)
Scelgo $l < x < 1, \epsilon =x-l>0$
$$
0 < \frac{a_{n+1}}{a_{n}} < l + \epsilon =x
$$
Non è restrittivo supporre che $\nu=1$
Dunque $a_{2}<xa_{1}, \ a_{3} < x a_{2} < x^2a_{1}, \dots$
$$a_{n} < a_{1}x^{n-1} = b_{n}$$
$$\sum b_{n}=\sum a_{1}x^{n-1} =a_{1}\sum x^{n-1}=a_{1}\sum x^k$$
l'ultima è un serie geometria ed essendo 0 < x < 1 converge
Per il criterio del confronto essendo $0 < a_{n} < b_{n}$ $\sum a_{n}$ converge
Dim ii)
Sia $\epsilon=l-1$
$$-\epsilon +l=-l+1 +l = 1 < \frac{a_{n+1}}{a_{n}}$$
$a_{n+1}>a_{n}$ definitivamente crescente
Allora $a_{n}$ non è infinitesima e quindi $\sum a_{n}$ non può convergere (condizione necessaria per la convergenza)
E poiché $\sum a_{n}$ ha termini non negativi può solo divergere positivamente.
^1730661746552


# 1.63


#### Enunciare il criterio della radice (per le serie). #card
Sia $a_{n} \geq {0} \ \forall n \in N$
supponiamo che
$$\exists \lim_{ n \to \infty } \sqrt[n]{ a_{n} }=l$$
se 
$$l < 1 \qquad \sum a_{n} \ converge$$
$$l > 1 \qquad \sum a_{n} \ diverge$$
Dim i)
l < 0
Sia $0 < \epsilon < 1 - l$
$$0 < \sqrt[n]{a_{n}  } < \epsilon - l$$
$$a_{n} < (\epsilon - l)^n =: b_{n}$$
$b_{n}$ è una serie geometrica con ragione $- 1 < (\epsilon - l) < 1$ quindi $\sum b_{n}$ converge
Per il criterio del confronto anche $\sum a_{n}$ converge
Dim ii)
l > 0
Sia $0 < \epsilon < l - 1$
$$\sqrt[n]{ a_{n} } > l - \epsilon$$
$$a_{n} > (l-\epsilon)^n > 1$$definitivamente
quindi $a_{n}$ non è infinitesima.
Dunque $\sum a_{n}$ non può convergere. Inoltre essendo $\sum a_{n}$ a termini positivi può solo divergere positivamente.
^1730661746555


# 1.64


#### Cosa si intende per serie alternate? #card
Sia $a_{n} > 0 \quad \forall n \in N$.
La serie $$\sum_{k=0}^\infty(-1)^ka_{k}$$
è detta alternata o di segno alterno. Infatti il termine generale è positivo per valori di n pari e negativo per valori dispari.
^1730661746557

#### Enunciare il criterio di Leibnitz. #card
Sia $a_{n} > 0$  un successione infinitesima
Allora $$\sum_{k=0}^\infty (-1)^ka_{k}$$
converge. Inoltre $|s_{n+1}+s| \leq a_{n+1}$
^1730661746560


# 1.65


#### Cosa si intende per convergenza assoluta di una serie? #card
Sia $a_{n}$ una successione. La serie $$\sum a_{n}$$ si dice che converge assolutamente se converge  $$\sum|a_{n}|$$
^1730661746563

#### Qual è la relazione tra convergenza semplice e assoluta di una serie? #card
Se una serie converge assolutamente allora converge anche semplicemente
Dim.
$$\sum |a_{n}|$$ converge.
Inoltre $$0\leq a_{k} +|a_k| < 2|a_{k}|$$
Quindi per il criterio del confronto essendo $2\sum|a_{k}|$ convergente anche $\sum a_{k}+|a_{k}|$ converge.
Osserviamo anche che $$\sum a_{k}=\sum (a_{k}+|a_{k}|)-\sum |a_{k}|$$
I termini di destra convergono entrambi quindi $\sum a_{k}$ converge semplicemente.
^1730661746566
