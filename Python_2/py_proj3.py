import time

def printLyrics():
    lines = [
        ("Teri Ada Pe Pagal", 0.06, 0.3, 0.6),
        ("Hum Sharabi Ban Gaye Shayar", 0.06, 0.15, 0.4),
        ("Haay Ri Ada Pe Paagal", 0.06, 0.25, 0.4),
        ("Hum Sharaabi Ban Gaye Shayar", 0.06, 0.15,0.2),
        ("Tere Jism Ki Ye Khushboo", 0.04, 0.12, 0.4),
        ("Jab Itrr Se Mil Jaye", 0.05, 0.20, 0.6),
        ("Bin Piye Ladkharane Lagun", 0.06, 0.25, 0.6),
        ("Mujhe Yoon Madhosh Kar Jaye", 0.06, 0.20,0.8),
    ]
    input()

    for idx, (line, char_delay, word_delay, line_delay) in enumerate(lines, start=1):
        words = line.split()
        for word in words:
            for char in word:
                print(char, end='', flush=True)
                time.sleep(char_delay)
            print(" ", end='', flush=True)
            time.sleep(word_delay)
        print()  # line complete
        time.sleep(line_delay)

        # har 4th line ke baad ek khali line
        if idx % 4 == 0:
            print()

if __name__ == "__main__":
    printLyrics()