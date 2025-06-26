libri
- sperimentare la fisica corso di laboratorio...
- mazzo...holdy


##### Grandezze della Meccanica

| grandezza | unità fondamentale |
| --------- | ------------------ |
| $[L]$     | m                  |
| $[T]$     | s                  |
| $[M]$     | Kg                 |

L, T per cinematica
L, T, M per dinamica

$$\vec{F} = m\vec{a}$$
prodotto tra grandezze non omogenee formano nuove grandezze


#### Pendolo Matematico
![[Fisica/imgs/Tldraw 2025-02-18 12.08PM.md]]
Per calcolare il periodo $[T]$ 
$$[T]^1 = [L]^\alpha \cdot[M]^\beta \cdot[g]^\gamma$$
$$[g]^\gamma = [L]^\gamma \cdot[T]^{-2\gamma}$$
$$[T]^1 = [L]^{\alpha + \gamma }[M]^\beta [T]^{-2\gamma} $$
$\beta  = 0$ poiché la massa non c'è nel risultato
$\alpha + \gamma = 0$ poiché la lunghezza non c'è nel risultato
$-2\gamma = 1$
=>
$$\begin{cases}
\beta = 0 \\
\gamma = -\frac{1}{2} \\
\alpha = \frac{1}{2}
\end{cases}$$

$$T \propto  \sqrt{ \frac{l}{g} }$$

### Cinematica
- studio del moto indipendentemente dalla sua causa


Adottare un modello per descrivere il moto di un corpo:
Punto materiale
Si può trascurare la dimensione del corpo rispetto al moto.

1D (semplice)![[Fisica/imgs/Tldraw 2025-02-18 12.28PM.md]]
$$\vec{x_{1}} = x_{1}  \hat{x}$$
$$\vec{x_{2}} = x_{2} \hat{x}$$
$$\vec{V}_{media} = \frac{\vec{x_{2}}-\vec{x_{1}}}{t_{2}-t_{1}} $$
$$\vec{V}_{m} = \lim_{ \Delta t \to 0 } \frac{\Delta \vec{x}}{\Delta t} = \frac{d \vec{x}}{d t} $$
$$\vec{V}_{m} = \frac{1}{t-t_{0}} \int_{t_{0}}^t \vec{V_{ist}(t)} dt$$
L'unica definizione di velocità che si userà:
$$\vec{V} = \frac{d \vec{x}}{dt}$$
$$d \vec{x} = \vec{ V} dt$$
##### Legge oraria
$$\vec{X}(t) = \vec{x_{0}} + \vec{v} t

$$

$$\Delta  \vec{x} = x_{2} - x_{1} = \int_{t_{1}}^{t_{2}} \vec{v} dt$$
se $\vec{v}$ è costante
allora
$$\Delta  \vec{x} = \vec{v}\int_{0}^{t} dt'$$
$$\Delta  \vec{x} = \vec{v}t$$
$$\vec{X}(t) = \vec{x_{0}} + \vec{v}t$$
![[Fisica/imgs/Tldraw 2025-02-18 1.12PM.md]]
la pendenza della retta è rappresentata dalla velocità

##### Accelerazione

$$\vec{a} =\lim_{ \Delta t \to 0 } \frac{\Delta \vec{v}}{\Delta t} = \frac{d \vec{v}}{dt} = \frac{d^2 \vec{x}}{d t^2}$$
accelerazione costante


Legge oraria
$$x(t) = x_{0} + v_{0} \cdot t + \frac{1}{2}at^2$$
Caduta del grave
![[Fisica/imgs/Tldraw 2025-02-18 1.38PM.md]]



$$V(t) = gt$$
$$x(t) = -h + \frac{1}{2}gt^2$$
$$x(t - \tau ) = -h + \frac{1}{2}g\tau^2 = 0$$
$$\tau = \pm \sqrt{ \frac{2h}{g} }$$
#### Oscillatore armonico
$$x(t) = A\sin(\omega t + \phi )$$
$\phi$ fase
$\omega$ pulsazione
$$v(t) = \omega A\cos(\omega t+\phi )$$
$$$$
![[Fisica/imgs/Tldraw 2025-02-18 1.54PM.md]]

Rewarding