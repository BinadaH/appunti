[[Insiemistica]]
# 2.1

#### Dare le definizioni di intorno circolare di un punto, di intorno circolare destro e sinistro. #card
Dato $x_{0} \in R, r > 0$ Si definisce intorno circolare di centro $x_{0}$ l'insieme
$$I_{r}(x_{0}) := \{x \in R : |x-x_{0}| < r\}$$
##### Introno destro
$$I_{r}^+=\{x \in R : x_{0} < x < x_{0}+r\}$$
##### Intorno sinistro
$$I_{r}^-= \{x \in R : x_{0}-r < x <x_{0}\}$$


#### Dare le definizioni di punto di accumulazione di un sottoinsieme di R, di punto di accumulazione destro e sinistro #card 
Sia $E \subseteq R \quad x_{0} \in R$ si dice punto di accumulazione di E se:
$$\forall r > 0 \quad [E \cap I_{r}(x_{0})] \ \text{\\} \ \{x_{0}\} \neq \not O$$
(in ogni intorno di centro $x_{0}$ esiste almeno un punto)
#### destro
$$\forall r > 0 \quad [E \cap I_{r}^+(x_{0})] \ \text{\\} \ \{x_{0}\} \neq \not O$$
#### sinistro
$$\forall r > 0 \quad [E \cap I_{r}^-(x_{0})] \ \text{\\} \ \{x_{0}\} \neq \not O$$

# 2.2

#### Dare le definizioni di limite di una funzione finito al finito, infinito al finito, infinito all’infinito, finito all’infinito. Inoltre, spiegare le definizioni servendosi di disegni. #card
#### finito al finito
Sia $f : A \subseteq R \to R$ e sia $x_{0}$ punto di accumulazione per A. $l \in R$ è detto limiti di f(x) per x che tende a $x_{0}$
$$\lim_{ x \to x_{0} } f(x) =l$$
Se
$$\forall \epsilon > 0 \ \exists \delta_{\epsilon} > 0 : \forall x \in A \cap I_{\delta}(x_{0}), x \neq x_{0}$$
$$|f(x) - l| < \epsilon$$
#### finito all'infinito
###### $+\infty$
$$\lim_{ x \to x_{0} } f(x) = +\infty$$
se:
$$\forall M > 0 \quad \exists\delta_{M} > 0 : \forall x \in A \cap I_{\delta}(x_{0}), x \neq x_{0}$$
$$ f(x) >  M$$
###### -$\infty$
$$\lim_{ x \to x_{0} } f(x) = -\infty$$
se:
$$\forall M > 0 \quad \exists\delta_{M} > 0 : \forall x \in A \cap I_{\delta}(x_{0}), x \neq x_{0}$$
$$ f(x) <  -M$$
#### infinto al finito
##### $x \to +\infty$
Sia $f : A \subseteq R \to R$ e $A \supseteq (a, +\infty)$
$$\lim_{ x \to +\infty } f(x)=l$$
se:
$$\forall \epsilon > 0, \exists \nu_{\epsilon} > 0 : \forall x \in R, x > {\nu_{e}}$$
$$|f(x) - l| < \epsilon$$
##### $x \to -\infty$
$$\lim_{ x \to -\infty } f(x)=l$$
$$\forall \epsilon > 0, \exists \nu_{\epsilon} > 0 : \forall x \in R, x < {-\nu_{\epsilon}}$$
$$|f(x) - l| < \epsilon$$
#### infinito all'infinito
$$\lim_{ x \to \infty } f(x) = +\infty$$
se
$$\forall M > 0 \ \exists \nu_{\epsilon} > 0 : \forall x \in A, x > \nu_{\epsilon}$$
$$f(x) > M$$
---
$$\lim_{ x \to -\infty } f(x) = +\infty$$
se
$$\forall M > 0 \ \exists \nu_{\epsilon} > 0 : \forall x \in A, x < -\nu_{\epsilon}$$
$$f(x) > M$$
------
$$\lim_{ x \to -\infty } f(x) = -\infty$$
se
$$\forall M > 0 \ \exists \nu_{\epsilon} > 0 : \forall x \in A, x < -\nu_{\epsilon}$$
$$f(x) < -M$$

# 2.3

#### Dare le definizioni di limite destro e sinistro. Qual è il legame tra limite e limite destro o sinistro? #card
Sia $f: A \subseteq R \to R$ e $x_0$  punto di accumulazione da destra di A.
Allora $$\lim_{ x \to x_{0}^+ } f(x) = l$$
se
$$\forall\epsilon>0 \ \exists\delta_{\epsilon} > 0 : \forall x \in A \cap I_{\delta }^+(x_{0}) $$
$$|f(x)-l| < \epsilon$$
$x \in I_{r}^+$ implica $x \neq x_{0}$
$$\lim_{ x \to x_{0}^+} f(x) = \lim_{ x \to x_{0}^- } f(x) =l $$allora 
$$\exists \lim_{ x \to x_{0} }  f(x) = l$$
---
Se $$\exists \lim_{ x \to x_{0} } f(x)=l$$
allora
$$\lim_{ x \to x_{0}^+ } f(x) = \lim_{ x \to x_{0}^- }f(x) = l  $$

