**01-10-2024, 02-10-2024**

### Definizione (definitivamente)

P(n) vale **definitivamente** se 
$$
\exists n_0 \in \mathbb{N} \quad | \quad P(n) \ \text{è vera} \ \forall n \in \mathbb{N}, n \ge n_0
$$
Cioè P(n) vale per tutti i naturali n eccetto un numero finito 
(0, 1, ..., $n_0$ - 1)

---

### Definizione (limite)
Si dice che $l \in R$ è il limite della successione {${a_n}$} o che $a_n$ tende a $l$ Si scrive:
		$$ \lim_{n \to \infty} a_n = l$$	
$$
\begin{aligned}
\forall \epsilon > 0 \quad \exists \nu_\epsilon \in \mathbb{N} \quad t.c.\\ 
	\quad |a-l| <\epsilon \quad \forall n > \nu_\epsilon 
\end{aligned}
$$
--- striscia



--es


---

### Teorema (unicità del limite)
Se una successione ammette limite, allora il **limite è ==unico==**

Dim (per assurdo)
		Supponiamo per assurdo che 
			
$$\lim_{n\to \infty} a_n = l_1 \quad e \quad \lim_{n\to \infty} a_n = l_1$$$$l_1 \neq l_2$$
per def di limite
			$$\forall \epsilon > 0 \quad \exists\nu_ {\epsilon, 1} \in N :|a_n-l_1|<
			\epsilon \quad \forall n > \nu_{\epsilon, 1}$$			$$\forall \epsilon > 0 \quad \exists\nu_ {\epsilon, 2} \in N :|a_n-l_2|<
			\epsilon \quad \forall n > \nu_{\epsilon, 2}$$
$$ Siano \ \nu_{\epsilon} = max\{\nu_{1,\epsilon},\ \nu_{2,\epsilon}\}, \epsilon =  \frac{|l_{1}-l_{2}|}{2}$$

$$ |a_{n} - l_{1}| < \epsilon \quad \forall n > \nu_{\epsilon}$$
$$ |a_{n} - l_{2}| < \epsilon \quad \forall n > \nu_{\epsilon}$$

$$\begin{gather}
|l_{1} - l_{2}| = |l_{1} - a_{n} + a_{n} + l_{2}| \leq |l_{1} - a_{n}| + |a_{n} - l_{2}| < \epsilon + \epsilon = 2\epsilon \newline \implies \frac{|l_{1}-l_{2}|}{2} < \epsilon
\end{gather}$$
ma per hp $\frac{|l_{1}-l_{2}|}{2} = \epsilon$, quindi $l_1 = l_{2}$


---

#### Definizione (Successione convergente e divergente)

$\{a_{n}\}$ si dice **==convergente==** se $\lim_{ n \to \infty } a_{n}$ per qualche $l \in R$ 

##### Teorema
==Sia $\{a_n\}$ convergente allora $\{a_{n}\}$ è limitata ==
$\{a_n\}$ è convergente <=> per qualche $l \in R$  $\\lim_{ n \to \infty } a_{n} = l$

per definizione di limite
$$
\begin{gather}
\forall \epsilon > 0 \quad \exists \nu_{\epsilon} in N : \newline |a_{n}-l| < \epsilon \quad \forall n> \nu_{\epsilon}
\end{gather}

$$
$\{a_{n}\}$ è limitata se $\exists m, M \in R \quad t.c \quad m\leq a_{n} \leq M$ cioè $\exists k \in R \quad t.c \quad |a_{n}| \leq k$

$$
\epsilon = 1 \quad \exists \nu \in N : |a_{n} - l| < 1 \quad \forall n > \nu
$$
$$
|a_{n}| = |a_{n} + l - l| \leq |a_{n}-l| + |l| < 1 + |l|, \forall n> \nu
$$
dunque
$$
|a_{n}| \leq k = max\{a_{0}, a_{1}, \dots, a_{\nu}, 1 + |l|\}
$$
##### Corollario

