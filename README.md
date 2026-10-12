# Pure IF-Statement Calculator Generator

> You can adjust the numbers to "increase?" the calculator's capacity.

A C program that generates a 30,000+ line hardcoded calculator using ONLY independent `if` statements (no `else-if`) to bypass compiler stack limits. The ultimate programmer meme for TikTok Instagram, and Youtube!

## Why independent `if` statements?
If you attempt to chain thousands of `else if` statements, the Clang compiler crashes due to stack exhaustion (`Illegal instruction: 4`). By using independent `if` statements with `&&`, the AST depth stays at 1, allowing this monstrosity to compile smoothly.

## How to Use
1. Compile the generator:
   ```bash
   gcc generator.c -o generator