# 2.6

#### Teorema ponte #card
Siano $f : A \subseteq R \to R$ e $x_{0}$ punto di accumulazione per A.
$$\lim_{ x \to x_{0} } f(x) = l $$
solo se
$$\lim_{ n \to \infty } f(x_{n}) = l$$
$$\forall \{x_{n}\} \subset A \ \text{\\} \ \{0\} \ \text{con} \ x_{n}\to x_{0}$$


# 2.4

#### Enunciare l'unicità del limite #card

#### Permanenza del segno #card

#### confronto (o dei due carabinieri) #card

#### prodotto di funzione infinitesima per funzione limitata. #card


# 2.5

#### Forme indeterminate #card
Quando ci si pone di fronte a una forma indeterminata non è possibile determinare a priori il valore del limite.
$$+\infty-\infty \quad \infty \cdot 0  \quad \frac{0}{0} \quad \frac{\infty}{\infty}$$
$$0^0 \quad 1^\infty \quad \infty^0$$

# 2.7

#### Dare le definizioni di funzioni infinite, infinitesime. Scrivere i vari casi di confronto tra funzioni infinite (o infinitesime). #card
#### infinitesima
Sia $f:A \subseteq R \to R$ e $x_{0}$ punto di accumulazione di A. f si dice infinitesima se $f(x) \to 0 \ per \ x\to x_{0}$
Vale la seguente relazione:
 $f(x)\to {0}$ <=> $|f(x)|\to_{0}$
#### limitata per infinitesima
Sia $f(x)$ una funzione limitata in un intorno bucato di $x_{0}$ e $g(x)$ infinitesima in $x_{0}$ allora 
$$\lim_{ x \to x_{0} } f(x)g(x) = 0$$
---
#### infinita
Una funzione si dice infinita se 
$$\lim_{ x \to \overline x } f(x) =\pm\infty $$
con $\overline x$ punto di accumulazione di A oppure $=\pm\infty$
!!!!
# 2.8 

#### Enunciare il teorema sul limite di funzioni monotòne. #card
Se $f(x)$ è crescente $\forall x \in (a, b)$
$$\lim_{ x \to x_{0}^- } f(x) = sup_{a < x < x_{0}} \ f(x)$$
Se $f(x)$ è decrescente $\forall x \in (a, b)$
$$\lim_{ x \to x_{0}^- } = inf_{a < x < x_{0}} f(x)$$
# 2.9 

##### Introdurre gli asintoti verticali, orizzontali ed obliqui. #card
#### verticale
Sia $f: A \subseteq R \to R$ e $x_{0}$ un punto di accumulazione di A. Se
$$\lim_{ x \to x_{0} } f(x) = \pm \infty$$ allora la retta x = $x_{0}$ è detto asintoto verticale per f.
-- - 
Sia $x_{0}$ punto di accumulazione da destra e sinistra
$$\lim_{ x \to x_{0}^+ } f(x) = \pm\infty \quad \land \quad \lim_{ x \to x_{0}^- }f(x) = \mp \infty $$
Allora la retta $x = x_{0}$ è detto asintoto verticale per f.
-- -
Se $x_{0}$ è punto di accumulazione destro e 
$$\lim_{ x \to x_{0}^+ } f(x) = \pm \infty $$
allora la retta $x = x_{0}$ è detto asintoto verticale destro
(simile per sinistro)
#### orizzontale
Se per qualche $b \in R$
$$\lim_{  x \to \pm \infty } f(x) = b$$ allora la retta y = b è detta asintoto orizzontale di f.
--- -
#### obliquo
La retta y=mx+q  (con $m \neq 0$ e $q \in R$) è detto asintoto obliquo di f se $$\lim_{ x \to \pm \infty } [f(x)-mx-q] = 0 $$
$$m = \lim_{ x \to \pm \infty }\frac{f(x)}{x} $$
$$q = \lim_{ x \to \pm\infty } [f(x) - mx] $$


# 2.10

#### Dare la definizione di funzione continua in un punto, di funzione continua in un insieme. #card
Una funzione $f : A \subseteq R \to R$ e $x_{0}$ un punto di accumulazione di A. f è detta continua in $x_{0}$ se $$\lim_{ x \to x_{0} } f(x) = f(x)$$
Nella definizione di limite non escludo $x_{0}$ per non togliere significato a $f(x)$
f si dice continua in A se è continua per ogni $x_{0}$

# 2.12

