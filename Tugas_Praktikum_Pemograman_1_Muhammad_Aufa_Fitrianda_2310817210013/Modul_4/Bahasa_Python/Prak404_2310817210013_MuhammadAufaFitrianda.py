while True:
    print("Pilih program")
    print("1. Penjumlahan")
    print("2. Pengurangan")
    print("3. Perkalian")
    print("4. Pembagian")
    print("5. Exit")
    pilihan = int(input("Masukkan Pilihan: "))

    if pilihan == 5:
        print(f"Terimakasih, telah menggunakan kalkulator Muhammad Aufa Fitrianda")
        break  

    if pilihan < 1 or pilihan > 4:
        print("Input anda salah, silahkan coba lagi")
        continue

    nilaiPertama = float(input("Masukkan nilai pertama: "))
    nilaiKedua = float(input("Masukkan nilai kedua: "))

    if pilihan == 1:
        hasil = nilaiPertama + nilaiKedua
        operasi = "Penjumlahan"
    elif pilihan == 2:
        hasil = nilaiPertama - nilaiKedua
        operasi = "Pengurangan"
    elif pilihan == 3:
        hasil = nilaiPertama * nilaiKedua
        operasi = "Perkalian"
    elif pilihan == 4:
        if nilaiKedua != 0:
            hasil = nilaiPertama / nilaiKedua
            operasi = "Pembagian"
        else:
            print("Pembagian oleh nol tidak diizinkan.")
            continue

    print(f"Hasil {operasi} antara {nilaiPertama:.2f} dengan {nilaiKedua:.2f} adalah {hasil:.2f}")
