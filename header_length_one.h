#include <stdint.h>


#ifndef HEADER_LENGTH_H_
#define HEADER_LENGTH_H_

#define MAX_RECEIVED_LENGTH 25
//#define SINGLENODEINFO_LENGTH 5
#define LOWERLIMIT_AH 0
#define MARKER_PULLMOREDATA 0x0DD
#define MARKER_ENDOFDATA 0x0BB

#define MAX_NODE 20
#define DIVISION_FACTOR_SM 2

typedef struct nodefull_info
{
	uint16_t SourceId;
	uint8_t data_sm;
	//uint8_t data_sm_30;
	//uint8_t data_sm_60;
	//uint8_t data_sm_90;
	uint8_t data_st;
	uint8_t data_ah;
	uint8_t data_at;

}nodefull_info;


#endif /* HEADER_LENGTH_H_ */







