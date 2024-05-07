from random import randrange

while True:
    solandoan = 0
    somay = randrange(1, 101)
    win = False
    while solandoan < 7:
        solandoan += 1
        songuoi = int(input("May doan [1..100],moi ban doan:"))
        print("Ban doan lan thu", solandoan)
        if somay == songuoi:
            print("Chuc mung ban doan dung,so may la:", somay)
            win = True
            break
        elif somay > songuoi:
            print("Ban doan sai,so may>so ban")
        elif somay < songuoi:
            print("Ban doan sai,so may<so ban")
    if win == False:
        print("GAME OVER!")
    h = input("Ban co muon tiep tục khong(c/k)?")
    if h == "k":
        break
print("BYE!Hen gap lai")
