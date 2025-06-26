---
cards-deck: Analisi 2/2.46-265 (integrali)
---

# 2.46

#### Dare le definizioni di primitiva e di integrale indefinito. Illustrare le proprietà dell’integrale indefinito #card
Sia f: (a, b) -> R e F : (a, b) -> R, con F derivabile in (a, b). F si dice primitiva di f o antiderivata se:
$$F'(x) = f(x) \quad \forall x \in (a, b)$$
==Regole==
$$\int [\alpha f(x)+\beta g(x)]dx=\alpha \int f(x)dx+\beta \int g(x)dx \quad \forall \alpha, \beta \in R$$
^1736270081569


# 2.47

#### Enunciare il teorema sulla struttura dell’integrale indefinito #card
Tutte le primitive di f si scrivono come:
$$\int f(x) dx$$
DIM
$$\frac{d(F'(x) + c)}{dx} = F'(x) = f(x)$$
F'(x) + c è ancora una primitiva di f(x)
Sia G una qualunque primitiva di f allora
$$\frac{d(F(x) - G(x))}{dx} = F'(x) = G'(x) = f(x) - f(x) = 0$$
per il Corollario delle funzioni costanti di Lagrange F(x) - G(x) è una funzione costante in (a, b)
$$F(x) - G(x) = c$$
Pertanto:
$$G(x) = F(x) - c$$
Quindi:
$$\int f(x)dx = F(x) + c$$
^1736270081571

# 2.49

#### Scrivere e dimostrare la formula di integrazione per sostituzione (per integrali indefiniti) #card
Siano f, F, g funzioni definite in (a, b). Supponiamo che F, g derivabili in (a, b) e che F sia una primitiva di f.
Per la derivazione della funzione composta.
$$\frac{d[F(g(x))]}{dx}=F'(g(x))g'(x) = f(g(x))g'(x)$$
Dunque $F(g(x))$ è una primitiva di f(g(x))g'(x).
Perciò vale la seguente formula di integrazione per sostituzione:
$$\int f(g(x))g'(x)dx=\int f(u)du \quad con\ u = g(x)$$
^1736270081574


# 2.48

#### Scrivere e dimostrare la formula di integrazione per parti (per integrali indefiniti) #card
Siano f, g : (a, b) -> R due funzioni derivabili. Per la regola di derivazione del prodotto
$$D[f(x)g(x)] = f'(x)g(x) + f(x)g'(x)$$
Integrando i due membri
$$\int D[f(x)g(x)] = \int[f'(x)g(x)]dx+\int[f(x)g'(x)]dx$$
$$f(x)g(x) = \int[f'(x)g(x)]dx+\int[f(x)g'(x)]dx$$
quindi vale la seguente formula di integrazione per parti:
$$\int[f'(x)g(x)]dx = f(x)g(x) - \int[f(x)g'(x)]dx$$
^1736270081576


![[Pasted image 20241229204252.png]]
![[Pasted image 20241229204448.png]]


# 2.50

#### Dare le definizioni di partizione di un intervallo, di somme integrali inferiori e superiori. #card 
Una partizione P di $[a, b]$ è un insieme ordinato di punti:$$a = x_{0} < x_{1} < x_{2} < x_{n} =b$$
per qualche n $\in R$ fissato.
$$m_{k} = \underset{[x_{k-1},x_{k}]}{inf} f \qquad M_{k} = \underset{[x_{k-1}, x_{k}]}{sup} f$$
$\forall k = 1, \dots, n$
Somma integrale inferiore subordinata alla partizione P:
$$
s(f; P) = \sum_{k=1}^n m_{k}(x_{k}-x_{k-1})
$$
Somma integrale superiore subordinata alla partizione P:
$$
s(f; P) = \sum_{k=1}^n M_{k}(x_{k}-x_{k-1})
$$
La somma integrale superiore è un'approssimazione per eccesso dell'area del sottografico.
La somma integrale inferiore è un'approssimazione per difetto dell'area del sottografico.
^1736270081579

# 2.51, 2.52, 2.53

#### Dare la definizione di funzione integrabile secondo Riemann e di integrale di Riemann. #card
Somma inferiore di Riemann:
$$s(f) = sup\{s(f, P) : P \ \text{è una qualsiasi partizione di [a, b]}\}$$
Somma superiore di Riemann:
$$S(f) = inf\{S(f, P) : P \ \text{è una qualsiasi partizione di [a, b]}\}$$
Sia f : $[a, b]$ -> R una funzione limitata. 
f si dice integrabile secondo Riemann se:
$$s(f) = S(f)$$
Il numero reale $$\int_{a}^b f(x)dx = s(f) = S(f)$$
è detto integrale definito di Riemann in $[a, b]$

#### Illustrare le proprietà dell’integrale definito. #card
1. f + g integrabile in [a, b] $$\int_{a}^b[f(x)+g(x)]dx=\int_{a}^b f(x)dx+\int_{a}^b g(x)dx$$
2. $\forall\alpha \in R, \alpha f$ è integrabile in [a, b]$$\int_{a}^{b}\alpha f(x)dx=\alpha\int_{a}^{b}f(x)dx$$
3. se f è integrabile in [a, b] e in [b, c] allora:$$\int_{a}^cf(x)dx=\int_{a}^bf(x)dx+\int_{b}^cf(x)dx$$
4. $$\int_{a}^af(x)dx=0 \qquad \int_{a}^b f(x)dx=-\int_{b}^af(x)dx$$
5. $$|\int_{a}^b f(x)dx| \leq \int_{a}^b f(x)dx$$

#### Esibire delle classi di funzioni che sono integrabili secondo Riemann. Esibire una funzione che non è integrabile secondo Riemann. #card
Se f : [a, b] -> R è continua in [a, b], allora f è integrabile in [a, b]
Se f : [a, b] -> R è monotona e limitata, allora f è integrabile in [a, b]


# 2.54

#### Enunciare e dimostrare il teorema della media integrale. #card
Sia f una funzione integrabile in [a, b].
$$m= \underset{[a, b]}{inf} \ f \qquad M = \underset{[a, b]}{sup} \ f$$
Allora $$m(b-a) \leq \int_{a}^b f(x) dx \leq M(b-a)$$
Inoltre se f è continua in [a, b] allora $\exists \xi \in[a, b]$
$$\int_{a}^b f(x)dx = f(\xi)(b-a)$$
DIM.
$$m \leq f(x) < M$$
integrando
$$\int_{a}^b mdx \leq \int_{a}^b f(x)dx \leq \int_{a}^b Mdx$$
$\int_{a}^b mdx = m(b-a)$
$\int_{a}^b Mdx = M(b-a)$
Dunque
$$m(b-a) \leq \int_{a}^b f(x)dx \leq M(b-a)$$
$$m \leq \frac{1}{b-a}\int_{a}^b f(x) dx \leq M$$
Per il teorema del valori medi $\exists \xi \in[a, b] :$
$$f(\xi ) = \frac{1}{b-a}\int_{a}^b f(x) dx$$
^1736270081581

# 2.56

#### Dare la definizione di funzione integrale. #card
Sia f una funzione integrabile in $[a, b]$:
$$F(x) = \int_{a}^x f(t)dt \quad \forall x \in [a, b]$$
è detta funzione integrale di f
^1736270081585

#### Enunciare e dimostrare il teorema e la formula fondamentale del calcolo integrale. #card
$$F(x) = \int_{a}^x f(t)dt \qquad \forall x \in [a, b]$$
F(x) è derivabile in $[a,b]$
$$F'(x) = f(x) \quad \forall x \in [a,b]$$
F è una primitiva di f. Se G è una primitiva di f:
$$F(x) = G(x) - G(a)$$
In particolare vale la formula fondamentale del calcolo integrale
$$\int_{a}^b f(x)dx=G(b) - G(a)$$
DIM
$$\frac{F(x+h)-F(x)}{h}=\frac{1}{h}\left[ \int_{a}^{x+h}f(t)dt - \int_{a}^xf(t)dt \right]=\frac{1}{h}[\cancel{\int_{a}^xf(t)dt}+\int_{x}^{x+h}f(t)dt-\cancel{\int_{a}^xf(x)dt}]$$
=$$\frac{1}{h}\int_{x}^{x+h}f(t)dt$$
per il teorema della media integrale $\exists \xi \in[x, x+h]:$
$$\frac{1}{h}\int_{x}^{x+h}f(t)dt=f(\xi)$$
per h->0, $\xi$ -> x
dunque essendo f(x) continua $f(\xi) \to f(x)$
$$\frac{F(x+h)-F(x)}{h} = f(x)$$
$$F'(x) = f(x) \qquad \forall x \in[a, b]$$
^1736270081589

Se x = a allora h > 0, Se x = b allora h < 0 e si procede come prima
	-----
Sia G una primitiva di f
$$G'(x) = f(x)$$
$$G'(x) - F'(x) = (G(x)-F(x))'=f(x) - f(x) = 0$$
dunque per il corollario di lagrange $G - F$ è costante
In particolare
$$G(x) - F(x) = G(a) - F(a) = G(a)$$
$$F(x) = G(x) - G(a)$$
$$F(b) = G(b) - G(a)$$
$$\int_{a}^b f(t)dt =G(b) - G(a)$$
# 2.56

#### Scrivere la formula di integrazione per parti per l’integrale definito.  #card
$$\int_{a}^b f'(x)g(x)dx = f(x)g(x)|_{a}^b -\int f(x)g'(x)dx$$
^1736270081592

# 2.58

#### Descrivere come si determina l’area di alcune regioni piane #card
Siano f e g due funzione integrabili in [a, b].
Supponiamo che $g(x) \leq f(x) \quad \forall x \in[a, b]$
La regione di piano:
$$A=\{(x, y) \in R^2: x \in [a, b],\ g(x) \leq y\leq f(x)\}$$
$$area(A) =\int_{a}^b [f(x)-g(x)]dx$$
^1736270081596



# 2.59, 2.60

#### Dare la definizione di integrale improprio per una funzione non limitata #card 
Sia f : (a, b] -> R, una funzione continua in (a, b] con $\lim_{ x \to a^+ } f(x) = \pm \infty$.
Poiché f non è limitata non è possibile definire l'integrale definito in [a, b].
$$\int_{\alpha}^b f(x)dx \qquad \forall\alpha \in(a, b)$$
f si dice integrabile in senso improprio se esiste finito:
$$\lim_{ x \to a^+} \int_{\alpha }^b f(x)dx$$
$$\int_{a}^b f(x) dx = \lim_{ x \to a^+ } \int_{\alpha}^b f(x) dx$$
è detto integrale indefinito di f su [a, b]
Se il limite non esiste o è infinito allora si dice che f non è integrabile in senso improprio su [a, b]
Quando il limite è infinito si dice che l'integrale indefinito diverge.
#### Dare la definizione di integrale improprio su un intervallo illimitato. #card
similmente si fa su $[a, +\infty)$ e su $(-\infty, a]$
^1736270081601


# 2.61

#### Enunciare e dimostrare il teorema del confronto per gli integrali impropri. #card
Sai f : $[a, +\infty)$ -> R una funzione continua in $[a,+\infty)$ tale che f  $\geq {0}$ in $[a,+\infty )$
Sia g : $[a, +\infty )$ -> R una funzione integrabile in senso improrio su $[a, +\infty )$ tale che:
$$f(x) \leq g(x) \quad \forall x \in[a, +\infty)$$
Allora f è integrabile in senso improprio e vale:
$$\int_{a}^{+\infty } f(x) dx \leq \int_{a}^{+\infty } g(x) dx$$
Sia invece g continua in $[a, +\infty)$ e :
$$f(x) \geq g(x) \geq {0}$$
e che
$$\int_{a}^{+\infty }g(x) dx = +\infty $$allora
$$\int_{a}^{+\infty } f(x)dx = +\infty $$
DIM
poiché $$ f(x) \leq g(x) \quad \forall x \in(a, +\infty]$$
$$F(t) := \int_{a}^t f(x) dx \leq G(t) := \int_{a}^t g(x) dx$$
Essendo $f \geq 0$ e g $\geq 0$ F e G sono crescenti.
per la regolarità delle funzioni monotone
$$\exists \lim_{ t \to  +\infty  } G(t) \qquad \exists \lim_{ t \to +\infty } F(t)$$
poiché g è integrabile in senso improprio
$$\lim_{ t \to +\infty  } \int_{a}^t g(x) dx$$esiste finito
Dunque
$$\lim_{ t \to \infty } F(t) = \int_{a}^{+\infty } f(x) dx \leq \int_{a}^{+\infty }g(x) dx$$
f(x) è integrabile in senso improprio.
!!Similmente si può applicare per f : $[a, b)$ -> R con f$\geq 0$
^1736270081606

# 2.62

#### Enunciare il teorema del confronto asintotico per gli integrali impropri. Scriverlo esplicitamente utilizzando la funzione potenza. #card
Siano f, g : $[a, +\infty ) \to R$ continue in $[a, +\infty )$. Supponiamo che $f \geq 0, g > 0 in [a, +\infty)$ 
Assumiamo che $$\exists \lim_{ x \to \infty } \frac{f(x)}{g(x)} = L \quad(L \in[0, +\infty ])$$
Se $L \in R \setminus \{0\}$
$$\int_{a}^{+\infty} g(x)dx < +\infty \implies \int_{a}^{+\infty } f(x) dx <+\infty  $$
$$\int_{a}^{+\infty} g(x)dx = +\infty \implies \int_{a}^{+\infty } f(x) dx = +\infty $$
Se L = 0
$$\int_{a}^{\infty} g(x)dx <+\infty \implies \int_{a}^{+\infty }f(x)dx < +\infty$$
Se L = $+\infty$
$$\int_{a}^{+\infty }g(x)dx = +\infty \implies \int_{a}^{+\infty } f(x)dx = +\infty $$
Per $$\int_{-\infty }^b f(x)dx$$
Si assume $$\exists \lim_{ x \to -\infty  } \frac{f(x)}{g(x)} = L $$

#### Corollari Asintotico #card
==Corollario Funzione potenza asintotico== 
$$\exists \lim_{ x \to \infty } x^\alpha f(x) =L  \in[0, +\infty ]$$
Se L $\in R \setminus \{0\}$
$$se \ \alpha>1 \implies \int_{a}^{+\infty } f(x) dx < +\infty $$
$$se \ 0 < \alpha \leq 1 \implies \int_{a}^{+\infty } f(x) dx = +\infty $$
Se L = 0
$$se \ \alpha>1 \implies \int_{a}^{+\infty } f(x) dx < +\infty $$
Se L = $+\infty$
$$se \ 0 < \alpha \leq 1 \implies \int_{a}^{+\infty } f(x) dx = +\infty $$
==Secondo Corollario funzione potenza==
$$\exists \lim_{ x \to a+ } (x-a)^\alpha f(x) = L \in[0, +\infty] $$
Se L $\in R \setminus \{0\}$
$$se \ 0 < \alpha < 1 \implies \int_{a}^{b } f(x) dx < +\infty $$
$$se \ \alpha\geq 1 \implies \int_{a}^{b} f(x) dx = +\infty $$
Se L = 0
$$se \ 0 < \alpha < 1 \implies \int_{a}^{b} f(x) dx < +\infty $$
Se L = $+\infty$
$$se \  \alpha \geq 1 \implies \int_{a}^{b} f(x) dx = +\infty $$

# 2.63

#### Dare la definizione di convergenza assoluta per un integrale improprio. #card
$$\int_{a}^{+\infty }f(x)dx \ \text{converge assolutamente se converge l'integrale}  \ \int_{a}^{+\infty} |f(x)|dx$$
^1736270081630


# 2.64

#### Dimostrare che la convergenza assoluta di un integrale improprio implica quella semplice. E’ vero il viceversa? #card 
Se |f| è integrabile in senso improprio allora anche f è integrabile in senso improprio.
e vale:
$$|\int_{a}^{+\infty }f(x)dx| \leq \int _{a}^{+\infty} |f(x)|dx$$
Non vale necessariamente il viceversa
^1736270081635


# 2.65

#### Enunciare il criterio integrale per serie. Applicarlo alla serie armonica generalizzata. #card
Sia f: $[1, +\infty)$ -> R una funzione decrescente e continua in $[1, +\infty)$ tale che f(x) $\geq$ 0
$$\sum_{n=1}^{+\infty }f(n) \qquad converge\ (diverge)$$
se e solo se
$$\int_{1}^{+\infty } f(x)dx \qquad converge \ (diverge)$$
OSS (armonica generalizzata)
$$f(x) = \frac{1}{x^\alpha}$$
$$\int_{1}^{+\infty } \frac{1}{x^\alpha }dx = \lim_{ n \to \infty } \int_{1}^n \frac{1}{x^\alpha}dx= \lim_{ n \to \infty } \frac{x^{-\alpha+1}}{-\alpha+1}|_{1}^n =  \lim_{ n \to \infty } \frac{1}{1-\alpha}n^{1-\alpha} - \frac{1}{1-\alpha}$$
$$0 < \alpha \leq  1 \ diverge$$
$$\alpha > 1 \ converge $$
^1736270081640




![[Pasted image 20250103153819.png]]


$$\int_{a}^b \frac{1}{x^\alpha }$$diverve per $\alpha \geq 1$
converge $0 < \alpha <1$