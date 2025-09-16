# import sys
from rich import print
# from time import sleep
import time

def printLyrics():
    lines = [
        ("Uski Aankhon Mein Faila Kajal", 0.06),  #1
        ("Baaton Se Karti Ghayal", 0.05),  #2
        ("Sanson Mein Uska Hi Hai Naam", 0.07),  #3
        ("Meri Neenden Udi Hai Jab Se", 0.08),  #4
        ("Tu Aa Gayi Jeevan Mein", 0.08),  #5
        ("Raushan Kar De Tu Mujhko Aaj", 0.068), #6
        ("Uski Aankhon Mein Faila Kajal", 0.07),  #7
        ("Baaton Se Karti Ghayal", 0.08),  #8
        ("Sanson Mein Uska Hi Hai Naam", 0.069), #9
        ("Meri Neenden Udi Hai Jab Se", 0.035), #10
        ("Tu Aa Gayi Jeevan Mein", 0.05), #11
        ("Raushan Kar De Tu Mujhko Aaj", 0.03), #12
    ]
    
    for line, delay in lines:
        for char in line:
            print(char, end='', flush=True)
            time.sleep(delay)
        print()  # New line after each lyric line
        time.sleep(0.5)  # Pause between lines

if __name__ == "__main__":
    printLyrics()