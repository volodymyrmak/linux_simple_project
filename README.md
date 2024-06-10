# Installation Instructions

## Installing from Archive

To install from an archive, follow these steps:

1. First, you need to unarchive `mathcalcs-1.0.tar.gz` with the following commands:

    ```bash
    tar -xvf mathcalcs-1.0.tar.gz
    cd mathcalcs-1.0
    ./configure
    ```

    Optional: Run `make distcheck` to check if the environment is compatible with the project.

2. Then, build and install the library:

    ```bash
    make
    sudo make install
    ```

## Building from Scratch

If you want to create the library from scratch for development purposes, follow these steps:

1. To configure run the following commands:

    ```bash
    aclocal
    autoconf
    automake --add-missing
    ./configure
    ```

2. To build and install the library:

    ```bash
    make
    sudo make install
    ```

## Cleaning Up

To clean all the generated and installed files, use the following command:

```bash
sudo make clean-all
```
