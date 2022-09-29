import math

def check_number(num: str):
    try:
        try:
            x = int(num)

            return True

        except ValueError:
            x = float(num)

            return True
    except ValueError:
        return False

def getNum(eq: str):
    num = input(f"Enter {eq}: ")

    while check_number(num) == False:
        print("Invalid input. Try again.")
        num = input(f"Enter {eq}: ")

    return float(num)

def calculate(a: float, b: float, c: float):
    D = (b * b) - (4 * a * c)

    if D > 0:
        x1 = (-b + math.sqrt(D)) / (2 * a)
        x2 = (-b - math.sqrt(D)) / (2 * a)

        print("Result:")
        print(f"x1 = {x1}")
        print(f"x2 = {x2}")
    elif D == 0:
        x = -b / (2 * a)

        print(f"Both roots are equal to {x}")
    else:
        print("This equation has no roots :(")

def quadratic_equation():
    print("Calculate quadratic equation!")
    print("aX^2 + bX + c = 0")


    a = getNum("a")
    b = getNum("b")
    c = getNum("c")

    calculate(a, b, c)

def main():
    again = "y"

    while again.lower() == "y":
        quadratic_equation()

        print("Calculate more?")
        print("y [yes]")
        print("n [no]")

        again = input("")

main()