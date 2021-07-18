# CarroRoboticoNUCLEO-64_STMF103

This is a 3-6V DC motor API for a [NUCLEO-F103RB](https://www.st.com/en/evaluation-tools/nucleo-f103rb.html) board. This API controls two 3-6V DC motor in order to make possible the control and navigation of an autonomous car.

This API was developed as an assignment for the discipline of Embedded Systems Programming at Federal University of Minas Gerais in July 2021. The classes were taught by professor Ricardo de Oliveira Duarte and the authors are Bruno Guimarães Bitencourt and Ian Fernandes Miranda.

The developed library is inside the folder library and inside the folder example is on example code that uses the functions implemented on the library to execute one square path using one vehicle with two wheels. 

**Attention**: This library was developed to control only the DC motors, if you need to implement a full functional aoutonomous vehicle it's necessary to include the environment sensoring. When using a different board, it is mandatory to initialize the respective ports and pins for each device with the appropriate funcion.

[brunogbitencourt@ufmg.br](mailto:brunogbitencourt@ufmg.br), [ianfm@ufmg.br](mailto:ianfm@ufmg.br)
