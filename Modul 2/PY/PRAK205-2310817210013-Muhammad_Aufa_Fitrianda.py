import math
angka = input().split()
a, b = map(int,angka)
c = int(math.sqrt( b ** 2 - a ** 2))
keliling = int(a + b + c)
luas = int(c * a) / 2

print("\n")
print("Alas = %d cm" % c)
print("Tinggi = %d cm" % a)
print("Keliling = %d cm" % keliling)
print("Luas = %d cm^2" % luas)