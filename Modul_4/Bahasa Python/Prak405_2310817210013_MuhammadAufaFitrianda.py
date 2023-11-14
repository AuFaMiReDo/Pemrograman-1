n, kelipatan = map(int,input("Masukkan Nilai N dan Kelipatan Anda\t: ").split())

total = 0

for i in range(1, n + 1):

    baris = 0

    for j in range(i, 0, -1):
        
        baris += j * kelipatan
        if j == i:
            print(f"({j} * {kelipatan})", end="")
        else:
            print(f" + ({j} * {kelipatan})", end="")

    print(f" = {baris}")
    total += baris

print(total)
