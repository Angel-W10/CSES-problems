
def min_diff(sorted_array):
    l = len(sorted_array)
    sum1 = sorted_array[l-1]
    sum2 = sum(sorted_array) - sum1
    print("s1 = %d" %sum1)
    print("s2 = %d" %sum2)

    d1 = 10000000000
    d2 = abs(sum2 - sum1)
    print(d1, d2)

    i = 0

    while(d2<d1):
        d1 = d2

        sum1 += sorted_array[i]
        sum2 -= sorted_array[i]
        print("s1 = %d" %sum1)
        print("s2 = %d" %sum2)

        d2 = abs(sum2 - sum1)
        print(d1, d2)
        i+=1

    return d1



if __name__ == "__main__":

    arr = [1, 3, 4, 5, 7]
    print(min_diff(arr))