Se $a_n \to a, \ a_n\geq 0 \quad \forall n\in N$ allora $a\geq0$

Se fosse a < 0, per il teorema prec. si avrebbe $a_n < 0$ definitivamente

%% Se $a_{n}$ è sopra lo zero per ogni n (togliendo il modulo), allora  $0 \leq a_n \leq k$ (dove k è il massimo valore in modulo assunto dalla successione), dunque $l \in [0, k]$ %%

##### Corollario (prop. di confronto)
Se $\lim_{ n \to \infty }{a_{n}} = a,\ \lim_{ n \to \infty }{b_{n}}=b, \quad a_{n} \geq b_{n}\ \forall n\in N$
Allora $a\geq b$

Dim.
$$
\begin{gather}
c_{n} = a_{n} - b_{b} \geq 0 \quad \forall n \in N \newline
\lim_{ n \to \infty } c_{n} = a - b
\end{gather}
$$

grazie al corollario precedente, visto che $c_n \geq 0, \forall n \in N$ possiamo affermare che 
$$
\lim_{ n \to \infty } c_{n} \geq 0 \implies a \geq b
$$
---
## Teorema (dei due carabinieri)

siano $\{a_{n}\}, \{b_{n}\}, \{c_{n}\}$ t.c $a_{n} \leq c_{n}\leq b_{n} \quad \forall n \in N$

se $\lim_{ n \to \infty } a_{n} = \lim_{ n \to \infty } b_{n} = l$ allora anche $\{c_{n}\}$ è convergente e $\lim_{ n \to \infty }c_{n} = l$

Dim.
per def. di limite
$$
\begin{flalign*}
&\forall \epsilon > 0 \newline 
&\exists \nu_{\epsilon, 1} \in N : |a_{n} - l| < \epsilon \quad \forall n > \nu_{e,1}\newline
&\exists \nu_{\epsilon, 2} \in N :|b_{n} - l| < \epsilon \quad \forall n > \nu_{e,2}\newline

&Sia \ \nu_{\epsilon} = max\{\nu_{\epsilon,1}, \nu_{\epsilon, 2}\} \newline

&l - \epsilon < a_{n} < l+\epsilon \\
&l - \epsilon < b_{n} < l+\epsilon \\

&\implies \forall n > \nu_{e} \quad l -\epsilon < a_{n} \leq c_{n} \leq b_{n} < l + \epsilon
\\  &ovvero \quad

l -\epsilon \leq c_{n} \leq l+\epsilon \quad \forall n > \nu_{\epsilon}
\\
&\leftrightarrow \lim_{ n \to \infty } c_{n} = l

\end{flalign*}

$$

### Definizione (infinitesimo)

$\{a_{n}\}$ si dice infinitesimo se $\lim_{ n \to \infty }a_{n} = 0$

#### Lemma
$\lim_{ n \to \infty } a_{n} = 0$ <-> $\lim_{ n \to \infty }|a_{n}| =0$

Dim.
$b_{n} = |a_{n}|$

$$
\begin{gather}
\lim_{ n \to \infty } b_{n}  =0 \leftrightarrow \forall \epsilon >0 \quad \exists \nu_{\epsilon} \in N \quad t.c \quad |b_{n}| < \epsilon \quad \forall n > \nu_{\epsilon} \newline
|b_{n}|=||a_{b}|| = |a_{n}| < \epsilon
\\
c.v.d

\end{gather}

$$
### Teorema 
Siano $\{a_{n}\}$ una successione limitata e $\{b_{n}\}$ infinitesima allora

$$
\lim_{ n \to \infty } a_{n}   b_{n} = 0
$$

Dim.
grazie al lemma precedente
$\lim_{ n \to \infty }|\{b_{n}\}| = 0$

Con M > 0 : $M \geq |a_{n}|$ 

$$
\begin{align}
0 \leq |a_{n}  b_{n}| = |a_{n}| |b_{n}| \leq M |b_{n}|
\\  \\
\lim_{ n \to \infty } M |b_{n}| = 0 \\ \\


