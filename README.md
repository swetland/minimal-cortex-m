
This is a very minimal skeleton for building bare metal cortex-m code.

It borrows the CMSIS startup glue and link script (Apache 2.0 license).

It provides a tiny bit of glue for the ARM SemiHosting interface
(see docs here: https://github.com/ARM-software/abi-aa/blob/main/semihosting/semihosting.rst)

The test "app" prints a message and exits qemu via the semihosting interface.

