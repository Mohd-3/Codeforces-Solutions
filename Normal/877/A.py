names = ["Danil", "Olya", "Slava", "Ann", "Nikita"]
s = input()
cnt = 0
for name in names:
	cnt += s.count(name)
print("YNEOS"[(cnt!=1)::2])