\end{align}
$$
per il teorema dei due carabinieri
$|a_{n} b_{n}| = 0$ e per il lemma $a_{n}b_{n} = 0$



==Es.==
$$
\begin{gather}
a_{n} = \frac{\sin(n)}{n} = \sin(n) * \frac{1}{n}\\
-1 \leq\sin (n) \leq 1 \implies |\sin n| \leq 1
\end{gather}
$$
Essendo la funzione sin n limitata e $\frac{1}{n}$ infinitesima
$\lim_{ n \to \infty }a_{n}$ = 0

---
### Non esistenza del limite

Se $a_{n}$ converge a $l$
$\forall \epsilon > 0 : P(n, a_{n}) \in S_{l, \epsilon}$ definitivamente
Tutti i punti di $a_{n}$ eccetto un numero finito appartengono alla striscia

Se $a_{n}$ non ha limite $l$
$\exists \epsilon >0 : P(n, a_{n}) \notin S_{l, \epsilon}$
Infiniti punti di $a_{n}$ non appartengono alla striscia

==Es==

$$
a_{n} = (-1)^n = \begin{cases}
1,\ n \ pari \\ -1, \ n \ dispari
\end{cases}
$$
![[Pasted image 20241006122620.png]]

$l = 1$
$\exists S_{l,\epsilon} : P_{n} \not\in S_{l,\epsilon}, a_{n} \not\to 1$ 

$l = -1$
$\exists S_{l,\epsilon} : P_{n} \not\in S_{l,\epsilon}, a_{n} \not\to -1$ 

$\{a_{n}\}$ non ha limite

Oss.
$(-1)^n = (-1)^{2k}= 1 \to 1 , k \to \infty$
$(-1)^n = (-1)^{2k+1} = -1 \to -1 , k \to \infty$

le sottosuccessioni con n pari e n dispari hanno limite differente =>
$\not\exists \lim_{ n \to \infty }a_{n}$

