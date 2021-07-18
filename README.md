# CarroRoboticoNUCLEO-64_STMF103

This is a 3-6V DC motor API for a [NUCLEO-F103RB](https://www.st.com/en/evaluation-tools/nucleo-f103rb.html) board. It manipulates two 3-6V DC motors in order to control and navigate an autonomous vehicle.

This API was developed in July 2021 by Bruno Guimarães Bitencourt and Ian Fernandes Miranda as an assignment for the discipline of Embedded Systems Programming at the Federal University of Minas Gerais (UFMG). The classes were taught by professor Ricardo de Oliveira Duarte.

The developed library is located inside the folder entitled as "library". Inside the folder entitled "example" there's an example code that uses the functions implemented on the library to make a two wheeled vehicle perform a squared path on the ground. 

**Attention**: This library was developed to control only the described DC motors. If your goal is to implement a full functional aoutonomous vehicle it's necessary to include the environment sensoring. When using a different board, it is mandatory to initialize the respective ports and pins for each device with the appropriate functions.

[brunogbitencourt@ufmg.br](mailto:brunogbitencourt@ufmg.br), [ianfm@ufmg.br](mailto:ianfm@ufmg.br)
