def main():
    #    n = input("N: ")
    n = 20
    tree(n)

def tree(n):
    n = int(n)
    for i in range(n):

        for j in range(i + 1):
            print("#", end="")

        for k in range(n - i - 1):
            print(" ", end="")

        print("  ", end="")

        for l in range(n - i - 1):
            print(" ", end="")

        for m in range(i + 1):
            print("#", end="")

        print("")

if __name__=="__main__":
    main()