$\{a_n\}$ limitata non implica $\{a_n\}$ convergente      (vale invece l'inverso: [[#Teorema]])

$a_{n} = (-1)^n$ ==è limitata ma non ha limite==


---
### Definizione (successione divergente)

Si dice che una successione $\{a_{n}\}$ ==diverge positivamente== o che tende a $+\infty$ se ha limite $+\infty$ 

$\forall M >0, \quad a_{n} > M$ definitivamente


Si dice che una successione $\{a_{n}\}$ ==diverge negativamente== o che tende a $-\infty$ se ha limite $-\infty$ 

$\forall M >0, \quad a_{n} < -M$ definitivamente

### Definizione (successione regolare / irregolare)

$\{a_{n}\}$ si dice regolare se ammette limite finito o infinito. Irregolare se non ammette limite

==Es.==
	$$
\begin{gather}
a_{n} = \frac{1}{n}, \quad b_{n}=-n^2 \ successioni\ regolari \\
c_{n} = (-1)^n \ successione\ irregolari
\end{gather}
	$$

---
### Algebra dei limiti

Somma

| $$\lim_{ n \to \infty } a_{n}=a$$ | $$\lim_{ n \to \infty } b_{n}=b$$ | $$\lim_{ n \to \infty } (a_{n}+b_{n})$$ |
| --------------------------------- | --------------------------------- | --------------------------------------- |
| $a$                               | $b$                               | $a+b$                                   |
| $a$                               | $\pm \infty$                      | $\pm \infty$                            |
| $\pm \infty$                      | $\pm \infty$                      | $\pm \infty$                            |

Prodotto

| $$\lim_{ n \to \infty } a_{n}=a$$ | $$\lim_{ n \to \infty } b_{n}=b$$ | $$\lim_{ n \to \infty } (a_{n}*b_{n})$$ |
| --------------------------------- | --------------------------------- | --------------------------------------- |
| $a$                               | $b$                               | $a*b$                                   |
| $a>0$<br>$a<0$                    | $\pm \infty$                      | $\pm \infty$<br>$\mp \infty$            |
| $+ \infty$                        | $+ \infty$                        | $+\infty$                               |
| $- \infty$                        | $- \infty$                        | $+\infty$                               |
| $\pm \infty$                      | $\mp \infty$                      | $-\infty$                               |

Quoziente


| $$\lim_{ n \to \infty } a_{n}=a$$ | $$\lim_{ n \to \infty } b_{n}=b \ \ \ \ b_{n} \neq 0 \quad definitivamente$$ | $$\lim_{ n \to \infty } \left( \frac{a_{n}}{b_{n}} \right)$$                                                                                       |
| --------------------------------- | ---------------------------------------------------------------------------- | -------------------------------------------------------------------------------------------------------------------------------------------------- |
| $a$                               | $b\neq{0}$                                                                   | $\frac{a}{b}$                                                                                                                                      |
| $a$                               |                                                                              |                                                                                                                                                    |
| $\pm \infty$                      | $b>0$<br>$b<0$                                                               | $\pm \infty$<br>$\mp \infty$                                                                                                                       |
| $a>0$                             | 0                                                                            | $$\begin{cases}+\infty, b_{n} > 0 \quad definitivamente \\-\infty, b_{n} < 0 \quad definitivamente \\ \not \exists, \quad altrimenti \end{cases}$$ |


Potenza

| $$\lim_{ n \to \infty } a_{n}=a, \ \ \ a_{n}\geq 0 \quad definitivamente$$ | $$\lim_{ n \to \infty } b_{n}=b$$ | $$\lim_{ n \to \infty } a_{n}^{b_{n}})$$ |
| -------------------------------------------------------------------------- | --------------------------------- | ---------------------------------------- |
| $a>0$                                                                      | $b$                               | $a^b$                                    |
| $0\leq a<1$<br>                                                            | $+ \infty$<br>$-\infty$           | $0$<br>$+\infty$                         |
| $a>1$                                                                      | $+ \infty$<br>$- \infty$          | $+\infty$<br>$0$                         |
| $+\infty$                                                                  | $b>0$<br>$b<0$                    | $+\infty$<br>$0$                         |
| $+\infty$                                                                  | $+\infty$<br>$-\infty$            | $+\infty$<br>$0$                         |

---

### Forme di indecisione

$$
\begin{gather}
+\infty - \infty \\ \\
0 * (\pm \infty) \\ \\
\frac{0}{0}, \ \frac{+\infty}{-\infty}\\ \\
0^0, 1^{\pm \infty}, (+\infty)^0

\end{gather}

$$



==Es==

Caso particolare (a / 0 != inf)
$a_{n} \to a > 0$, per $n \to \infty$
$b_{n} \to 0$, per $n \to \infty$

$\not \exists \lim_{ n \to \infty} \frac{a_{n}}{b_{n}}$

per esempio $a_{n} = 1 \to 1 \quad \quad b_{n} = \frac{(-1)^n}{n}$

$$
b_{n} =
\begin{cases}
\frac{1}{n}, \ n \ pari \\
-\frac{1}{n}, \ n \ dispari
\end{cases}
$$
$\lim_{ n \to \infty } b_{n} = 0$

ma svolgendo alcuni calcoli si può osservare che:
$$
\frac{a_{n}}{b_{n}} = \frac{1}{\frac{(-1)^n}{n}} = \frac{n}{(-1)^n} = \frac{n}{(-1)^n} * \frac{(-1)^n}{(-1)^n} = \frac{(-1)^n * n}{(-1)^{2n}} = (-1)^n *n
$$
 => non ammette limite.


### Teorema (somma del limite)
Se $\{a_{n}\} \to a \quad a \in R$ e $\{b_{n}\} \to b \quad b \in R$
allora

$$
a_{n} + b_{n} \to a + b
$$

Dim.