#### Enunciare e dimostrare il teorema sul limite della funzione composta. #card
Sia g una funzione continua in $y_{0} = \lim_{ x \to x_{0} }f(x)$ allora $$\lim_{ x \to x_{0} } g(f(x)) = g(\lim_{ x \to x_{0} } f(x))$$
Dim
Bisogna dimostrare che 
$$\forall \epsilon >0 \ \exists\delta>0 : 0 < |x-x_{0}|< \delta \implies|g(f(x)) - f(y_{0})| < \epsilon$$
Essendo g(y) continua in $y_{0}$
$$ \forall\epsilon>0\exists \overline \delta>0 : |y - y_{0}| < \overline\delta \implies|g(y) - g(y_{0})| < \epsilon$$
Inoltre poiché $$\lim_{ x \to x_{0} } f(x)=y_{0}$$
$$\forall\epsilon>0\exists \delta_{1} > 0 : |x-x_{0}| < \delta_{1} \implies |f(x)-f(x_{0})| < \overline\delta \implies|f(x)-y_{0}|<\overline\delta$$
Unendo le due
$$\forall \epsilon > 0 \ \exists\delta > 0 : |x-x_{0}| < \delta$$
$\delta = min\{\delta_{1}, \overline\delta\}$
dunque con y = f(x)
$$\forall\epsilon > 0 \ \exists \delta : |x-x_{0}| < \delta \implies |f(x) - y_{0}| = |y-y_{0}| < \delta \implies |g(f(x)) - f(y_{0})| < \epsilon$$


#### Teorema sulla continuità della funzione composta. #card
Sia f una funzione continua in $x_{0}$ e g una funzione continua in $y_{0} = f(x_{0})$ allora $g(f(x))$ è continua in $x_{0}$ 
DIM
bisogna verificare che $$\lim_{ x \to x_{0} } g(f(x)) = g(f(x))$$
Essendo f(x) continua in $x_{0}$
$$\lim_{ x \to x_{0} } f(x) = f(x) = y_{0}$$
Per il teorema del limite di funzioni composte
$$\lim_{ x \to x_{0} } g(f(x)) =g(\lim_{ x \to x_{0} } f(x)) = g(y_{0}) = g(f(x_{0}))$$

# 2.13
#### Cosa si intende per punto di discontinuità? Illustrarne vari casi. #card 
Sia f : A $\subseteq R$ -> R una funzione, $x_{0} \in A$. Se f non è continua in $x_{0}$ si dice che f è discontinua in $x_{0}$ e che ==$x_{0}$ è un di discontinuità per f==.
Tipologie:
#### Discontinuità eliminabile:
- $\exists$ $\lim_{ x \to x_{0} }f(x) = l$
- $x_{0} \in A, f(x_{0}) \neq l$
$$\overline f(x) := \begin{cases}
f(x) \ se \ x \in A \text{\\}\{x_{0}\} \\ l \qquad se \ x = x_{0}
\end{cases}$$
$\overline f(x)$ è l'estensione continua di f(x) da A \ {$x_{0}$} a {$x_{0}$}
#### Discontinuità di prima specie o salto
Con $x_{0} \in A$
$$\lim_{ x \to x_{0}^- } f(x) = l_{1} \neq l_{2} = \lim_{ x \to x_{0}^+}f(x) $$
f non è continua in $x_{0}$
Il salto s($x_{0}$) := $\lim_{ x \to x_{0}^- }  f(x) - \lim_{ x \to x_{0}^+ } f(x)$
#### Discontinuità di seconda specie ($\pm \infty$)
Supponiamo che i limiti destro e sinistro esistano di $f$ per $x\to x_{0}$ e almeno uno dei due punti sia infinito. f non è continua in $x_{0}$
Es.
$$f(x) :=\begin{cases}
\frac{1}{x} , x\neq 0 \\ 2, x= 0
\end{cases}$$
#### Discontinuità di terza specie (non esiste un limite)
Uno o tutti e due i limiti destro e sinistro non esistono. Allora f non è continua in $x_{0}$
Es
$$f(x) = \begin{cases}
\sin\left( \frac{1}{x}\right ),  \ x \neq 0 \\ 1, \ x = 0
\end{cases}$$

# 2.14

#### Enunciare il teorema della permanenza del segno per funzioni continue. #card
Siano f : $A \subseteq R \to R$ una funzione e $x_{0} \in A$. Supponiamo che f sia continua in $x_{0}$. Se f($x_{0}$) > c per qualche valore di c $\in R$, allora $\exists \delta >0$ :
$$f(x) > c, \forall x \in [A \cap I_{\delta}(x_{0})]$$
Oss. 
Se f non è continua in $x_{0}$ allora il teorema non è vero.
Es.
$f(x) := \frac{1}{2} + sgn(x)$
f è discontinua in $x_{0} = 0$ e f(0) = 1/2 > 0
Ma in ogni intorno di $x_{0} = 0$ esistono punti x in cui f(x) < 0
# 2.15

#### Enunciare e dimostrare il teorema di esistenza degli zeri. Discutere il ruolo delle ipotesi. #card 

