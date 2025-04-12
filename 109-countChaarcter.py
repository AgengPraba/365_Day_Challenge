# The main idea is to count all the occurring characters in a string. If you have a string like aba, then the result should be {'a': 2, 'b': 1}.

# What if the string is empty? Then the result should be empty object literal, {}.


def count(s):
    result = {}
    if len(s)>0:
        alphabet = set(s)
        for i in alphabet :
            result[f'{i}'] = s.count(i)
        return result
    return {}