import time
start = time.time()
soma = sum(range(1, 100000001))
end = time.time()
print(f"Tempo Python: {end - start} segundos")
