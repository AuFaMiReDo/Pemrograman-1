import math
alas = 5
tinggi = 12
miring = round (math.sqrt(alas*alas+tinggi*tinggi))
keliling = round (alas+tinggi+miring)
luas = round (alas*tinggi/2)
print("Diketahui :")
print(f"Alas = {alas}cm")
print(f"Tinggi = {tinggi}cm")
print("Jawab :")
print(f"Sisi A = {alas} cm") 
print(f"Sisi B = {miring} cm")
print(f"Sisi C = {tinggi} cm")
print(f"Keliling = {keliling} cm")
print(f"Luas = {luas} cm")