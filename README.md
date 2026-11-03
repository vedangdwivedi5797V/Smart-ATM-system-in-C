

# 🏧 Smart ATM System in C

## 📌 Project Overview

The **Smart ATM System** is a simple, menu-driven banking application developed using the C programming language. It simulates the basic operations of an Automated Teller Machine (ATM), allowing users to securely access their accounts using a PIN and perform basic banking transactions.

This project is developed as a first-year college programming project to understand and implement fundamental concepts of C programming.

## ✨ Features

- **PIN Authentication:** Secure login using a predefined ATM PIN.
- **Balance Inquiry:** Check the current account balance.
- **Cash Withdrawal:** Withdraw money with balance validation.
- **Cash Deposit:** Deposit money into the account.
- **Input Validation:** Prevents invalid amounts and insufficient balance.
- **Interactive Menu:** Easy-to-use terminal-based interface.
- **Exit Option:** Safely exit the ATM system.

## 🛠️ Technologies Used

- **Programming Language:** C
- **Compiler:** GCC
- **IDE:** Visual Studio Code
- **Interface:** Command Line / Terminal

## 📚 C Concepts Implemented

This project demonstrates the use of:

- Variables and Data Types
- Input and Output (`printf`, `scanf`)
- Conditional Statements (`if-else`)
- Switch Case
- Loops (`do-while`)
- Arithmetic Operations
- Basic Input Validation

## 🚀 How to Run the Project

### Step 1: Clone the Repository

```bash
git clone https://github.com/your-username/Smart-ATM-System.git
```

### Step 2: Open the Project Folder

```bash
cd Smart-ATM-System
```

### Step 3: Compile the C Program

```bash
gcc atm.c -o atm
```

### Step 4: Run the Program

**Windows:**
```bash
atm.exe
```

**Linux / macOS:**
```bash
./atm
```

## 🔐 Default ATM Credentials

| Details | Value |
|---|---|
| ATM PIN | `1234` |
| Initial Balance | ₹10,000.00 |

## 💻 Sample Output

```text
================================
       WELCOME TO SMART ATM
================================

Enter your ATM PIN: 1234

Login Successful!

========== ATM MENU ==========
1. Balance Inquiry
2. Cash Withdrawal
3. Cash Deposit
4. Exit

Enter your choice: 1

Your balance is: Rs. 10000.00
```

## ⚠️ Limitations

- Account information is not permanently stored.
- The ATM PIN is predefined in the source code.
- Transaction history is not maintained.
- This is a simulation project and not connected to a real banking system.

## 🔮 Future Improvements

- Add Change PIN functionality.
- Implement Mini Statement / Passbook.
- Add Transaction History.
- Introduce multiple user accounts.
- Implement file handling for permanent data storage.

## 👨‍💻 Author

**Vedang Dwivedi**

First-Year Student | C Programming Project

## ⭐ Acknowledgement

This project was developed as part of learning the fundamentals of C programming and understanding how real-life banking operations can be simulated through programming.

---

⭐ If you find this project interesting, consider giving this repository a star!
