---
cards-deck: Analisi 1/1.18-1.22 (n.complessi)
---


# 1.18


#### Introdurre l’insieme C dei numeri complessi. Come si eseguono le operazioni algebriche, utilizzando la forma algebrica? #card
Un numero complesso è definito da una parte reale e una parte complessa.
La sua forma algebrica è la seguente:
$$ z = a+ib $$
$a, b \in R, \ i^2=-1$
a è detta parte reale e si indica con Re z, b è la parte immaginaria e si indica con Im b.
i è detta unità immaginaria.
Le operazioni algebriche si svolgono usando le regole valide in R.
$z, w \in C$
$a+bi + c + di = a+c + (b+d)i$
#### Reciproco
$$\frac{1}{z} = \frac{1}{a+ib}=\frac{1}{a+ib}\cdot \frac{a-ib}{a-ib} =\frac{a-ib}{a^2+b^2}$$
#### Modulo
$$|z|=\sqrt{ a^2+b^2 }$$
#### Coniugato
$$\overline{z} = a -ib$$
quindi $z \cdot \overline{z} = |z|^2$
e $\frac{1}{z} = \frac{\overline{z}}{|z|^2}$


# 1.19


#### Illustrare la forma trigonometrica di un numero complesso, la formula di Eulero e la forma esponenziale. #card 
Un numero complesso è anche individuato da una coppia di numeri reali (a, b) che può essere individuato con un punto nel piano cartesiano.
Ponendo:
$$
\cos \theta = \frac{a}{r} \qquad \sin \theta=\frac{b}{r}
$$
dove r è il modulo di z.
L'angolo $\theta$ è detto argomento principale di z.
Dunque $$z = r(\cos\theta+\sin\theta )$$
questa è detta forma trigonometrica
#### Formula di eulero
$$e^{i\theta} = \cos\theta+i\sin\theta$$
#### Forma esponenziale
$$z = r\cdot e^{i\theta}$$


# 1.20


#### Scrivere e dimostrare le formule di de Moivre per il prodotto e le potenze di numeri complessi #card
Sia $z = r(\cos\theta+\sin\theta) \in C$ e $n \in N$  allora
$$z^n = r^n[\cos n\theta+i\sin n\theta]$$
inoltre si ha che:
$$z, w \in C$$
$$z\cdot w=r_{z}\cdot w_{z}(\cos(\phi + \theta) + i \sin(@\phi + \theta)))$$
Dimostrazione:
Usando la forma esponenziale:
$$z^n = (re^{i\theta})^n=r^ne^{in\theta}= r^n(\cos n\theta + i\sin n\theta)$$
inoltre
$$z\cdot w=r_{z}e^{i\phi}\cdot r_{w}e^{i\theta} = r_{z}r_{w}e^{i(\phi+\theta)}=r_{z}r_{w}(\cos (\phi+\theta)+i\sin (\phi+\theta))$$

# 1.21


#### Descrivere il significato geometrico di prodotto e somma in C #card
Seguendo le formule di de Moivre si può osservare che moltiplicare un numero complesso per un altro equivale a ruotare il primo rispetto al centro di un angolo pari all'argomento principale del secondo e di dilatare il primo proporzionalmente al modulo del secondo.


# 1.22


#### Scrivere e dimostrare la formula sulle radici n−esime di un numero complesso. #card
$$z_{h} = \sqrt[n]{ R }\cdot e^{i\theta_{h}} \qquad\theta_{h}=\frac{\phi+2h\pi}{n} \ \ \ \ per \ h=0,1,\dots,n-1$$
Dimostrazione:
$$(z)^n=r^n\cdot e^{in\theta}=R \cdot e^{i\phi}$$
quindi deve valere
$$\begin{cases}
r^n=R\\n\theta=\phi+2k\pi \ k \in Z
\end{cases}$$
eseguendo la divisione con resto per n:
$k = sn + h$     h è il resto e può assumere valori da 0, 1, 2, ..., n-1
quindi
$$\theta =\frac{\phi+2(sn+h)\pi}{n} = \frac{\phi+2h\pi}{2}+2s\pi$$
basta quindi prendere $\theta = \frac{\phi+2h\pi}{2}$ con h = 0, 1, 2, ..., n-1


#### Come sono disposte le radici n−esime dell’unità? #card
Le radici ennesime di dell'unità immaginaria (i) nel piano complesso appartengono a una circonferenza di raggio 1 circoscritta a un poligono regolare i cui vertici sono le radici stesse.


