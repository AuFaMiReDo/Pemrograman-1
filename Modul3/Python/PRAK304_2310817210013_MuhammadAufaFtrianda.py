nilai = int(input("Masukan Angka Anda : "))

if nilai == 0:
    print("")
    print("Nol")
elif 1 <= nilai <= 9:
    print("")
    print("Satuan")
elif 10 <= nilai <= 19:
    print("")
    print("Belasan")
elif 20 <= nilai <= 99:
    print("")
    print("Puluhan")
else:
    print("")
    print("Anda Menginput Melebihi Limit")
