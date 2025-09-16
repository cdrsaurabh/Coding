import sys
from rich import print
from time import sleep
import time

def printLyrics():
    lines = [
        ("Teri Ada Pe Pagal", 0.06),  #1
        ("Hum Sharabi Ban Gaye Shayar", 0.05),  #2
        ("Haay Ri Ada Pe Paagal", 0.07),  #3
        ("Hum Sharaabi Ban Gaye Shayar", 0.08),  #4
        ("Tere Jism Ki Ye Khushboo", 0.08),  #5
        ("Jab Itrr Se Mil Jaye", 0.068), #6
        ("Bin Piye Ladkharane Lagun", 0.07),  #7
        ("Mujhe Yoon Madhosh Kar Jaye", 0.08),  #8
        
    ]
    
    # Wait for user input before starting
    print("🎵 Ready to display lyrics!")
    print("Start your music, then press ENTER to begin...")
    input()  # This waits for Enter and doesn't show what you type
    
    print("🎵 Starting lyrics...\n")
    
    for line, delay in lines:
        for char in line:
            print(char, end='', flush=True)
            time.sleep(delay)
        print()  # New line after each lyric line
        time.sleep(0.9)  # Pause between lines

if __name__ == "__main__":
    printLyrics()