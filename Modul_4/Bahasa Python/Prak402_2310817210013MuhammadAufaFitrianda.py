angka = int(input("Masukkan Angka Anda \t: "))

for ganjil in range(1,angka + 1) :
    
    if (ganjil % 2 != 0) :
        print(ganjil, end=" ")

print()

for genap in range(angka,1,-1) :
    
    if (genap % 2 == 0) :
        print(genap, end=" ")


