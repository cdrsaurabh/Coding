class person():
    def __init__(self,n,o):
        print("This is a new person")
        self.name = n
        self.occ = o


    def info(self):
        print(f"{self.name} is a {self.occ}")

a = person("Saurabh","learner")
# a.name = "Saurabh"
# a.occ = "learner"
b = person("Harry","Coder")
# b.name = "Harry"
# b.occ = "coder"
a.info()
b.info()