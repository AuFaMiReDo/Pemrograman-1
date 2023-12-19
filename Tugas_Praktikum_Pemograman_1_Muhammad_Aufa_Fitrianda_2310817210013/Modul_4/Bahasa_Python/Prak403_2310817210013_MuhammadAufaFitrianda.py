angka1, angka2 =  map(int, input("Masukan Dua Angka Anda\t: ").split())

i = angka1
j = angka2

if angka1 > angka2:
    for i in range(i, j, -1):
        print(f"{i} {j} -", end=" ")
        j += 1
else:
    for i in range(i, j):
        print(f"{i} {j} -", end=" ")
        j -= 1

print(angka2,angka1)