$$
\begin{align}
&\forall \epsilon >0 \quad \exists \nu_{\epsilon,1} \in N  \quad t.c \quad |a_{n} - a| < \epsilon \quad \forall n > \nu_{\epsilon, 1} \\ 
&\forall \epsilon >0 \quad \exists \nu_{\epsilon,2} \in N  \quad t.c \quad |b_{n} - b| < \epsilon \quad \forall n > \nu_{\epsilon, 2} \\   \\
 
&\nu_{\epsilon} = max\{_{\nu_{\epsilon, 1}, \quad \nu_{\epsilon, 2}}\}
 \\ &\forall n>\nu_{\epsilon}  \\
&|(a_{n}+b_{n} - (a+b))| < \epsilon \\
&|(a_{n}-a) + (b_{n}-b)| \leq |a_{n} - a| + |b_{n}-b| < \epsilon + \epsilon = 2\epsilon \\
&\leftrightarrow a_{n} + b_{n} \to a + b
\end{align}

$$

_dimostrando che $|(a_{n}+b_{n} - (a+b))| < \epsilon$ si può affermare che $a_{n} + b_{n} \to a + b$
$|a_{n} - a| + |b_{n}-b| < \epsilon + \epsilon = 2\epsilon$ che è vera per ogni n > $\nu_{\epsilon}$_

---
### Teorema (permanenza del segno)

se $a_{n} \to a > 0$ allora $\exists \nu \in N \quad t.c \quad a_{n} > 0 \quad \forall n > \nu$

viceversa 
se $a_{n} \to a < 0$ allora $\exists \nu \in N \quad t.c \quad a_{n} < 0 \quad \forall n > \nu$

Dim.

$$
\begin{gather}
\forall \epsilon > 0 \ \exists \nu_{\epsilon} \in N \quad t.c \\
|a_{n} - a| < \epsilon \quad \forall n > n_{\epsilon}
\\
\implies -\epsilon < a_{n} - a < \epsilon \\
\implies a - \epsilon < a_{n} < a + \epsilon

\\ scegliendo \ \epsilon = \frac{a}{2} > 0 \quad \exists \nu \in N \quad t.c
\\ 
 0 < \frac{a}{2} < a_{n} < \frac{3}{2}a \quad \forall n > \nu
\end{gather}
$$

---
# Regolarità delle succesioni

 2024-10-09

--limiti notevoli_poteqza

$a_n \to 0$
$a_{n} \neq 0$ definitivamente
$$\lim_{ n \to \infty } \frac{\log(1+a_{n})}{a_{n}}=1$$





$a_n$ > 0
$$
\frac{\log(1+a_{n})}{a_{n}} = \frac{1}{a_{n}} * \log(1+a_{n}) = \log(1+a_{n})^{1/a_{n}}



$$
$$
b_{n} = \frac{1}{a_{n}} \to \infty


$$
$$
\log(1+\frac{1}{b_{n}})^{b_{n}} \to \log e = 1

$$

---
$a_{n} \to_{0}$

$$
\begin{gather}
\frac{{e^a_{n}-1}}{(a_{n})} \to 1

\\

b_{n} = e^{a_{n}}-1 \to 0
\\

\frac{\log(1+b_{n})}{b_{n}} = \frac{\log e^{a_{n}}}{e^a_{n}-1}=\frac{a_{n}}{e^a_{n}-1}

\\

\frac{e^{a_{n}}-1}{a_{n}} =  \frac{1}{\frac{a_{n}}{e^a_{n}-1} \to 1} \to 1

\end{gather}

$$

---

$$


\begin{gather}
a_{n} \to 0 \\
\frac{(1+a_{n})^\alpha - 1}{a_{n}} \to a

\\
---

\\
(1+a_{n})^{1/a_{n}} \to e
\end{gather}
$$
---
##### Rapporto tra polinomi

$P(n) = a_kn^k+a_{k-1}n^{k-1}+...+a_0 \ a_{k} \neq 0$ 
$Q(n) = b_kn^k+b_{k-1}n^{k-1}+...+b_0 \ b_{k} \neq 0$ 

$$
\lim_{ n \to \infty } \frac{P(n)}{Q(n)} f.i. (\frac{\infty}{\infty})
$$


