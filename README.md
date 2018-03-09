# Compiler

## Made by

    Troels Blicher Petersen (trpet15)
    Mark Jervelund          (mjerv15)
    Morten Kristian Jæger   (mojae15)

## How to run

### Compile entire project

To make the entire project:

```bash
make
```

### Compile specific parts

To compile main program:

```bash
make compiler
```

To compile tests

```bash
make tests
```

### Run the program(s)

For compiler:

```bash
./compiler
```

For tests:

```bash
./tests
```

## How to clean-up project

Clean only build files

```bash
make clean
```

Clean build files and compiled programs

```bash
make clean-all
```