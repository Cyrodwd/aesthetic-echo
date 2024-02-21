# aesthetic-echo

Aesthetic Echo is an alternative to the classic Linux "echo", with support for colors and styles.

# Before Compiling
This "program" is designed specifically for UNIX/Linux systems, therefore, you may have complications or you may not be able to run the program on a Windows system.

# Compiling

To compile Aesthetic Echo, make sure you have a C compiler installed on your system (e.g. gcc):
Some of the most well-known compilers include [GCC](https://gcc.gnu.org/) and [Clang](https://clang.llvm.org/).

```bash
make
```

# Installation
To install Aesthetic Echo system-wide, you can use the following command (you need to use `sudo`):

```bash
sudo make install
```

This will copy the `aesthetic_echo` executable to `/usr/local/bin`, allowing you to use it from anywhere in your system

# Usage
Once installed, you can use Aesthetic Echo as follows:

```bash
aesthetic_echo <color> <style> "Text to print"
```

# Uninstallation
If you want to uninstall Aesthetic Echo from your system, use the following command:
```bash
sudo make uninstall
```

# Contributions
Feel free to modify, add and/or fix features, your contribution would be greatly appreciated.
Just DO NOT add malicious lines of code.
