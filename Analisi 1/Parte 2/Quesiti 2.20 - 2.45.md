---
cards-deck: Analisi 2/2.20-245 (derivate)
---


# 2.20

#### Dare la definizione di derivata ed illustrarne il significato geometrico. #card
Sia f :  $(a, b) \to R$  e $x_{0} \in (a,b)$, la funzione f si dice derivabile in $x_{0}$ se esiste finito il rapporto incrementale:
$$\lim_{ h \to 0 } \frac{f(x_{0}+h) - f(x_{0})}{h}$$
la derivata si indica con f'(x), Df(x), $\frac{df(x)}{dx}|_{x=x_{0}}$
Essendo $x_{0} \in (a,b)$ siamo sicuri che $\lim_{ h \to 0 } (x_{0} + h)$ $\in (a, b)$
Ponendo x = $x_{0} + h$
$$f'(x) = \lim_{ x \to x_{0} } \frac{f(x)-f(x_{0})}{x-x_{0}}$$
Se f è derivabile $\forall x_{0} \in (a, b)$ allora la funzione derivata f'(x) è definita $\forall x \in (a, b)$
#### Significato geometrico
Considerando una funzione f : (a, b) -> R e due punti $x_{0}, x_{1} \in (a, b)$
allora la retta passante per $x_{0}\ e\ x_{1}$ ha equazione
r : y = $\frac{f(x_{0}) - f(x_{1})}{x_{0} - x_{1}}$ ($x - x_{0}$) + f($x_{0}$)
il numero $\frac{f(x_{0}) - f(x_{1})}{x_{0} - x_{1}}$ è detto coefficiente angolare o pendenza della retta.
Se avviciniamo sempre di più  $x_{1}$ a $x_{0}$ allora  avremo la retta tangente al grafico nel punto $(x_{0}, f(x_{0}))$ nel caso in cui la retta tangente al punto esista e che non sia verticale.


#### Continuità e derivabilità #card 
Se una funzione è derivabile in $x_{0}$ allora è continua in tale punto.
$$f(x) - f(x_{0}) = \frac{f(x) - f(x_{0})}{x-x_{0}}(x-x_{0})$$
$$\lim_{ x \to x_{0} } \frac{f(x)-f(x_{0})}{x-x_{0}}= f'(x_{0})$$
$$\lim_{ x \to x_{0} } (x-x_{0}) = 0$$
$$\lim_{ x \to x_{0} } [f(x)-f(x_{0})]=0$$
$$\lim_{ x \to x_{0} } f(x)=f(x_{0})$$
ovvero f è continua in $x_{0}$
OSS.
non vale sempre il contrario

# 2.21

#### Dare la definizione di differenziabilità. #card 
Sia f : (a, b) -> R una funzione, e $x_{0} \in (a, b)$ si dice che f è differenziabile in $x_{0}$ se esiste $\lambda \in R$ tale che:
$$f(x) = f(x_{0})+\lambda(x-x_{0}) + o((x-x_{0}))$$
"ovvero $\lim_{ x \to x_{0} }$ è zero "
la funzione $h \mapsto \lambda h$ scritta come df($x_{0}$) è detta differenziale di f in $x_{0}$

