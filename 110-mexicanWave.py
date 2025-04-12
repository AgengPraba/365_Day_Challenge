# wave("hello") => ["Hello", "hEllo", "heLlo", "helLo", "hellO"]

def wave(people):
    result = []
    for i in range(len(people)):
        if people[i] != " ":
            word = people[:i] + people[i].upper() + people[i+1:]
            result.append(word)
    return result
