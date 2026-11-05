# bin-2-dec

A lightweight, fast, and secure **Binary to Decimal** console converter written in C.

---

## 📌 About

This program validates a user-input binary string (`base-2`) up to 32 bits and converts it into its unsigned decimal (`base-10`) equivalent.

### Features
- **Input Safety:** Limits string input to 32 characters using `scanf("%32s", numbers)` to prevent buffer overflows.
- **Format Validation:** Ensures input consists strictly of `'0'` and `'1'` characters, displaying an error message on invalid input.
- **Dynamic 32-bit Range:** Seamlessly converts binary inputs ranging from 1 to 32 bits (supporting values from `0` up to `4,294,967,295`).
- **Fast & Lightweight:** Uses bitwise accumulation logic without relying on heavy external math libraries.

---

## 🚀 Installation & Usage

### Prerequisites
- GCC compiler (or any standard C compiler)

### 1. Clone the Repository
```bash
git clone https://github.com/Kaaner4x/bin-2-dec.git
cd bin-2-dec
```

### 2. Compile
```bash
gcc main.c -o bin-2-dec
```

### 3. Run

**Windows:**
```cmd
bin-2-dec.exe
```

**Linux / macOS:**
```bash
./bin-2-dec
```

---

## 🖥️ Example Usage

```text
Enter the base-2 number (up to 32 bits, e.g. 11010010): 11010010
Result: 210
```

```text
Enter the base-2 number (up to 32 bits, e.g. 11010010): 11111111111111111111111111111111
Result: 4294967295
```

```text
Enter the base-2 number (up to 32 bits, e.g. 11010010): 10201
Invalid format!
```

---

## 📄 License

This project is licensed under the [MIT License](LICENSE). See the [`LICENSE`](LICENSE) file for details.
