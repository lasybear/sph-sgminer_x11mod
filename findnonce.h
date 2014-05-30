#ifndef __FINDNONCE_H__
#define __FINDNONCE_H__
#include "miner.h"
#include "config.h"

#define MAXTHREADS (0xFFFFFFFEULL)

#define MAXBUFFERS (0x100)
#define BUFFERSIZE (sizeof(uint32_t) * MAXBUFFERS)
#define FOUND (0xFF)

#define THASHBUFSIZE (8 * 16 * 3080192)

extern void precalc_hash(dev_blk_ctx *blk, uint32_t *state, uint32_t *data);
extern void postcalc_hash_async(struct thr_info *thr, struct work *work, uint32_t *res);
#endif /*__FINDNONCE_H__*/
