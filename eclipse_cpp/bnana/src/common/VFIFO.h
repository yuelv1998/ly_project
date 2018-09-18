/*
 * VFIFO.h
 *
 *  Created on: 2018Äê6ÔÂ2ÈÕ
 *      Author: lvyue
 */

#ifndef VFIFO_H_
#define VFIFO_H_

#include <sys/types.h>
#include <sys/stat.h>
#include "GlobalType.h"

class VFIFO {
public:
	VFIFO();
	int GenerateFIFO(string pathname );
	virtual ~VFIFO();
private:
	enum IPCMODE  mode;

};

#endif /* VFIFO_H_ */
