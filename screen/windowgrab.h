#pragma once
#ifndef WINDOWGRAB_H
#define WINDOWGRAB_H

#include "../base/types.h"

#ifdef __cplusplus
extern "C"
{
#endif

/* Returns a raw bitmap of screengrab of the display (to be destroyed()'d by
 * caller), or NULL on error. */
MMBitmapRef copyMMBitmapFromDisplayInWindow(HWND hwnd, MMRect rect);

#ifdef __cplusplus
}
#endif

#endif /* WINDOWGRAB_H */
