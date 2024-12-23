# 2.46

#### Dare le definizioni di primitiva e di integrale indefinito. Illustrare le proprietà dell’integrale indefinito #card
Sia f: (a, b) -> R e F : (a, b) -> R, con F derivabile in (a, b). F si dice primitiva di f o antiderivata se:
$$F'(x) = f(x) \quad \forall x \in (a, b)$$

==Regole==
$$\int [\alpha f(x)+\beta g(x)]dx=\alpha \int f(x)dx+\beta \int g(x)dx \quad \forall \alpha, \beta \in R$$

![[Pasted image 20241220110653.png]]

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

# 2.49

#### Scrivere e dimostrare la formula di integrazione per sostituzione (per integrali indefiniti) #card
Siano f, F, g funzioni definite in (a, b). Supponiamo che F, g derivabili in (a, b) e che F sia una primitiva di f.
Per la derivazione della funzione composta.
$$\frac{d[F(g(x))]}{dx}=F'(g(x))g'(x) = f(g(x))g'(x)$$
Dunque $F(g(x))$ è una primitiva di f(g(x))g'(x).
Perciò vale la seguente formula di integrazione per sostituzione:
$$\int f(g(x))g'(x)dx=\int f(u)du \quad con\ u = g(x)$$


# 2.48

#### Scrivere e dimostrare la formula di integrazione per parti (per integrali indefiniti) #card
Siano f, g : (a, b) -> R due funzioni derivabili. Per la regola di derivazione del prodotto
$$D[f(x)g(x)] = f'(x)g(x) + f(x)g'(x)$$
Integrando i due membri
$$\int D[f(x)g(x)] = \int[f'(x)g(x)]dx+\int[f(x)g'(x)]dx$$
$$f(x)g(x) = \int[f'(x)g(x)]dx+\int[f(x)g'(x)]dx$$
quindi vale la seguente formula di integrazione per parti:
$$\int[f'(x)g(x)]dx = f(x)g(x) - \int[f(x)g'(x)]dx$$