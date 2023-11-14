kelipatan = int(input("Masukkan bilangan kelipatan: "))
simbol = input("Masukkan simbol yang akan digunakan: ")

for i in range(1, 51):
    if i % kelipatan == 0:
        print(simbol, end=' ')
    else:
        print(i, end=' ')
