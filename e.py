def print_line_of_e(length):
    for _ in range(length):
        print("E", end="")
    print()


def e_e(height, width):
    line_len = height + width
    second_point = (height - (2 * width)) // 2
    last_point = height - width
    for e in range(width):
        print_line_of_e(line_len)
    for e in range(last_point - width):
        if e == second_point:
            for ee in range(width):
                print_line_of_e(line_len - width)
        else:
            print_line_of_e(width)
    for e in range(width):
        print_line_of_e(line_len)
    print()


e_e(100, 12)


def debug(msg: str) -> None:
    print(msg)


print("ez")
