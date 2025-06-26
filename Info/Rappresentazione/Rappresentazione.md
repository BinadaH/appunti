
#### Trasformazioni #card
binario -> dec
somma con potenze di 2
dec -> binario
metodo dei resti
Con n bit si possono rappresentare numeri in $[0,2^n - 1]$


![[Pasted image 20250115162117.png]]



#### Numero minimo di cifre #card
$$n = \log_{base}(val + 1)$$
arrotondato per eccesso.
Es in binario.
val = 74$_{dec}$
$$\log_{2}(75) =6.2\dots \to {7}$$
7 bit per rappresentare 74 in binario

#### Overflow #card
Se la somma non è rappresentabile nello stesso numero di bit avviene l'overflow e il risultato è errato. C'è un riporto nella somma dei bit più significativi che viene perduto.

#### Modulo e segno #card
Il bit più significativo indica il segno (bit di segno: 1 negativo, 0 positivo) 
Con $n\geq 2$ bit si possono rappresentare $2^n$ numeri in $(-2^{n-1}, 2^{n-1})$
Numero minore di bit
$$n = \lceil    \log_{2}(val + 1)\rceil+ 1$$
es.
val = 74
n = $\lceil \log_{2}(75) \rceil + 1 = \lceil 6.2\dots \rceil +1 = 7 + 1 = 8$


#### Complemento a 2 #card
Il primo bit (bit di segno) ha peso negativo
La sequenza:
$$b_{n-1}, b_{n-2}, b_{0}$$
diventa
$$b_{n-1} \times(-2^{n-1}) + b_{{n - 2}} \times(2^{n-2}) +\dots$$
Lo zero è considerato positivo
#### Opposto
invertendo ogni bit e aggiungendo 1
#### Conversione da decimale
Se $D\geq {0}$
si converte il numero D in binario e si aggiunge il bit di segno 0 in testa.
Se $D < 0$
Si converte in numero D in binario trascurando il segno e dopo aver aggiunto il bit di segno 0 in testa, si inverte il numero trovando l'opposto.
Con n bit si possono rappresentare i numeri in $[-2^{n-1}, 2^{n-1})$
#### Estensione e riduzione
estensione: si replica il bit più significativo
riduzione: ci si ferma alla prima sequenza 10 o 01
#### Numero minimo di bit
se val $\geq$ 0
$$n = \lceil \log_{2}(val + 1) \rceil +1$$
se val < 0
$$n = \lceil \log_{2}(|val|) \rceil + 1 $$
#### Rilevare overflow
se gli addendi sono discordi non si verifica mai
se gli addendi sono concordi avviene solo se il risultato è discorde (addendi +, ris -) (addendi -, ris +)
j