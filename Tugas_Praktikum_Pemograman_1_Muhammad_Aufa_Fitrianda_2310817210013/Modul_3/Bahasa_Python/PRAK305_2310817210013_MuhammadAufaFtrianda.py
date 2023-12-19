seconds = int(input("Masukan Jumlah Detik :"))
days = seconds // 86400
seconds %= 86400
hours = seconds // 3600
seconds %= 3600
minutes = seconds // 60
seconds %= 60
if days >= 1:
    print(f"{days} hari {hours:02d}:{minutes:02d}:{seconds:02d}")
elif days == 0:
    print(f"{hours:02d}:{minutes:02d}:{seconds:02d}")