$$
\frac{P(n)}{Q(n)} = \frac{n^k\left( a_{k}+\frac{a_{k-1}}{n} \right)}{n^h(b_{h}+\dots)}

$$
, 
$$

\begin{cases}
+\infty \quad k>h,\  \frac{a_{k}}{b_{h}} > 0 \\
-\infty \quad k > h, \ \frac{a_{k}}{b_{h}} < 0 \\ \\
\frac{a_{k}}{b_{h}} \quad k = h \\
0 \quad k < h
\end{cases}

$$


. ==Es==

$$
\begin{gather}
\lim_{ n \to \infty } \frac{n^5-n^4+n^2}{-n^3+n^2+2n} = \lim_{ n \to \infty } \frac{n^5\left( \frac{1}{n^2}\dots \right)}{n^3\left( -1 + \frac{1}{n} \dots\right )} = -\infty
\end{gather}

$$
---
. ==Es==

$$
\begin{gather}
\lim_{ n \to \infty } (\sqrt{ n+1 } - \sqrt{ n }) f.i (\infty-\infty)
\\

\\

(\sqrt{ n+1 } - \sqrt{ n }) \cdot \frac{\sqrt{ n+1 }+\sqrt{ n }}{\sqrt{ n+1 }+\sqrt{ n }} = \frac{n+1-n}{\sqrt{ n+1 } + \sqrt{ n }} = \frac{1}{\sqrt{ n+1 } + \sqrt{ n }} \to 0
\end{gather}
$$


### Criterio del rapporto per le successioni

### Teorema

Siano $a_{n}>0, b_{n}=\frac{a_{n}+1}{a_{n}}$

$se \quad \exists \lim_{ n \to \infty }b_{n}=b<1$ allora
$a_{n}\to{0}$


Dim
per il th della permanenza del segno
$$

\begin{gather}
\exists \nu \in N t.c. b_{n} < 1 \forall n > \nu
\\
Dunque
\\
\frac{a_{n}+1}{a_{n}} < 1 \forall n > \nu
\\
\leftrightarrow 
a_{n} > 0
\\
a_{n+1} < a_{n} \forall n > \nu
\\
\{a_{n}\} \ è \ def. \ decrescente

\implies \exists a:= \lim_{ n \to \infty } a_{n} \geq 0 (per la regolarità)
\\

Supponiamo \ p.a, \ che a \neq 0. \ Si\ avrebbe \\
\lim_{ n \to \infty } b_{n}  = \lim_{ n \to \infty } \frac{a_{n+1}}{a_{n}} = \frac{a}{a} = 1 \ (\text{ma il limite di} \ b_{n} \ \text{deve essere < 1})

\\
Dunque a = 0

\end{gather}


$$

----

Applichiamo il criterio del rapporto per confrontare le succesioni

$n^b, \alpha^n, n!, n^n, \quad b > 0, \alpha > 1$


$$
\begin{gather}
1) \lim_{ n \to \infty } \frac{n^b}{\alpha^n} = 0\\ \\
2) \lim_{ n \to \infty } \frac{\alpha^n}{n!} = 0\\ \\
3) \lim_{ n \to \infty } \frac{n!}{n^n} = 0
\end{gather}

$$


---

$$

\lim_{ n \to \infty } \frac{\log_{a}(n)}{n^b} = 0 \quad a>0, a\neq 1, b>0
$$

a > 1

$$
\begin{gather}
(1+t)^n \geq 1+ nt
\\
2^x \geq 2^{[x]} = (1+1)^{[x]} \geq 1+ [x] > x, \quad \forall x > 0
\\
2^x>x, \quad \forall x > 0
\end{gather}

$$
$$
\begin{gather}

\log_{a} x < \log_{a} {2^x} = x\log_{a}2, \quad x = n^{b/2}
\implies \log_{a}(n^)
\end{gather} \dots
$$


questo dimostra una gerarchia degli infiniti