#### Dimostrarne l’equivalenza tra differenziabilità e  la derivabilità. #card
Sia f una funzione, essa è derivabile in $x_{0}$ se e solo se è differenziabile in $x_{0}$
DIM
Supponiamo che $\exists f'(x_{0})$
$$\lim_{ x \to x_{0} } \left[ \frac{f(x)-f(x_{0})}{x-x_{0}}\right] = f'(x_{0})$$
Quindi
$$\frac{\left[ \frac{f(x)-f(x_{0})}{x-x_{0}} -f'(x_{0})\right](x-x_{0})}{x-x_{0}}\to {0}$$
ovvero $\lambda = f'(x_{0})$ dunque è differenziabile
Supponiamo che f sia differenziabile in $x_{0}$
$$\frac{f(x) - f(x_{0})}{(x - x_{0})} = \lambda + \frac{o(x-x_{0})}{x-x_{0}}$$
per x -> $x_{0}$
$f'(x_{0}) = \lambda$

# 2.22

#### Calcolare la derivata delle funzioni elementari. 
![[Pasted image 20241212100703.png]]


# 2.23

#### Enunciare e dimostrare il teorema sull’algebra delle derivate. #card
- $f\pm g$ è derivabile in x
$$D[f(x)\pm g(x)] = D[f(x)] \pm D[g(x)]$$
- $fg$ è derivabile in x
$$D[f(x)g(x)]=D[f(x)]g(x) + f(x)D[g(x)]$$
- $\frac{f}{g}$ è derivabile in x
$$D\left[ \frac{f}{g} \right]=\frac{D[f(x)]g(x)-f(x)D[g(x)]}{g^2(x)}$$
DIM
!!! da completare pag 217

# 2.24

#### Enunciare il teorema sulla derivata della funzione composta #card 
Siano f e g due funzioni derivabili:
La funzione composta è derivabile:
regola della catena
$$D[f\circ g] = f'(g(x))g'(x)$$
con la notazione di Leibniz ponendo y = g(x):
$$\frac{d[f(g(x))]}{dx}=\frac{df(y)}{dy}\frac{dy}{dx}$$

#### Enunciare il teorema della derivata della funzione inversa. #card 
Sia f(x) una funzione invertibile, continua con $f^{-1}$ continua. Supponiamo che f(x) sia derivabile in x con $f'(x) \neq 0$. Allora $f^{-1}$ è derivabile in y = f(x): 
$$D[f^{-1}(y)]=\frac{1}{D[f(x)]}|_{x=f^{-1}(y)}$$
Scambiando y e x
$$D[f^{-1}(x)]=\frac{1}{D[f(y)]}|_{y=f^{-1}(x)}$$
Es.
Calcolare $D[\arcsin x]$
$$D[\arcsin x] = \frac{1}{\cos y}|_{y=\arcsin x}$$
$$\forall y \in\left( -\frac{\pi}{2}, \frac{\pi}{2} \right) con\ y \neq 0$$
Sia ha che 
$$\cos y=\sqrt{ 1-\sin^2y }=\sqrt{ 1-x^2 }$$
Dunque
$$D[\arcsin x] = \frac{1}{\sqrt{ 1-x^2 }} \quad per\ -1 < x < 1$$

# 2.25

#### Dare le definizioni di massimo e minimo relativo, punti di massimo e di minimo relativo di una funzione, punti critici o stazionari. 
##### Definizione Massimo e minimo relativo #card
Sia f : A $\subseteq$ R -> R, $x_{0} \in A$ si dice ==punto di massimo relativo== se esiste un intorno $I_{r}(x_{0})$ tale che 
$$f(x) \leq f(x_{0}) \quad \forall x \in A \cap I_{r}(x_{0})$$
$f(x_{0})$ è detto (valore) ==massimo relativo==
Sia f : A $\subseteq$ R -> R, $x_{0} \in A$ si dice ==punto di minimo relativo== se esiste un intorno $I_{r}(x_{0})$ tale che 
$$f(x) \geq f(x_{0}) \quad \forall x \in A \cap I_{r}(x_{0})$$
$f(x_{0})$ è detto (valore) ==minimo relativo==
$x_{0}$ è detto punto di ==estremo relativo== se è punto di massimo o minimo relativo

##### Definizione Punto critico #card
Sia f : (a, b) -> R e $x_{0} \in$ (a, b). $x_{0}$ si dice punto critico o stazionario se:
$$\exists f'(x_{0}) = 0$$
in un punto critico la retta tangente alla funzione è orizzontale

# 2.26

#### Enunciare e dimostrare il teorema di Fermat. Illustrare il ruolo delle ipotesi. Il teorema fornisce una condizione necessaria o sufficiente per la ricerca di punti estremanti? #card
Sia f : (a, b) -> R, sia $x_{0}\in(a, b)$ un punto di massimo o di minimo relativo. Supponendo che f sia derivabile in $x_{0}$ allora:
$$f'(x_{0}) = 0$$
DIM
Supponiamo che $x_{0}$ sia un punto di massimo rel.
Essendo $x_{0}$ punto interno:
$\exists r>0 : I_{r}(x_{0}) \subset(a,b)$
Inoltre essendo punto di massimo rel.
$f(x) \leq f(x_{0}) \quad \forall x \in I_{r}(x_{0})$
Scelto un valore $h \in R$ : |h| < r
Si ha che per h > 0
$$\frac{f(x_{0}+h)-f(x_{0})}{h} \leq 0$$
essendo $x_{0}$ punto di massimo e $(x_{0} + h) \in I_{r}(x_{0})$
Per h < 0
$$\frac{f(x_{0}+h)-f(x_{0})}{h} \geq {0}$$
Essendo per ipotesi f derivabile in $x_{0}$
$$\exists \lim_{ h\to 0^+ } \frac{f(x_{0}+h)-f(x_{0})}{h} = \lim_{ h\to 0^- } \frac{f(x_{0}+h)-f(x_{0})}{h}$$
Per la permanenza del segno per i limiti
il primo limiti avrò segno negativo e il secondo limite avrà segno positivo
$$0\leq f'(x)\leq {0}$$
Da cui per il teorema dei due carabinieri f'(x) = 0 
OSS
è fondamentale che $x_{0} \in (a, b)$ il punto deve essere interno.
OSS
è fondamentale che f sia derivabile in $x_{0}$
es.
f(x) = |x| (x = 0 punto di minimo ma $\not\exists$f'(x))
OSS
Il teorema non dice che il punto critico sia di massimo o minimo rel. es. può essere flesso
OSS
vale per massimo o minimo assoluto

# 2.27

#### Illustrare il metodo per il calcolo di massimi e minimi assoluti #card
Sia $f : [a, b] \to R$. Per il teorema di Weierstrass esiste nell'intervallo $[a, b]$
$max_{[a, b]} f\ e\ min_{[a, b]} f$
Per il teorema di Fermat questi si trovano:
- negli estremi di $[a, b]$
- nei punti non derivabili di f in $[a, b]$
- nei punti stazionari di (a, b).
Bisogna confrontare i valori dei vari punti: il massimo sarà il più grande; il minimo sarà il più piccolo


# 2.28

#### Enunciare e dimostrare il teorema di Rolle. #card
Sia $f : [a, b]\to R$ una funzione continua in $[a, b]$ e derivabile in (a, b) e tale che
$$f(a) = f(b)$$
Allora esiste $\xi \in(a, b)$ tale che 
$$f'(\xi ) = 0$$
DIM
La funzione f è continua nell'intervallo chiuso e limitato $[a, b]$, e per il teorema di Weierstrass esistono:
$$M =max_{[a, b]} f \quad m=min_{[a, b]} f $$
Siano $x_{M}\ e\ x_{{m}}$ punti di massimo e minimo assoluto di f:
Ci sono due casi:
- $x_{M} e x_{m} \in \{a, b\}$ ovvero massimo e minimo cadono agli estremi:
	$$M=f(x_{M}) = f(x_{m}) = m$$
	dunque la funzione è costante e f'(x) = 0 $(a, b)$
- Se almeno uno dei due punti $x_{M}, \ x_{m}$ sono interni a $[a, b]$	allora Per il teorema di Fermat $$\exists \xi \in(a, b): f'(\xi ) = 0$$
# 2.29

#### Enunciare e dimostrare il teorema di Lagrange. #card
Sia $f : [a, b] \to R$ una funzione continua in $[a, b]$ e derivabile in (a, b). Allora esiste $\xi \in (a, b)$ tale che:
$$\frac{f(a) - f(b)}{a - b} = f'(\xi )$$
DIM
Sia $$g(x) = f(x) - \left[ f(a) + \frac{f(b) - f(a)}{b- a}(x - a) \right]$$
g(x) è continua in $[a, b]$
g(x) è derivabile in (a, b)
g(a) = g(b) = 0
Per il teorema di Rolle $\exists \xi \in (a, b) : g'(\xi ) = 0$
Inoltre:
$$g'(\xi) = f'(x) - \frac{f(b) - f(a)}{b-a}$$
$$g'(\xi) = 0$$ <=> $$f'(\xi) - \frac{f(b)-f(a)}{b-a} = 0$$
$$\frac{f(b)-f(a)}{b-a} = f'(\xi)$$
OSS
Rolle caso particolare di Lagrange
OSS
E' importante che f sia definita in un intervallo

# 2.30

#### Enunciare e dimostrare la caratterizzazione delle funzioni costanti in un intervallo (corollario Lagrange) #card
#### costante
Sia f una funzione derivabile in un intervallo I. Se 
$$f'(x) = 0 \quad \forall x \in I$$
allora f è costante in I.
DIM
Siano $x_{1}, x_{2} \in I$ tale che $x_{1} < x_{2}$. Considerato l'intervallo $[x_{1}, x_{2}]$ si ha che per il teorema di Lagrange $\exists \xi \in (a, b)$ tale che:
$$f(x_{1})-f(x_{2 }) = f'(\xi)(x_{1}-x_{2})$$
essendo f'(x) = 0
$$f(x_{1}) = f(x_{2})$$

# 2.31
#### Enunciare e dimostrare il test di monotonìa. #card
#### crescente, decrescente
Una funzione f derivabile in un intorno I è crescente in I se e solo se
$$f'(x) \geq 0 \quad \forall x \in I$$
Una funzione f derivabile in un intorno I è decrescente in I se e solo se
$$f'(x) \leq 0 \quad \forall x \in I$$
DIM
Supponiamo che f sia crescente e $x_{0}\in I$
allora:
$$\frac{f(x)-f(x_{0})}{x-x_{0}} \geq {0}$$
essendo f crescente.
Allora poiché f è derivabile in I
esiste finito il limite:
$$\lim_{ x \to x_{0} } \frac{f(x)-f(x_{0})}{x-x_{0}} = f'(x_{0})$$
per la permanenza del segno $f'(x_{0})\geq {0}$ 

# 2.32

#### Come si applica il test di monotonìa per classificare i punti critici? #card
Sia $f : (a, b)\to R$ una funzione, $x_{0} \in (a,b)$, r > 0, $I_{r}(x_{0}) \subset(a, b)$.
Se f è crescente in $I_{r}^-$ e f è decrescente in $I_{r}^+$ allora $x_{0}$ è un punto di massimo relativo.
Se f è decrescente in $I_{r}^-$ e f + crescente in $I_{r}^+$ allora $x_{0}$ è un punto di minimo relativo
Poiché f è crescente in un intorno I solo se f'(x) $\geq$ 0 ed è decrescente in un intorno solo se f'(x) $\leq {0}$:
$x_{0}$ è un punto di massimo relativo solo se f'(x) $\geq 0$ $\forall x \in I^-$ e f'(x) $\leq 0$ $\forall x \in I^+$
$x_{0}$ è un punto di minimo relativo solo se f'(x) $\leq 0$ $\forall x \in I^-$ e f'(x) $\geq 0$ $\forall x \in I^+$
Se la derivata ha stesso segno sia in $I^+$ che $I^-$ allora $x_{0}$ è detto ==punto di flesso a tangente orizzontale==

# 2.33

#### Dare le definizioni di derivata destra e sinistra.


# 2.34 

#### Criterio per la derivabilità #card
Sia $f : [a, b]\to R$ una funzione continua in $[a, b]$ e derivabile in $[a, b]$ \ {0} e sia $x_{0} \in (a, b)$
Se esiste finito :
$$\lim_{ x \to x_{0} } f'(x) = L$$
allora $\exists f'(x_{0}) = L$
Se $f'_{-}(x_{0})\neq f'_{+}(x_{0})$ allora la funzione non è derivabile in $x_{0}$

#### Cosa si intende per punto di non derivabilità? Fornirne esempi significativi. #card 
##### Punto angolo
$\exists f'^-=L_{1}\neq L_{2} = f'^+$
Esempio
f(x) = |x|
##### Cuspide
$\exists f'^-=\pm \infty \land \exists f'^+=\mp \infty$
esempio
$f(x) = \sqrt{ |x| }$
##### Flesso a tangente verticale
$\exists f'^-(x) = \pm \infty \land \exists f'^+(x) = \pm \infty$
esempio
$f(x) = \sqrt[3]{x  }$

# 2.35

#### Come si definiscono le derivate successive? #card
Sia f'(x) una funzione derivabile in (a, b). Allora la sua derivata: 
$x \mapsto f'(x)$ può essere derivabile in (a, b). La derivata di f'(x) in x si chiama ==derivata seconda==:
$$x \mapsto f''(x), \quad D^2(f(x)), \quad \frac{d^2f(x)}{dx^2}$$

#### Come si può utilizzare la derivata seconda per determinare la natura di punti critici? #card
Sia f : (a, b) -> R derivabile due volte in (a, b), e $x_{0} \in (a, b)$ un punto critico per f. Se f''($x_{0}$) > 0 allora $x_{0}$ è un punto di minimo relativo. Se f''($x_{0}$) < 0 allora $x_{0}$ è un punto di massimo relativo. 

# 2.36

#### Dare le definizioni di funzioni convesse e concave. #card 
Sia f : (a, b) -> R un funzione. Siano $x_{1}, x_{2} \in (a, b)$. Siano P1 = ($x_{1}, f(x_{1})$) e P2 = ($x_{2}, f(x_{2})$). La retta passante per P1 e P2 ha equazione:
$$y = f(x_{1}) + \frac{f(x_{1}) - f(x_{2})}{x_{1}-x_{2}}(x-x_{1})$$
Per x che varia tra $x_{1} \ e\ x_{2}$ descrive il segmento P1P2.
La funzione f è detta convessa in (a, b) se $\forall x_{1}, x_{2} \in (a, b)$ il grafico di f compreso tra P1 e P2 sta al di sotto del segmento P1P2.
$$f(x) \leq f(x_{1}) + \frac{f(x_{1})-f(x_{2})}{x_{1}-x_{2}}(x-x_{1})$$
$\forall x \in [x_{1}, x_{2}]$
La funzione si dice concava se è al di sopra del segmento P1P2.
$$f(x) \geq  f(x_{1}) + \frac{f(x_{1})-f(x_{2})}{x_{1}-x_{2}}(x-x_{1})$$
$\forall x \in [x_{1}, x_{2}]$
OSS.
f è convessa in (a, b) <=>  - f è concava in (a, b)


# 2.37

#### Enunciare il test del primo ordine per la convessità e la concavità. #card
Sia f : (a, b) -> R derivabile in (a, b). Risulta f convessa se:
$$f(x) \geq f(x_{0}) + f'(x_{0})(x-x_{0}) \quad \forall x,x_{0}\in(a, b)$$
E' concava se: $$f(x) \geq f(x_{0}) + f'(x_{0})(x-x_{0}) \quad \forall x,x_{0}\in(a, b)$$

# 2.38

#### Enunciare il test del secondo ordine per la convessità e la concavità. #card 
Sia f : (a, b) -> R derivabile due volte in (a, b). Allora risulta che f è convessa in (a, b) se: $$f''(x) \geq 0 \quad \forall x \in (a, b)$$
E' concava se $$f''(x) \leq 0 \quad \forall x \in (a, b)$$
# 2.39

#### Cosa si intende per punto di flesso? #card
Un punto di flesso è un punto in cui si passa dalla concavità alla convessità o viceversa dalla convessità alla concavità.


# 2.40

#### Illustrare il procedimento generale per lo studio del grafico di una funzione #card
- Dominio (insieme di definizione)
- limiti agli estremi del dominio
- Segno di f(x)
- Asintoti
- Punti di massimo e minimo relativo + intervalli di monotonia
- Convessità concavità flessi
- Grafico qualitativo

# 2.41

#### Enunciare il teorema di de l’l’Hopital #card
Siano f e g due funzioni derivabili in (a, b) \ $\{x_{0}\}$, essendo $x_{0}\in(a, b)$ tale che:
$$\lim_{ x \to x_{0} } f(x)=\lim_{ x \to x_{0} } g(x) = 0$$
oppure:
$$\lim_{ x \to x_{0} } f(x)=\lim_{ x \to x_{0} } g(x) = \pm \infty$$

se $g'(x_{0}) \neq  0, \forall x \in (a, b) \text{\\} \{x_{0}\}$
e se esiste
$$\lim_{ x \to x_{0} } \frac{f'(x)}{g'(x)}$$
allora
$$\lim_{ x \to x_{0} } \frac{f(x)}{g(x)} = \lim_{ x \to x_{0} } \frac{f'(x)}{g'(x)}$$
OSS.
vale anche se $x \to x_{0}^{\pm}$
vale anche per $x\to \pm \infty$ se f e g sono derivabili per qualche (a, $+\infty$) (oppure ($-\infty$, a)) per qualche valore di $a \in R$

# 2.42

#### Dare le definizioni di polinomio di Taylor e di resto #card
#### polinomio di Taylor
Sia f: (a, b) -> R una funzione derivabile n volte nel punto $x_{0} \in (a, b)$.
Il polinomio:
$$P_{n}(x)=f(x_{0}) + f'(x_{0})(x-x_{0})+\frac{f''(x_{0})}{2!}(x-x_{0})^2+\dots+\frac{f'''(x_{0})}{3!}(x-x_{0})^3$$
è detto polinomio di Taylor.
 con resto n-esimo:
 $R_{n}(x) = f(x) - P_{n}(x)$

# 2.43

#### Scrivere e dimostrare la formula di Taylor con resto di Peano #card
Siano f : (a, b) -> R, $x_{0} \in (a, b)$ , f derivabile n volte in $x_{0}$. Allora ==la formula di Taylor con resto di Peano==: 
$$f(x) = P_{n}(x) + o((x- x_{0})^n)$$
ovvero
$$R_{n}(x) = o((x - x_{0})^n)$$
DIM
Bisogna dimostrare che $$\lim_{ x \to x_{0} } \frac{R_{n}(x)}{(x-x_{0})^n} = 0$$
ovvero
$$\lim_{ x \to x_{0} } \frac{f(x)-P_{n}(x)}{(x-x_{0})^n}$$
$\lim_{ x \to x_{0} } \frac{f(x)- \left[  f(x_{0}) +f'(x_{0})(x-x_{0}) + \frac{f''(x_{0})}{2!}(x-x_{0})^2 + \dots+\frac{f^(n)(x_{0})}{n!}(x-x_{0})^n  \right]}{(x-x_{0})^n}$
Applicando il teorema di de l'Hopital n-1 volte
$\lim_{ x \to x_{0} } \frac{f'(x)- \left[f'(x_{0}) + \frac{2}{2}f''(x_{0})(x-x_{0})  + \dots+\frac{n}{n!}f^{(n)}(x_{0})(x-x_{0})^{(n-1)}  \right]}{n(x-x_{0})^{n-1}}$
$\lim_{ x \to x_{0} } \frac{f''(x)- \left[f'(x_{0}) + \frac{2}{2}f''(x_{0})(x-x_{0})  + \dots+\frac{n}{n!}f^{(n)}(x_{0})(x-x_{0})^{(n-1)}  \right]}{(n(n-1)(x-x_{0})^{n-2}}$
...
$\lim_{ x \to x_{0} } \frac{f^{(n-1)}(x)- \left[f^{(n-1)}(x_{0}) + \frac{n!}{n!}f^{(n)}(x_{0})(x-x_{0}) \right]}{n!(x-x_{0})}$
$$\lim_{ x \to x_{0} } \frac{1}{n!}[\lim_{ x \to x_{0} } ] $$

# 2.44

#### Scrivere la formula di di Taylor con resto di Lagrange. #card
Se la funzione è derivabile n + 1 volte in (a, b), $x_{0} \in (a, b)$
Allora.
$$f(x) = P_{n}(x) + \frac{f^{(n+1)}(\xi)}{(n+1)!}(x-x_{0})^{n+1}$$
per qualche $\xi$ tra x e $x_{0}$ $$R_{n}(x) = \frac{f^{(n+1)}(\xi)}{(n + 1)!}(x-x_{0})^{n+1}$$
Questo è detto resto di Lagrange.

