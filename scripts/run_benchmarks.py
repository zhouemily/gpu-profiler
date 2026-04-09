import subprocess

nodes = [1000, 5000, 10000]

for n in nodes:
    print("Running benchmark:", n)
    subprocess.run(["../build/gpu_profiler", str(n), "2"])
