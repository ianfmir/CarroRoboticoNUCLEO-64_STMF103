# CarroRoboticoNUCLEO-64_STMF103

This is a 3-6V DC motor API for a [NUCLEO-F103RB](https://www.st.com/en/evaluation-tools/nucleo-f103rb.html) board. It manipulates two 3-6V DC motors in order to control and navigate an autonomous vehicle.

This API was developed in July 2021 by Bruno Guimarães Bitencourt and Ian Fernandes Miranda as an assignment for the discipline of Embedded Systems Programming at the Federal University of Minas Gerais (UFMG). The classes were taught by professor Ricardo de Oliveira Duarte.

The developed library is located inside the folder entitled as "library". Inside the folder entitled "example" there's an example code that uses the functions implemented on the library to make a two wheeled vehicle perform a squared path on the ground. 

The functions implemented in the library allows the vehicle to perform the following commands: 

```C

void AndaFrente(TIM_HandleTypeDef timer);               //move forward
void AndaRe(TIM_HandleTypeDef timer);                   //move backward
void Parar(TIM_HandleTypeDef timer);                    //stop
void ViraDireita90(TIM_HandleTypeDef timer);            //spin rigth 90 degrees
void ViraEsquerda90(TIM_HandleTypeDef timer);           //spin left 90 degrees
void Gira180(TIM_HandleTypeDef timer);                  //spin left 180 degrees
void ViraEsquerdaSuave(TIM_HandleTypeDef timer);        //turn left
void ViraDireitaSuave(TIM_HandleTypeDef timer);         //turn right

```

**Attention**: This library was developed to control only the described DC motors. If your goal is to implement a full functional aoutonomous vehicle it's necessary to include the environment sensoring. When using a different board, it is mandatory to initialize the respective ports and pins for each device with the appropriate functions.

[brunogbitencourt@ufmg.br](mailto:brunogbitencourt@ufmg.br), [ianfm@ufmg.br](mailto:ianfm@ufmg.br)
