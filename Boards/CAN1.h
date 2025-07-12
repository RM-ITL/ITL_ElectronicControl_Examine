#ifndef __CAN1_H__
#define __CAN1_H__

void CAN_Init(CAN_HandleTypeDef *hcan);
void CAN_Filter_Mask_Config(CAN_HandleTypeDef *hcan, uint8_t Object_Para, uint32_t ID, uint32_t Mask_ID);
uint8_t CAN_Send_Data(CAN_HandleTypeDef *hcan,uint16_t ID,uint8_t *Data, uint16_t Length);
void HAL_CAN_RxFifolMsgPendingCallback(CAN_HandleTypeDef *hcan);


#endif