$$
\log_{a}n, n^b, \alpha^n, n!, n^n
$$
l'esponenziale vince su tutti, e log perde su tutti

$$
\sqrt{ n } = n^{1/n} = e^{1/n \cdot \log n} \to e^0 = 1
$$


### Confronti e stime asintotiche

$\{a_{n}\}, \{b_{n}\}$ sono divergenti definitivamente b != 0

Diremo che $$a_{n} \text{ è un infinito di ordine inferiore rispetto a } \ b_{n}, es 


$$
$$\lim_{ n \to \infty } \frac{a_{n}}{b_{n} }= 0

$$
$$
a_{n}, b_{n} \text{infiniti dello stesso ordine}, se
\lim_{ n \to \infty } a_{n}7b_{n} = l \in R \text{\} \{\}
$$



$$
a_{n} è o^{ine superiore} 
$$


non paragonabili



---
Oss.

$n^n > n! > \alpha^n > n^b > (\log_{a}n)^\alpha$

---

\
Terminologia con infinitesimi

ordine superiore -> 0 
stesso ordine -> l in R
ordine inferiore -> +-infty
non paragonabili -> non esiste il limite del rapporto

Es.

$$
\begin{gather}
a_{n} = \frac{1}{n^2}, b_{n} = \frac{1}{n}, \quad a_{n} \to 0, b_{n} \to 0
\\

\lim_{ n \to \infty } \frac{a_{n}}{b_{n}} = \lim_{ n \to \infty } = \frac{\frac{1}{n^2}}{\frac{1}{n}} = \lim_{ n/ \to \infty } \frac{n}{n^2} = 0 \
\{a_{n}\} è \text{infinitesimo di ordine superiore}
\end{gather}

$$



Def.
Siano $\{a_{n}\},\{b_{n}\}$ due successioni diremo che :
$\{a_{n}\}$ è asintotica a $\{b_{n}\}$, se 

$$
\lim_{ n \to \infty } \frac{a_{n}}{b_{n}} = 1
a_{n} \tilde b_{n} 

$$


Diremo che 

$\{a_{n}\}$ è un "o piccolo" di $\{b_{n}\}$ e scriveremo

$$
\begin{gather}
a_{n} = o(b_{n}), se \\
\lim_{ n \to \infty } \frac{a_{n}}{b_{n}} = 0
\end{gather}

$$
---
. Oss
$(\log_{a} n)^\beta= o(n^b)$

$n^b = o(\alpha^n)$

n! = o(n^n)

---

Poprietà

%%prop riflessiva (a= a), transitiva (a = b, b= c, a = c), simmetrica (a = b, b = a), quando valgono tutte e tre si dice relazione di equivalenza%%
$a_{n} \tilde{a_{n}}$ 
...
		


...
Oss. somma 
generalmente non vale

esponenziale
generalmente non vale


.Oss
o(a_n) = o(-a_n) = -o(a_n)

...

.Oss
$\sin\left( \frac{1}{n} \right)$


==Es==
$$
\begin{gather}
a_{n} = \frac{3n^5+2n^2-\sin(n^2)}{5n^5+n+\arctan(n)} = \frac{3n^5+o(n^5)}{5n^5+o(n^5)} = \frac{n^5\left( 3+\frac{o(n^5)}{n^5} \right)}{n^5\left( 5+\frac{o(n^5)}{n^5} \right)} \to \frac{3}{5}
\end{gather}

$$

$$
a_{n} = \frac{\sin\left( \frac{1}{n} \right)}{e^{2/n} - 1}


$$

$$
a_{n}
$$


.Oss 

é possibile usare l'equivalenza asintotica con funzioni composte, partendo dalla 
funzione più esterna


Es. $a_n$ = $e^{\sin[\log(1+1/n)]} - 1$

$a_{n}$ è asintoticamente quivalente a $\sin\left[ \log\left( 1+\frac{1}{n} \right) \right]$ che è asintoticamente equivalente a log$\left( 1+\frac{1}{n} \right)$ che è asintoticamente equivalente a $\frac{1}{n}$

