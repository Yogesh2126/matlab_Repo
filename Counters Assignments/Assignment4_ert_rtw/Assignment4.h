/*
 * File: Assignment4.h
 *
 * Code generated for Simulink model 'Assignment4'.
 *
 * Model version                  : 1.1
 * Simulink Coder version         : 9.1 (R2019a) 23-Nov-2018
 * C/C++ source code generated on : Mon Aug 30 10:36:23 2021
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Intel->x86-64 (Windows64)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef RTW_HEADER_Assignment4_h_
#define RTW_HEADER_Assignment4_h_
#include <stddef.h>
#include <string.h>
#ifndef Assignment4_COMMON_INCLUDES_
# define Assignment4_COMMON_INCLUDES_
#include "rtwtypes.h"
#endif                                 /* Assignment4_COMMON_INCLUDES_ */

#include "Assignment4_types.h"

/* Macros for accessing real-time model data structure */
#ifndef rtmGetErrorStatus
# define rtmGetErrorStatus(rtm)        ((rtm)->errorStatus)
#endif

#ifndef rtmSetErrorStatus
# define rtmSetErrorStatus(rtm, val)   ((rtm)->errorStatus = (val))
#endif

/* Block states (default storage) for system '<Root>' */
typedef struct {
  real_T UnitDelay1_DSTATE;            /* '<S1>/Unit Delay1' */
  real_T UnitDelay_DSTATE;             /* '<S1>/Unit Delay' */
  real_T UnitDelay2_DSTATE;            /* '<S1>/Unit Delay2' */
} DW_Assignment4_T;

/* External inputs (root inport signals with default storage) */
typedef struct {
  real_T Input;                        /* '<Root>/Input' */
} ExtU_Assignment4_T;

/* External outputs (root outports fed by signals with default storage) */
typedef struct {
  real_T Output;                       /* '<Root>/Output' */
} ExtY_Assignment4_T;

/* Real-time Model Data Structure */
struct tag_RTM_Assignment4_T {
  const char_T * volatile errorStatus;
};

/* Block states (default storage) */
extern DW_Assignment4_T Assignment4_DW;

/* External inputs (root inport signals with default storage) */
extern ExtU_Assignment4_T Assignment4_U;

/* External outputs (root outports fed by signals with default storage) */
extern ExtY_Assignment4_T Assignment4_Y;

/* Model entry point functions */
extern void Assignment4_initialize(void);
extern void Assignment4_step(void);
extern void Assignment4_terminate(void);

/* Real-time Model object */
extern RT_MODEL_Assignment4_T *const Assignment4_M;

/*-
 * These blocks were eliminated from the model due to optimizations:
 *
 * Block '<S1>/Display1' : Unused code path elimination
 */

/*-
 * The generated code includes comments that allow you to trace directly
 * back to the appropriate location in the model.  The basic format
 * is <system>/block_name, where system is the system number (uniquely
 * assigned by Simulink) and block_name is the name of the block.
 *
 * Use the MATLAB hilite_system command to trace the generated code back
 * to the model.  For example,
 *
 * hilite_system('<S3>')    - opens system 3
 * hilite_system('<S3>/Kp') - opens and selects block Kp which resides in S3
 *
 * Here is the system hierarchy for this model
 *
 * '<Root>' : 'Assignment4'
 * '<S1>'   : 'Assignment4/Subsystem'
 * '<S2>'   : 'Assignment4/Subsystem/Compare To Constant'
 * '<S3>'   : 'Assignment4/Subsystem/Compare To Constant1'
 */
#endif                                 /* RTW_HEADER_Assignment4_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
