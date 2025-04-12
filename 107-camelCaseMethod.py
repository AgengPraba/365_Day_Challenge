Examples (input --> output):
"hello case" --> "HelloCase"
"camel case word" --> "CamelCaseWord"

def camel_case(s):
    return ''.join(s.title().split())
    