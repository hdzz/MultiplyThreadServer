/*
 * magicNum.h
 *
 *  Created on: Aug 16, 2013
 *      Author: keym
 */

#ifndef MAGICNUM_H_
#define MAGICNUM_H_

//#define SYSPATH "/usr/src/linux-headers-3.2.0-51/include/linux"
#include</usr/src/linux-headers-3.2.0-51/include/linux/types.h>
//魔法数一定不要直接使用

#define CSUCCESS 0
#define CFAILED -1

#ifdef __cplusplus

namespace magicnum{
const ssize_t SUCCESS = 0;
const ssize_t FAILED = -1;

namespace epollhandle{
const size_t MAXNUMFD = 2048;
const ssize_t MAXLISTENT = 10;
};

namespace configfile{
enum keylen{ KEYVALLEN = 100};
const char * const cfgpath = "../cfg.data";
};

};

#endif
#endif /* MAGICNUM_H_ */
