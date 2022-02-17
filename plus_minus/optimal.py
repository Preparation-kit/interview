#!/usr/bin/python3


def plus_Minus(arr):

    positive_counter = 0
    negative_counter = 0
    zero_counter = 0
    size_arr = len(arr)

    for item in arr:

        if item > 0:
            positive_counter += 1
        elif item < 0:
            negative_counter += 1

    zero = size_arr - (positive_counter + negative_counter)

    print("{:.6f}".format(positive_counter / size_arr))
    print("{:.6f}".format(negative_counter / size_arr))
    print("{:.6f}".format(zero / size_arr))


if __name__ == '__main__':

    q = int(input().strip())

    while(q):

        n = int(input().strip())

        arr = list(map(int, input().rstrip().split()))

        plus_Minus(arr)

        print("---------------------------");

        q -= 1
