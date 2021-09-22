# -*- coding: utf-8 -*-
a1 = float(input('Введіть коефіцієнт a1: '))
b1 = float(input('Введіть коефіцієнт b1: '))
c1 = float(input('Введіть праву частину c1: '))
a2 = float(input('Введіть коефіцієнт a2: '))
b2 = float(input('Введіть коефіцієнт b2: '))
c2 = float(input('Введіть праву частину c2: '))

determ = a1 * b2 - a2 * b1
determ1 = c1 * b2 - b1 * c2
determ2 = a1 * c2 - a2 * c1

x = determ1 / determ
y = determ2 / determ

print("Відповідь: x=" + str(x) + ", y=" + str(y))