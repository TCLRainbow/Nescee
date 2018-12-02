# Nescee

# NAND
This NES Classic NAND image is dumped by someone. I downloaded it from [rendezvo](https://www.rendezvo.us/nesmini/)

The bootrom(U-Boot) may boot from `0x1000` or `0x2000` in NAND. [Reference](http://linux-sunxi.org/Mainline_U-Boot#Configure_U-Boot)

## ELF
According to [m0skit0 (Stack Overflow)](https://stackoverflow.com/a/12822731/8314159), the sequence of `7f 45 4c 46` represents an ELF entry. In this NAND image , there are several addresses that match the sequence. The addresses are as follow:
* `0x7B60B1`
* `0x7F2A13`
* `0x8459AC`
* `0x8AF8BE`

# CPU
The CPU (Allwinner R16/A33) features quad-core [Cortex-A7](https://developer.arm.com/products/processors/cortex-a/cortex-a7).

# Misc
* [HEX to ARM instruction converter](http://armconverter.com/hextoarm/)