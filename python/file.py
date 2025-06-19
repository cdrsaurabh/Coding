#create a new file through python
def create_file():
    with open("sample.txt","w") as f:
        f.write("my name is Saurabh Kumar.\nI am pursuing BSC IT.")
        f.write("\nI am pracatising I/o operatios in Python")
# create_file()

def readmode():    
    with open("sample.txt","r") as f:
        data = f.read()
        print(data)
# readmode()
def writemode():# total file data delete and start from new
    with open("sample.txt","w") as f:
        f.write("This is a practise of I/O in Python")
# writemode()
def appendmode():
    with open("sample.txt","a") as f:
        f.write("\nThis is my third line in through append mode")
# appendmode()
def readplus():
    with open("sample.txt","r+") as f:
        f.write("I am writing this data through read plus mode")
        #upar ka data ko pichhle data jo file me hai uspe overwrite krta hai
# readplus()
def writeplus():
    with open("sample.txt","w+") as f:
        f.write("I am writing this through write plus mode")
        #whole file data is deleted then write from beginning.
# writeplus()
def appendplus():
    with open("sample.txt","a+") as f:
        f.write("I am writing this through append plus mode")
# appendmode()

# DELETING A FILE THROUGH PYTHON
def delete_file():
    import os
    os.remove("sample.txt")
# delete_file()    