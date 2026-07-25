# 🎮 Rock Paper Scissors Game (C)

A simple command-line **Rock Paper Scissors** game developed in **C** where the player competes against the computer. The game keeps track of scores and displays the final winner when the player chooses to quit.

---

## 📌 Features

- 👤 Player name input
- 🪨 Rock, 📄 Paper, ✂️ Scissors gameplay
- 🤖 Random computer moves
- 🏆 Live score tracking
- 🎯 Final winner announcement
- ❌ Input validation for invalid choices
- 🚪 Quit option to end the game anytime

---

## 🛠️ Technologies Used

- C Programming Language
- Standard C Libraries:
  - `stdio.h`
  - `stdlib.h`
  - `time.h`

---

## 📂 Project Structure

```
Rock_Paper_Scissors_in_C/
│
├── rock_paper_scissors.c
└── README.md
```

---

## ▶️ How to Run

### Using GCC

1. Clone the repository

```bash
git clone https://github.com/karanangane2304/Rock-Paper-Scissors-in-C.git
```

2. Navigate to the project folder

```bash
cd Rock_Paper_Scissors_in_C
```

3. Compile the program

```bash
gcc rock_paper_scissors.c -o game
```

4. Run the executable

### Windows

```bash
game.exe
```

### Linux/macOS

```bash
./game
```

---

## 🎮 How to Play

After entering your name, choose one of the following options:

| Input | Move |
|-------:|------|
| 0 | Rock |
| 1 | Paper |
| 2 | Scissors |
| 3 | Quit Game |

The computer randomly selects its move.

### Rules

- Rock beats Scissors
- Paper beats Rock
- Scissors beats Paper
- Same choices result in a Draw

The score is updated after every round.

When you select **3**, the game ends and displays:

- Final Scores
- Winner
- Thank You message

---

## 📸 Sample Output

```
Welcome to Rock Paper Scissor Game!

Enter your Name: Karan

Welcome Karan

MENU
0 for Rock
1 for Paper
2 for Scissors
3 to Quit

You choose: 0

Your choice: 0
Computer's choice: 2

Karan, You Win!

Your Score: 1
Computer Score: 0
```

---

## 🔄 Game Flow

```
Start
   │
   ▼
Enter Player Name
   │
   ▼
Display Menu
   │
   ▼
Player Chooses Move
   │
   ▼
Computer Generates Random Move
   │
   ▼
Compare Moves
   │
   ▼
Update Scores
   │
   ▼
Display Scores
   │
   ├───────────────► Quit? (Choice = 3)
   │                    │
   │                    ▼
   │              Display Final Result
   │                    │
   └────────────── No ──┘
```

---

## 🚀 Future Improvements

- Display move names instead of numbers
- Better random number generation
- Best-of-3 / Best-of-5 mode
- Multiplayer mode
- Difficulty levels
- Colored console output
- Save high scores to a file
- Graphical User Interface (GUI)

---

## ⚠️ Known Limitation

The random number generator (`srand(time(NULL))`) is initialized inside the game loop. If multiple rounds are played within the same second, the computer may generate the same move repeatedly. A better practice is to call `srand(time(NULL));` **once before the loop starts**.

---

## 👨‍💻 Author

**Karan Angane**

GitHub: https://github.com/your-username

---

## 📄 License

This project is open source and available under the **MIT License**.

---

⭐ If you found this project helpful, consider giving it a star!
