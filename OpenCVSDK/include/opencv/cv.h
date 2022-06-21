#ifndef __OPENCV_OLD_CV_H__
#define __OPENCV_OLD_CV_H__

#if defined(_MSC_VER)
    #define CV_DO_PRAGMA(x) __pragma(x)
    #define __CVSTR2__(x) #x
    #define __CVSTR1__(x) __CVSTR2__(x)
    #define __CVMSVCLOC__ __FILE__ "("__CVSTR1__(__LINE__)") : "
    #define CV_MSG_PRAGMA(_msg) CV_DO_PRAGMA(message (__CVMSVCLOC__ _msg))
#elif defined(__GNUC__)
    #define CV_DO_PRAGMA(x) _Pragma (#x)
    #define CV_MSG_PRAGMA(_msg) CV_DO_PRAGMA(message (_msg))
#else
    #define CV_DO_PRAGMA(x)
    #define CV_MSG_PRAGMA(_msg)
#endif
#define CV_WARNING(x) CV_MSG_PRAGMA("Warning: " #x)

//CV_WARNING("This is a deprecated opencv header provided for compatibility. Please include a header from a corresponding opencv module")

#include "opencv2/core/core_c.h"
#include "opencv2/core/core.hpp"
#include "opencv2/imgproc/imgproc_c.h"
#include "opencv2/imgproc/imgproc.hpp"
#include "opencv2/video/tracking.hpp"
#include "opencv2/features2d/features2d.hpp"
#include "opencv2/flann/flann.hpp"
#include "opencv2/calib3d/calib3d.hpp"
#include "opencv2/objdetect/objdetect.hpp"
#include "opencv2/legacy/compat.hpp"

#if !defined(CV_IMPL)
#define CV_IMPL extern "C"
#endif //CV_IMPL

#if defined(__cplusplus)
#include "opencv2/core/internal.hpp"
#endif //__cplusplus

#endif // __OPENCV_OLD_CV_H_
