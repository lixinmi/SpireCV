/*
 * @Description: Common Data Structures of gimbal
 * @Author: L LC @amov
 * @Date: 2022-10-31 11:56:43
 * @LastEditors: L LC @amov
 * @LastEditTime: 2023-04-18 10:12:33
 * @FilePath: /gimbal-sdk-multi-platform/src/amov_gimbal_struct.h
 */

#include <stdint.h>

#ifndef  __AMOV_GIMABL_STRUCT_H
#define  __AMOV_GIMABL_STRUCT_H

namespace amovGimbal
{
    typedef void (*pStateInvoke)(double &frameAngleRoll, double &frameAnglePitch, double &frameAngleYaw,
                                 double &imuAngleRoll, double &imuAnglePitch, double &imuAngleYaw,
                                 double &fovX, double &fovY);

    typedef enum
    {
        AMOV_GIMBAL_MODE_LOCK,
        AMOV_GIMBAL_MODE_NULOCK,
    } AMOV_GIMBAL_MODE_T;

    typedef enum
    {
        AMOV_GIMBAL_VIDEO_TAKE,
        AMOV_GIMBAL_VIDEO_OFF
    } AMOV_GIMBAL_VIDEO_T;

    typedef enum
    {
        AMOV_GIMBAL_ZOOM_IN,
        AMOV_GIMBAL_ZOOM_OUT,
        AMOV_GIMBAL_ZOOM_STOP
    } AMOV_GIMBAL_ZOOM_T;

    typedef struct
    {
        double yaw;
        double roll;
        double pitch;
    } AMOV_GIMBAL_POS_T;

    typedef struct
    {
        double x;
        double y;
    }AMOV_GIMBAL_FOV_T;
    

    typedef struct
    {
        AMOV_GIMBAL_MODE_T workMode;
        AMOV_GIMBAL_VIDEO_T video;
        AMOV_GIMBAL_POS_T abs;
        AMOV_GIMBAL_POS_T rel;
        AMOV_GIMBAL_POS_T maxFollow;
        AMOV_GIMBAL_FOV_T fov;
    } AMOV_GIMBAL_STATE_T;

    typedef struct
    {
        uint32_t centreX;
        uint32_t centreY;
        uint32_t hight;
        uint32_t width;
    } AMOV_GIMBAL_ROI_T;

} // namespace amovGimbal

#endif
