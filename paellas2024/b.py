import sys
competidores = {}

def get_value(identifier):
    return competidores[identifier]


for line in sys.stdin:
    identifier, a, b = line.split(" ")
    competidores[identifier] = int(a)/int(b)
    
for competidor in sorted(competidores, key=get_value):
    print(competidor)
