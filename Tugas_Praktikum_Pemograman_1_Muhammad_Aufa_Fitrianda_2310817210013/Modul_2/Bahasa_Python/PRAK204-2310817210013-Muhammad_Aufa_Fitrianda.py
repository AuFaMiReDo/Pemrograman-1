angka = input().split()
phi = 22/7
volume = phi * float(angka[0]) * float(angka[0]) * float(angka[1])
luas = 2 * phi * float(angka[0]) * (float(angka[0]) + float(angka[1]))
keliling = 2 * phi * float(angka[0])
print(f"Volume \t = {volume:.2f}")
print(f"Luas \t = {luas:.2f}")
print(f"Keliling = {keliling:.2f}")