a = []
s = 1
print('Вводите элементы. Введите "0" для конца.')
while s != 0:
    s = int(input('Введите элемент: ').strip())
    a.append(s)
    print(a)
n = int(input('Сколько вы хотите исключить элементов: '))
for i in range(n):
    print(a.pop())
print(f"Конечный стек: {a}")