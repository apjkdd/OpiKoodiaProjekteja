import random

def main():

    #muuttumattomat arvot
    MIN = 1
    MAX = 100

    vastaus = 0
    arvaus = 0
    arvauksia = 0

    #hakee kellonajasta siemenluvun
    random.seed()
    #generoi satunnaisluvun MIN ja MAX lukujen väliltä
    vastaus = random.randint(MIN, MAX)

    #ilmoitus ja ohje pelaajalle
    print("\nPelataan peli!")
    print("Arvaa luku väliltä 1-100\n")

    #pyydetään arvaus ja ilmoitetaan onko luku pienempi vai suurempi kuin pelaajan arvaus.
    while True:
        arvaus = int(input("\nSyötä arvauksesi: "))

        if arvaus < vastaus:
            print("Luku on suurempi. Arvaa uudelleen\n")

        elif arvaus > vastaus:
            print("Luku on pienempi. Arvaa uudelleen\n")

        else:
            print("Oikein!\n")
            break

        # laskee pelaajan arvaukset
        arvauksia += 1

    print("Vastaus:", vastaus)
    print("Arvauksia:", arvauksia)
    print("-------------------")

#kutsuu main-funktiota    
main()
