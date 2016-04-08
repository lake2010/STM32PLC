#include "timer13.h"
#include "tim.h"
#include "variables.h"

// 
void Timer13_Init(void){

TIM13->PSC = 49999;
TIM13->ARR = 1759; //one second
TIM13->DIER |= TIM_DIER_UIE; //��������� ���������� �� �������
TIM13->CR1 |= TIM_CR1_CEN; // ������ ������!
NVIC_EnableIRQ(TIM8_UP_TIM13_IRQn); //���������� TIM6_DAC_IRQn ����������

  return;
}

void TIM13_IRQHandler(void){
static u32 Counter = 0;
TIM13->SR &= ~TIM_SR_UIF; //���������� ���� UIF

switch (Counter % 8){
  case 0: break;
  case 1: break;
  case 2: break;
  case 3: break;
  case 4: break;
  case 5: break;
  case 6: break;
  case 7: break;
  
}  
Counter++;
return;
}